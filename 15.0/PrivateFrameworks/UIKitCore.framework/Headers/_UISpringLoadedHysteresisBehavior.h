// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISPRINGLOADEDHYSTERESISBEHAVIOR_H
#define _UISPRINGLOADEDHYSTERESISBEHAVIOR_H

@class NSString, CADisplayLink;
@protocol UISpringLoadedInteractionBehavior_Private, UISpringLoadedInteractionContext, UISpringLoadedInteractionBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "_UIVelocityIntegrator.h"

@interface _UISpringLoadedHysteresisBehavior : NSObject <UISpringLoadedInteractionBehavior_Private>



@property (nonatomic) CGFloat beginningVelocityThreshold; // ivar: _beginningVelocityThreshold
@property (nonatomic) CGFloat cancelingVelocityThreshold; // ivar: _cancelingVelocityThreshold
@property (weak, nonatomic) NSObject<UISpringLoadedInteractionContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UISpringLoadedInteractionBehaviorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // ivar: _velocityIntegrator


-(BOOL)shouldAllowInteraction:(id)arg0 withContext:(id)arg1 ;
-(void)_tick:(id)arg0 ;
-(void)interactionDidFinish:(id)arg0 ;
-(void)setupDisplayLink;


@end


#endif