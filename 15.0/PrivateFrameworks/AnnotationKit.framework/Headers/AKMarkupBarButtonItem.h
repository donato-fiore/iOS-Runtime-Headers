// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKMARKUPBARBUTTONITEM_H
#define AKMARKUPBARBUTTONITEM_H

@class UIBarButtonItem, UIButton;


#import "AKMarkupButtonContainerView.h"

@interface AKMarkupBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIButton *toggleButton; // ivar: _toggleButton
@property (retain, nonatomic) AKMarkupButtonContainerView *toggleView; // ivar: _toggleView


+(id)markupBarButtonWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)init;
-(void)setAction:(SEL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 ;


@end


#endif