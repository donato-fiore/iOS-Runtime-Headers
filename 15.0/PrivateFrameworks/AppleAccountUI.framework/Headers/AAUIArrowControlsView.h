// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIARROWCONTROLSVIEW_H
#define AAUIARROWCONTROLSVIEW_H

@class UIView, UIButton;
@protocol AAUIArrowControlsViewDelegate;



@interface AAUIArrowControlsView : UIView

@property (nonatomic) NSObject<AAUIArrowControlsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *downButton; // ivar: _downButton
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) UIButton *upButton; // ivar: _upButton


+(CGFloat)defaultHeightForOrientation:(NSInteger)arg0 ;
+(CGFloat)defaultWidthForOrientation:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_arrowButtonWasTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif