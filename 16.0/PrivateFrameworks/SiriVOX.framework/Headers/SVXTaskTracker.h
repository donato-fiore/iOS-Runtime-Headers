// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXTASKTRACKER_H
#define SVXTASKTRACKER_H

@class NSString, NSError, AFAnalyticsTurnBasedInstrumentationContext, SAUIListenAfterSpeakingBehavior, NSUUID;
@protocol SVXTaskTracking, SVXTaskTrackingDelegate;

#import <Foundation/Foundation.h>

#import "SVXActivationContext.h"
#import "SVXTaskContext.h"
#import "SVXDeactivationContext.h"

@interface SVXTaskTracker : NSObject <SVXTaskTracking>

 {
    id<SVXTaskTrackingDelegate> *_delegate;
}


@property (readonly, nonatomic) NSString *aceId;
@property (readonly, nonatomic) SVXActivationContext *activationContext;
@property (readonly, copy, nonatomic) SVXTaskContext *context; // ivar: _context
@property (readonly, nonatomic) SVXDeactivationContext *deactivationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *dialogIdentifier;
@property (readonly, nonatomic) NSString *dialogPhase;
@property (readonly, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *instrumentationContext; // ivar: _instrumentationContext
@property (readonly, nonatomic) BOOL isUUFR;
@property (readonly, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (readonly, nonatomic) BOOL listensAfterSpeaking;
@property (readonly, nonatomic) NSInteger origin;
@property (readonly, nonatomic) NSObject<SVXTaskTracking> *parent; // ivar: _parent
@property (readonly, nonatomic) NSString *refId;
@property (readonly, nonatomic) NSUUID *requestUUID;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timestamp;


-(id)beginChildWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 instrumentationContext:(id)arg1 delegate:(id)arg2 ;
-(void)dealloc;


@end


#endif