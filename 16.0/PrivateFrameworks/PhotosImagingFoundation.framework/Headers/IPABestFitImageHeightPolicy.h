// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPABESTFITIMAGEHEIGHTPOLICY_H
#define IPABESTFITIMAGEHEIGHTPOLICY_H



#import "IPAImageSizePolicy.h"

@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy {
    CGFloat _fitHeight;
}




-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeight:(CGFloat)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif