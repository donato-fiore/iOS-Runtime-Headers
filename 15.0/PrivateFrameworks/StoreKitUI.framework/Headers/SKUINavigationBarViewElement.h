// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUINAVIGATIONBARVIEWELEMENT_H
#define SKUINAVIGATIONBARVIEWELEMENT_H

@class NSArray, UIColor;


#import "SKUIViewElement.h"

@interface SKUINavigationBarViewElement : SKUIViewElement

@property (readonly, nonatomic) BOOL hidesBackButton; // ivar: _hidesBackButton
@property (readonly, nonatomic) BOOL hidesShadow; // ivar: _hidesShadow
@property (readonly, nonatomic) BOOL isTransparent;
@property (readonly, nonatomic) NSArray *mainViewElements;
@property (readonly, nonatomic) NSArray *navigationPalettes;
@property (readonly, nonatomic) UIColor *tintColor;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif