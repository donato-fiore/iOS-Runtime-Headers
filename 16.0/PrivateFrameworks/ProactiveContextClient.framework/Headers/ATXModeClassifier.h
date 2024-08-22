// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODECLASSIFIER_H
#define ATXMODECLASSIFIER_H

@class _PASQueueLock, BMInferredModeStream, _PASSimpleCoalescingTimer, CLLocationManager;
@protocol ATXModeClassifierClientModelDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXConfiguredModeService.h"
#import "ATXModeAnchorModelSuggestionServer.h"
#import "ATXModeHeuristicClassifier.h"
#import "ATXMicrolocationRecordingTrigger.h"

@interface ATXModeClassifier : NSObject <ATXModeClassifierClientModelDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    _PASQueueLock *_lock;
    BMInferredModeStream *_inferredModeStream;
    ATXConfiguredModeService *_modeService;
    ATXModeAnchorModelSuggestionServer *_anchorModelSuggestionServer;
    ATXModeHeuristicClassifier *_heuristicModeClassifier;
    ATXMicrolocationRecordingTrigger *_microlocationRecordingTrigger;
    _PASSimpleCoalescingTimer *_modeExpirationTimer;
    CLLocationManager *_locationManager;
}




+(id)updateModeWithUUID:(id)arg0 userModeName:(id)arg1 modeType:(NSUInteger)arg2 modeOrigin:(NSInteger)arg3 originAnchorType:(id)arg4 originBundleId:(id)arg5 uiLocation:(NSUInteger)arg6 confidenceScore:(CGFloat)arg7 serializedTriggers:(id)arg8 allowsSmartEntry:(BOOL)arg9 shouldSuggestTriggers:(BOOL)arg10 currentMode:(id)arg11 stream:(id)arg12 ;
+(void)provideModeClassifierWhenReadyWithDuetHelper:(id)arg0 block:(id)arg1 ;
-(BOOL)_isModeType:(NSUInteger)arg0 uuid:(id)arg1 sameAsModeFromEvent:(id)arg2 ;
-(BOOL)_shouldUpdateMode:(NSInteger)arg0 currentModeScore:(id)arg1 newModeOrigin:(NSInteger)arg2 newModeScore:(id)arg3 ;
-(id)currentMode;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 ;
-(void)_expireMode;
-(void)_setUpModeExpirationTimerIfNeededWithModeOrigin:(NSInteger)arg0 ;
-(void)_updateWithGuardedData:(id)arg0 newModeUUID:(id)arg1 userModeName:(id)arg2 modeType:(NSUInteger)arg3 modeOrigin:(NSInteger)arg4 originBundleId:(id)arg5 originAnchorType:(id)arg6 uiLocation:(NSUInteger)arg7 confidenceScore:(CGFloat)arg8 serializedTriggers:(id)arg9 allowsSmartEntry:(BOOL)arg10 shouldSuggestTriggers:(BOOL)arg11 ;
-(void)_updateWithNewModeUUID:(id)arg0 userModeName:(id)arg1 modeType:(NSUInteger)arg2 modeOrigin:(NSInteger)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 uiLocation:(NSUInteger)arg6 confidenceScore:(CGFloat)arg7 serializedTriggers:(id)arg8 allowsSmartEntry:(BOOL)arg9 shouldSuggestTriggers:(BOOL)arg10 ;
-(void)_updateWithNewModeUUIDIfNeeded:(id)arg0 userModeName:(id)arg1 modeType:(NSUInteger)arg2 modeOrigin:(NSInteger)arg3 originBundleId:(id)arg4 originAnchorType:(id)arg5 confidenceScore:(CGFloat)arg6 serializedTriggers:(id)arg7 ;
-(void)clientModel:(id)arg0 didUpdatePredictionWithUUID:(id)arg1 userModeName:(id)arg2 modeType:(NSUInteger)arg3 confidenceScore:(CGFloat)arg4 modeOrigin:(NSInteger)arg5 originBundleId:(id)arg6 originAnchorType:(id)arg7 serializedTriggers:(id)arg8 ;


@end


#endif