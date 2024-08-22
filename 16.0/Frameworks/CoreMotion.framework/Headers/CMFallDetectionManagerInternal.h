// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMFALLDETECTIONMANAGERINTERNAL_H
#define CMFALLDETECTIONMANAGERINTERNAL_H

@class NSString;
@protocol CMFallDetectionClientXPC, OS_dispatch_queue, CMFallDetectionManagerInternalDelegate;

#import <Foundation/Foundation.h>

#import "CMFallDetectionClient.h"
#import "CMAnomalyEvent.h"

@interface CMFallDetectionManagerInternal : NSObject <CMFallDetectionClientXPC>

 {
    *void _locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _fallDetectionNotificationToken;
    CMFallDetectionClient *_fallDetectionClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CMFallDetectionManagerInternalDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL fallDetectionEnabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CMAnomalyEvent *mostRecentEvent; // ivar: _mostRecentEvent
@property (copy, nonatomic) id *newtonPromptHandler; // ivar: _newtonPromptHandler
@property (readonly) Class superclass;


+(id)_responseDictionaryWithMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(id)init;
-(void)_appDelegateDidFinishProcessingWithDuration:(CGFloat)arg0 ;
-(void)_appDidBecomeActive:(id)arg0 ;
-(void)_configureLocationClientIfNeeded;
-(void)_fetchMostRecentFallEvent;
-(void)_handleAnomalyEventCompletedMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)_invalidateLocationClient;
-(void)_requestNewtonPromptWithCompletion:(id)arg0 ;
-(void)_requestTCCWithCompletion:(id)arg0 ;
-(void)_subscribeToCompletedFallEvents;
-(void)dealloc;
-(void)didHideFallDetectionPrompt;
-(void)didStartBackgroundSession;


@end


#endif