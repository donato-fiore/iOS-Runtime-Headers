// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWPROPERTYANIMATORTRACKINGGROUP_H
#define _UIVIEWPROPERTYANIMATORTRACKINGGROUP_H

@class NSString, NSArray;
@protocol UIViewImplicitlyAnimating;

#import <Foundation/Foundation.h>


@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fractionComplete;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isReversed) BOOL reversed;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *trackingAnimators; // ivar: _trackingAnimators


-(id)initWithAnimators:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)continueAnimationWithTimingParameters:(id)arg0 durationFactor:(CGFloat)arg1 ;
-(void)finishAnimationAtPosition:(NSInteger)arg0 ;
-(void)pauseAnimation;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(CGFloat)arg0 ;
-(void)stopAnimation:(BOOL)arg0 ;


@end


#endif