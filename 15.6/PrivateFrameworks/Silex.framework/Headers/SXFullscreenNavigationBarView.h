// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXFULLSCREENNAVIGATIONBARVIEW_H
#define SXFULLSCREENNAVIGATIONBARVIEW_H

@class UIView, UIVisualEffectView, UIButton;
@protocol SXFullscreenNavigationBarViewDelegate;



@interface SXFullscreenNavigationBarView : UIView

@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (weak, nonatomic) NSObject<SXFullscreenNavigationBarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL expanded; // ivar: _expanded


-(id)init;
-(void)createBackgroundView;
-(void)createDoneButton;
-(void)didMoveToSuperview;
-(void)doneButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateFrameAnimated:(BOOL)arg0 ;


@end


#endif