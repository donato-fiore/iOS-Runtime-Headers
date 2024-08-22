// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFBARSWIPEBEHAVIOR_H
#define SBFBARSWIPEBEHAVIOR_H

@class UINotificationFeedbackGenerator, UIView;
@protocol SBFBarSwipeBehaviorDelegate, UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>


@interface SBFBarSwipeBehavior : NSObject {
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    BOOL _didFireAction;
}


@property (weak, nonatomic) NSObject<SBFBarSwipeBehaviorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) UIView *grabberView; // ivar: _grabberView
@property (readonly, nonatomic) CGFloat grabberViewAdditionalEdgeSpacing; // ivar: _grabberViewAdditionalEdgeSpacing
@property (readonly, nonatomic) NSObject<UIViewSpringAnimationBehaviorDescribing> *settleAffordanceAnimationBehaviorDescription; // ivar: _settleAffordanceAnimationBehaviorDescription


-(CGFloat)_progressWithTranslation:(struct CGPoint )arg0 liftoffVelocity:(struct CGPoint )arg1 ;
-(id)initWithGrabberView:(id)arg0 settleAffordanceAnimationBehaviorDescription:(id)arg1 ;
-(void)_createFeedbackGenerator;
-(void)_fireAction;
-(void)_offsetGrabberForProgress:(CGFloat)arg0 ;
-(void)_setGrabberAdditionalEdgeSpacing:(CGFloat)arg0 ;
-(void)_settleGrabber;
-(void)barSwipeInteractionBegan:(id)arg0 ;
-(void)barSwipeInteractionCancelled:(id)arg0 ;
-(void)barSwipeInteractionChanged:(id)arg0 ;
-(void)barSwipeInteractionEnded:(id)arg0 ;


@end


#endif