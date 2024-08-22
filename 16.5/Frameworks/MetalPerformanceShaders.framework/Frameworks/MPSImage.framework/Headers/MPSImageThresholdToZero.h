// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGETHRESHOLDTOZERO_H
#define MPSIMAGETHRESHOLDTOZERO_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageThresholdToZero : MPSUnaryImageKernel {
    ? filterInfo;
}


@property (readonly, nonatomic) float thresholdValue;
@property (readonly, nonatomic) *float transform;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 thresholdValue:(float)arg1 linearGrayColorTransform:(*float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif