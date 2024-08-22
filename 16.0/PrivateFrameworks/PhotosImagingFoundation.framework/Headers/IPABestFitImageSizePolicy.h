// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPABESTFITIMAGESIZEPOLICY_H
#define IPABESTFITIMAGESIZEPOLICY_H



#import "IPAImageSizePolicy.h"

@interface IPABestFitImageSizePolicy : IPAImageSizePolicy {
    CGSize _fitSize;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFitSize:(struct CGSize )arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif