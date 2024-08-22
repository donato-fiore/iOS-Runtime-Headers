// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAVATARNOTIFICATIONCALLOUTVIEW_H
#define CKAVATARNOTIFICATIONCALLOUTVIEW_H

@class UIView, NSString, CAAnimation, UIImageView, UITapGestureRecognizer, UITextView;
@protocol CAAnimationDelegate, CKAvatarNotificationCalloutViewDelegate;



@interface CKAvatarNotificationCalloutView : UIView <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKAvatarNotificationCalloutViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAAnimation *finisherAnimation; // ivar: _finisherAnimation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) CAAnimation *starterAniamtion; // ivar: _starterAniamtion
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *tailImageView; // ivar: _tailImageView
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)_shouldShowShadow;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 previewText:(id)arg1 mode:(NSInteger)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)animateIn;
-(void)animateOut;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif