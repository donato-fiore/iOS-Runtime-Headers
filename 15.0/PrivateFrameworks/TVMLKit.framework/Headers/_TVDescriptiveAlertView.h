// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVDESCRIPTIVEALERTVIEW_H
#define _TVDESCRIPTIVEALERTVIEW_H

@class UIView, UIScrollView, NSArray, _UIRepeatingPressGestureRecognizer, UIImage, UIImageView, NSString;
@protocol UIScrollViewDelegate;



@interface _TVDescriptiveAlertView : UIView <UIScrollViewDelegate>

 {
    UIScrollView *_scrollView;
    NSArray *_viewsAboveScrollView;
    NSArray *_viewsBelowScrollView;
    BOOL _isCenteredLayout;
    _UIRepeatingPressGestureRecognizer *_upButtonGesture;
    _UIRepeatingPressGestureRecognizer *_downButtonGesture;
    BOOL _waiting;
    UIImage *_bgImage;
    UIImageView *_bgImageView;
}


@property (retain, nonatomic) NSArray *childViews; // ivar: _childViews
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *defaultFocusView; // ivar: _defaultFocusView
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_scrollDown;
-(void)_scrollDown:(id)arg0 ;
-(void)_scrollInDirection:(CGFloat)arg0 ;
-(void)_scrollUp;
-(void)_scrollUp:(id)arg0 ;
-(void)_setupGestureRecognizers;
-(void)layoutSubviews;
-(void)setBgImage:(id)arg0 ;


@end


#endif