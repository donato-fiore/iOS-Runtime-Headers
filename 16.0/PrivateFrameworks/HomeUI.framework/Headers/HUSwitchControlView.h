// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSWITCHCONTROLVIEW_H
#define HUSWITCHCONTROLVIEW_H

@class UIView, NSString, UISwitch;
@protocol HUControlView, HUControlViewDelegate;



@interface HUSwitchControlView : UIView <HUControlView>



@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) UISwitch *switchView; // ivar: _switchView
@property (retain, nonatomic) id *value;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_switchValueChanged:(id)arg0 ;


@end


#endif