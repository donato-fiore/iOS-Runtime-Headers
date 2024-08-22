// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEGAUSSIANBLUR_H
#define MPSIMAGEGAUSSIANBLUR_H



#import "MPSUnaryImageKernel.h"
#import "MPSImageConvolution.h"

@interface MPSImageGaussianBlur : MPSUnaryImageKernel {
    MPSImageConvolution *smallConv;
    int _planSteps;
    NSUInteger _numSteps;
    *CGFloat _plan;
    BOOL _cheesyBlur;
    float _scale;
}


@property (readonly, nonatomic) float sigma; // ivar: _sigma


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sigma:(float)arg1 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initFilterInfo;
-(void)toggleCheesyBlur;


@end


#endif