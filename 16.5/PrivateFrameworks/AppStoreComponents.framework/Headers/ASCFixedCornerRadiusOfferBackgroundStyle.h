// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCFIXEDCORNERRADIUSOFFERBACKGROUNDSTYLE_H
#define ASCFIXEDCORNERRADIUSOFFERBACKGROUNDSTYLE_H



#import "ASCOfferBackgroundStyle.h"

@interface ASCFixedCornerRadiusOfferBackgroundStyle : ASCOfferBackgroundStyle

@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)cornerRadiusForImageSize:(struct CGSize )arg0 stretchableArea:(CGFloat)arg1 ;
-(NSUInteger)hash;
-(id)initWithCornerRadius:(CGFloat)arg0 ;


@end


#endif