// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSHAKABLEVIEW_H
#define CSSHAKABLEVIEW_H

@class SBFTouchPassThroughView, NSString, NSArray;
@protocol CAAnimationDelegate;



@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate>

 {
    id *_shakeCompletionBlock;
}


@property (readonly, nonatomic) SBFTouchPassThroughView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *prototypeSpringAnimations; // ivar: _prototypeSpringAnimations
@property (nonatomic) CGFloat shakeDistance; // ivar: _shakeDistance
@property (readonly) Class superclass;


-(id)_defaultSpringAnimations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invokeCompletionBlockIfNecessary;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)beginShakingWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif