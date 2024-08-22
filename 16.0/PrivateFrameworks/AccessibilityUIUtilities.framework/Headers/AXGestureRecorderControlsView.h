// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXGESTURERECORDERCONTROLSVIEW_H
#define AXGESTURERECORDERCONTROLSVIEW_H

@class UIView, UIButton;
@protocol AXGestureRecorderControlsViewDelegate;


#import "ASTBiggerProgressView.h"

@interface AXGestureRecorderControlsView : UIView {
    ASTBiggerProgressView *_progressView;
}


@property (weak, nonatomic) NSObject<AXGestureRecorderControlsViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *leftButton; // ivar: _leftButton
@property (nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;
@property (retain, nonatomic) UIButton *middleButton; // ivar: _middleButton
@property (nonatomic) float progress;
@property (retain, nonatomic) UIButton *rightButton; // ivar: _rightButton
@property (nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeButton;
-(void)_buttonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif