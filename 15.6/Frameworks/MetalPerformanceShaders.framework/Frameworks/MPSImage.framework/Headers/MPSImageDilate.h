// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEDILATE_H
#define MPSIMAGEDILATE_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"
#import "MPSImageAreaMax.h"

@interface MPSImageDilate : MPSUnaryImageKernel {
    *RLERow _rleValues;
    id<MTLBuffer> *_rleBuf;
    MPSImageAreaMax *_outerMax;
    MPSImageAreaMax *_innerMax;
    unsigned int kernel;
    Class _maxClass;
    unsigned int headerSize;
    unsigned int valuesOffset;
    unsigned short centerWidth;
    unsigned short centerHeight;
}


@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)initKernelValues:(*float)arg0 ;
-(Class)maxClass;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 values:(*float)arg3 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif