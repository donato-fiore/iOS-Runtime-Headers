// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPABESTFITTOTALPIXELCOUNTIMAGESIZEPOLICY_H
#define IPABESTFITTOTALPIXELCOUNTIMAGESIZEPOLICY_H



#import "IPAImageSizePolicy.h"

@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy {
    NSInteger _totalPixelCount;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTotalPixelCount:(NSInteger)arg0 ;
-(struct CGSize )_transformSize:(struct CGSize )arg0 scale:(*CGFloat)arg1 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif