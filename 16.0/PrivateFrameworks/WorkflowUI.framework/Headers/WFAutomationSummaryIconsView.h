// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAUTOMATIONSUMMARYICONSVIEW_H
#define WFAUTOMATIONSUMMARYICONSVIEW_H

@class UIView, UIImageView, HUTriggerIconView, UIStackView;


#import "WFRowOfIconsView.h"

@interface WFAutomationSummaryIconsView : UIView

@property (readonly, nonatomic) WFRowOfIconsView *actionsIconsView; // ivar: _actionsIconsView
@property (readonly, nonatomic) UIImageView *arrowImageView; // ivar: _arrowImageView
@property (retain, nonatomic) HUTriggerIconView *homeTriggerIconView; // ivar: _homeTriggerIconView
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UIImageView *triggerIconView; // ivar: _triggerIconView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)configureIconView:(id)arg0 ;
-(void)setActionIcons:(id)arg0 ;
-(void)setHomeActionIcons:(id)arg0 ;
-(void)setHomeTriggerIcon:(id)arg0 ;
-(void)setTriggerIcon:(id)arg0 tintColor:(id)arg1 withCornerRadius:(CGFloat)arg2 ;
-(void)setTriggerIcon:(id)arg0 tintColor:(id)arg1 withTrigger:(id)arg2 ;


@end


#endif