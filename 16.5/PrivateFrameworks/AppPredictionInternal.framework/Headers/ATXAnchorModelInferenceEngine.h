// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELINFERENCEENGINE_H
#define ATXANCHORMODELINFERENCEENGINE_H

@class ATXCoreDuetContextHelper, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXAnchorModelPredictionScheduler.h"

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    uint8_t _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}




+(id)sharedInstance;
-(id)currentDuetEventForAnchor:(id)arg0 ;
-(id)entranceCallbackForAnchor:(SEL)arg0 ;
-(id)exitCallbackForAnchor:(SEL)arg0 ;
-(id)exitNotificationIdentifierForAnchor:(id)arg0 ;
-(id)init;
-(id)notificationIdentifierForAnchor:(id)arg0 ;
-(id)supportedAnchorsForInference;
-(void)dealloc;
-(void)handleAnchorEventForAnchor:(id)arg0 ;
-(void)handleAnchorEventForGymArrival;
-(void)handleAnchorEventForIdleTimeBegin;
-(void)handleAnchorEventForMicrolocationVisitAnchor;
-(void)handleAnchorExitEventForGymArrival;
-(void)handleInferenceEvent:(id)arg0 ;
-(void)handleLOIEntrance;
-(void)handleLOIExit;
-(void)queueHandleInferenceEvent:(id)arg0 ;
-(void)registerAnchorEventListenerForAnchor:(id)arg0 ;
-(void)registerAnchorEventListeners;
-(void)registerForAnchorEntrance:(id)arg0 cdContext:(id)arg1 ;
-(void)registerForAnchorExit:(id)arg0 cdContext:(id)arg1 ;
-(void)registerForWakingNotificationForAnchor:(id)arg0 cdContext:(id)arg1 ;
-(void)retryPreviouslyIncompleteInference;
-(void)setupContextStoreListenerForAnchor:(id)arg0 context:(id)arg1 ;
-(void)start;
-(void)unregisterAnchorEventListenerForAnchor:(id)arg0 ;
-(void)unregisterAnchorEventListeners;


@end


#endif