// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGETHRESHOLDBINARY_H
#define MPSIMAGETHRESHOLDBINARY_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageThresholdBinary : MPSUnaryImageKernel {
    ? filterInfo;
}


@property (readonly, nonatomic) float maximumValue;
@property (readonly, nonatomic) float thresholdValue;
@property (readonly, nonatomic) *float transform;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 thresholdValue:(float)arg1 maximumValue:(float)arg2 linearGrayColorTransform:(*float)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif