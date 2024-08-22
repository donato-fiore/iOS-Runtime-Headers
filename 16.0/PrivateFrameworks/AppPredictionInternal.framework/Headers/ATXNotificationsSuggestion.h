// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSSUGGESTION_H
#define ATXNOTIFICATIONSSUGGESTION_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"
#import "_ATXAppLaunchHistogram.h"
#import "ATXNotificationsLogger.h"
#import "_ATXAggregateLogger.h"
#import "_ATXDataStore.h"
#import "ATXNotificationsPriors.h"

@interface ATXNotificationsSuggestion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    _ATXAggregateLogger *_aggdlogger;
    _ATXDataStore *_db;
    ATXNotificationsPriors *_notificationsPriors;
    NSMutableSet *_inmemorycache;
    NSInteger _stype;
}




+(BOOL)isSettingSuggestion:(id)arg0 ;
+(id)createBundleIdentifierForSuggestionWithType:(NSInteger)arg0 ;
+(id)createNotificationIdForSuggestion:(id)arg0 ;
+(id)extractSuggestionTypeStringFromBundleIdentifier:(id)arg0 ;
+(id)generateAppId:(id)arg0 topic:(id)arg1 ;
+(id)getSuggestionLRModel;
-(BOOL)_checkIfInDB:(id)arg0 topic:(id)arg1 ;
-(BOOL)checkIfInDB:(id)arg0 topic:(id)arg1 ;
-(id)getResponses;
-(id)initWithSuggestionType:(NSInteger)arg0 ;
-(id)initWithSuggestionType:(NSInteger)arg0 notificationsHistogram:(id)arg1 applaunchHistogram:(id)arg2 ;
-(id)initWithSuggestionType:(NSInteger)arg0 notificationsHistogram:(id)arg1 applaunchHistogram:(id)arg2 dataStore:(id)arg3 notificationsLogger:(id)arg4 aggdlogger:(id)arg5 ;
-(id)message:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)logRTTOutcomeWithBundleId:(id)arg0 topic:(id)arg1 rttOutcome:(NSUInteger)arg2 ;
-(void)resetResponses;
-(void)suggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;


@end


#endif