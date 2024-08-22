// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONPREDICTIONCLIENT_H
#define ATXACTIONPREDICTIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol ATXActionPredictionInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXCacheReader.h"
#import "ATXEngagementRecordManager.h"

@interface ATXActionPredictionClient : NSObject <ATXActionPredictionInterface>

 {
    NSXPCConnection *_xpcConnection;
    NSString *_cacheBasePath;
    ATXCacheReader *_cacheReader;
    ATXEngagementRecordManager *_engagementRecordManager;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(id)_atxActionFromProactiveSuggestion:(id)arg0 ;
-(id)actionPredictionsForConsumerSubType:(unsigned char)arg0 limit:(int)arg1 ;
-(id)atxActionResponseFromBlendingActionPredictionCacheForConsumerSubType:(unsigned char)arg0 limit:(int)arg1 ;
-(id)init;
-(id)initWithCacheBasePath:(id)arg0 ;
-(void)dealloc;
-(void)getActionPredictionsForCandidateBundleIdentifiers:(id)arg0 candidateActionTypes:(id)arg1 consumerType:(NSUInteger)arg2 consumerSubType:(unsigned char)arg3 limit:(int)arg4 reply:(id)arg5 ;
-(void)getActionPredictionsForContext:(id)arg0 includeBundleIds:(id)arg1 excludeBundleIds:(id)arg2 includeActionTypes:(id)arg3 excludeActionTypes:(id)arg4 limit:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)removeActionPredictionNotificationsMatchingSuggestion:(id)arg0 reply:(id)arg1 ;
-(void)shouldDisplayDailyRoutineForContext:(id)arg0 reply:(id)arg1 ;


@end


#endif