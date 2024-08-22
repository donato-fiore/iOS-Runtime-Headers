// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSSUGGESTION_H
#define ATXNOTIFICATIONSSUGGESTION_H

@class NSMutableSet, NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXAppLaunchCategoricalHistogram.h"
#import "_ATXAppLaunchHistogram.h"
#import "ATXNotificationsLogger.h"
#import "_ATXAggregateLogger.h"
#import "_ATXDataStore.h"
#import "ATXNotificationsPriors.h"
#import "ATXNotificationsSuggestionLR.h"
#import "ATXNotificationsRecorderPermanentStore.h"

@interface ATXNotificationsSuggestion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    _ATXAggregateLogger *_aggdlogger;
    _ATXDataStore *_db;
    ATXNotificationsPriors *_notificationsPriors;
    CGFloat _threshold;
    CGFloat _stdthreshold;
    CGFloat _postthreshold;
    NSMutableSet *_inmemorycache;
    NSInteger _stype;
    BOOL _uselrmodel;
    ATXNotificationsSuggestionLR *_lrmodel;
    CGFloat _probaThreshold;
    NSCache *_cache;
    ATXNotificationsRecorderPermanentStore *_permanentStore;
}




+(BOOL)isSettingSuggestion:(id)arg0 ;
+(id)createBundleIdentifierForSuggestionWithType:(NSInteger)arg0 ;
+(id)createNotificationIdForSuggestion:(id)arg0 ;
+(id)extractSuggestionTypeStringFromBundleIdentifier:(id)arg0 ;
+(id)generateAppId:(id)arg0 topic:(id)arg1 ;
+(id)getSuggestionLRModel;
-(BOOL)_checkIfInDB:(id)arg0 topic:(id)arg1 ;
-(BOOL)checkIfInDB:(id)arg0 topic:(id)arg1 ;
-(CGFloat)computeLikelihood:(CGFloat)arg0 count:(CGFloat)arg1 ;
-(CGFloat)computePosterior:(CGFloat)arg0 count:(CGFloat)arg1 prior:(CGFloat)arg2 ;
-(CGFloat)computeScoreByLogisticRegression:(id)arg0 observed:(CGFloat)arg1 count:(CGFloat)arg2 ;
-(CGFloat)computeScoreByPriors:(id)arg0 observed:(CGFloat)arg1 count:(CGFloat)arg2 ;
-(CGFloat)computeStandardError:(CGFloat)arg0 count:(CGFloat)arg1 ;
-(CGFloat)computeThresholdScore:(id)arg0 topic:(id)arg1 ;
-(CGFloat)computeTurnoffProbabilityForBundleId:(id)arg0 ;
-(CGFloat)computeTurnoffProbabilityWithInput:(id)arg0 ;
-(CGFloat)shouldMakeSuggestionForBundleId:(id)arg0 topic:(id)arg1 ;
-(id)checkForBundleIdOverride;
-(id)computeFeaturesForBundleId:(id)arg0 ;
-(id)getCachedScoreForAppId:(id)arg0 ;
-(id)getResponses;
-(id)initWithSuggestionType:(NSInteger)arg0 permanentStore:(id)arg1 ;
-(id)initWithThresholds:(CGFloat)arg0 stdThreshold:(CGFloat)arg1 suggestionType:(NSInteger)arg2 notificationsHistogram:(id)arg3 applaunchHistogram:(id)arg4 uselrmodel:(BOOL)arg5 probaThreshold:(CGFloat)arg6 lrmodel:(id)arg7 permanentStore:(id)arg8 ;
-(id)initWithThresholds:(CGFloat)arg0 stdThreshold:(CGFloat)arg1 suggestionType:(NSInteger)arg2 notificationsHistogram:(id)arg3 applaunchHistogram:(id)arg4 uselrmodel:(BOOL)arg5 probaThreshold:(CGFloat)arg6 lrmodel:(id)arg7 permanentStore:(id)arg8 dataStore:(id)arg9 notificationsLogger:(id)arg10 aggdlogger:(id)arg11 ;
-(id)message:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;
-(void)logRTTOutcomeWithBundleId:(id)arg0 topic:(id)arg1 rttOutcome:(NSUInteger)arg2 ;
-(void)resetResponses;
-(void)suggestionResponse:(id)arg0 topic:(id)arg1 response:(NSInteger)arg2 ;


@end


#endif