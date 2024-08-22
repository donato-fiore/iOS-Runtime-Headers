// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUINAVIGATIONBARMENUSVIEW_H
#define SKUINAVIGATIONBARMENUSVIEW_H

@class NSArray;


#import "SKUIViewReuseView.h"

@interface SKUINavigationBarMenusView : SKUIViewReuseView {
    SEL _buttonAction;
    id *_buttonTarget;
    NSArray *_menuViewElements;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset


+(id)_attributedStringWithMenuItem:(id)arg0 context:(id)arg1 ;
+(void)requestLayoutWithMenus:(id)arg0 width:(NSInteger)arg1 context:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)reloadWithMenus:(id)arg0 width:(NSInteger)arg1 context:(id)arg2 ;
-(void)setButtonTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif