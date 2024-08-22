// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTPASSACTIONWIDGETBUTTON_H
#define PKPAYMENTPASSACTIONWIDGETBUTTON_H

@class UIButton, NSArray;



@interface PKPaymentPassActionWidgetButton : UIButton

@property (retain, nonatomic) NSArray *actionGroups; // ivar: _actionGroups
@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) NSUInteger passActionType; // ivar: _passActionType
@property (nonatomic) BOOL usesAccessibilityLayout; // ivar: _usesAccessibilityLayout


+(CGFloat)glyphImageHeight:(BOOL)arg0 ;
+(CGFloat)widgetHeightWithAccessibilityLayout:(BOOL)arg0 ;
-(id)initWithWidgetViewStyle:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyStyles;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif