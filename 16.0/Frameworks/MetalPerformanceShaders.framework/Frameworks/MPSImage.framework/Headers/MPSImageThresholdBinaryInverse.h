// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGETHRESHOLDBINARYINVERSE_H
#define MPSIMAGETHRESHOLDBINARYINVERSE_H



#import "MPSUnaryImageKernel.h"

@interface MPSImageThresholdBinaryInverse : MPSUnaryImageKernel {
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