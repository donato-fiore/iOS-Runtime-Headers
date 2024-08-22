// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTAPTOLOADVIEW_H
#define LPTAPTOLOADVIEW_H

@class UIView, UILongPressGestureRecognizer, NSString;
@protocol CAAnimationDelegate, UIGestureRecognizerDelegate, LPTapToLoadViewDelegate;


#import "LPComponentView.h"
#import "LPTextView.h"
#import "LPTapToLoadViewStyle.h"

@interface LPTapToLoadView : LPComponentView <CAAnimationDelegate, UIGestureRecognizerDelegate>

 {
    LPTextView *_captionView;
    UIView *_progressView;
    LPTapToLoadViewStyle *_style;
    UIView *_highlightView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    BOOL _wasTapped;
    id *_animateOutCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<LPTapToLoadViewDelegate> *tapToLoadViewDelegate; // ivar: _tapToLoadViewDelegate


-(BOOL)gestureRecognizer:(id)arg0 canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_createIndeterminateProgressIndicator;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 style:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateToProgressView;
-(void)_buildViews;
-(void)_didScroll;
-(void)_highlightLongPressRecognized:(id)arg0 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)animateOutWithCompletionHandler:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutComponentView;


@end


#endif