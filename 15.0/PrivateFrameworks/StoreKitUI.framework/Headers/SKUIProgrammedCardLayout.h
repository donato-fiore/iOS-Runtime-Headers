// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPROGRAMMEDCARDLAYOUT_H
#define SKUIPROGRAMMEDCARDLAYOUT_H



#import "SKUICardLayout.h"

@interface SKUIProgrammedCardLayout : SKUICardLayout



+(BOOL)allowsViewElement:(id)arg0 ;
-(CGFloat)bottomInsetForLastViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)horizontalContentInset;
-(CGFloat)topInsetForViewElement:(id)arg0 previousViewElement:(id)arg1 width:(CGFloat)arg2 ;
-(NSInteger)layoutStyle;
-(id)_fontForButton:(id)arg0 ;
-(id)_fontForLabel:(id)arg0 ;
-(id)_stringLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 ;
-(id)attributedStringForButton:(id)arg0 ;
-(id)attributedStringForLabel:(id)arg0 ;


@end


#endif