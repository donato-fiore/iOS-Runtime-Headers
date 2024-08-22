// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPASCALEIMAGESIZEPOLICY_H
#define IPASCALEIMAGESIZEPOLICY_H



#import "IPAImageSizePolicy.h"

@interface IPAScaleImageSizePolicy : IPAImageSizePolicy {
    CGFloat _scale;
}




-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)transformScaleForSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScale:(CGFloat)arg0 ;
-(struct CGSize )transformSize:(struct CGSize )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif