// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDATTRIBUTE_H
#define CDATTRIBUTE_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CDSession.h"

@interface CDAttribute : NSObject {
    CDSession *_session;
    NSMutableArray *resourceCallbackList;
    NSMutableArray *revocationCallbackList;
    NSObject<OS_dispatch_queue> *resourceCallbackQueue;
    int resourceCallToken;
    int focalAppToken;
    int conditionChangeToken;
    int systemConditionChangeToken;
    int localFocalInfoToken;
    int revocationToken;
    unsigned short _admissionMask;
    NSMutableDictionary *costCache;
    BOOL delayedUpdatePending;
    NSMutableDictionary *tokenCache;
    NSMutableDictionary *dateCache;
    NSMutableArray *activeReports;
    NSObject<OS_dispatch_queue> *_deferredRequestsQ;
    NSObject<OS_dispatch_queue> *admissionCacheQueue;
    NSMutableDictionary *admissionCache;
    CDSession *_sessionStrong;
    CDSession *_sessionWeak;
}


@property (readonly) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger integerId; // ivar: _integerId
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger type; // ivar: _type


-(BOOL)activityStartedWithValue:(id)arg0 cost:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)activityStartedWithValue:(id)arg0 cost:(NSInteger)arg1 onDate:(id)arg2 error:(*id)arg3 ;
-(BOOL)activityStoppedWithValue:(id)arg0 cost:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)activityStoppedWithValue:(id)arg0 cost:(NSInteger)arg1 onDate:(id)arg2 error:(*id)arg3 ;
-(BOOL)activityWithValue:(id)arg0 cost:(NSInteger)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)admissionCheckOfValue:(id)arg0 andOccurredWithValue:(id)arg1 cost:(NSInteger)arg2 type:(NSInteger)arg3 options:(id)arg4 error:(*id)arg5 handler:(id)arg6 ;
-(BOOL)admissionCheckOfValue:(id)arg0 andStartedWithValue:(id)arg1 cost:(NSInteger)arg2 type:(NSInteger)arg3 options:(id)arg4 error:(*id)arg5 handler:(id)arg6 ;
-(BOOL)admissionCheckOfValue:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)associateToBudget:(id)arg0 error:(*id)arg1 ;
-(BOOL)backgroundLaunchStartedWithValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)backgroundLaunchStoppedWithValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)destroyWithError:(*id)arg0 ;
-(BOOL)meteringStoppedWithValue:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 meteringToken:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)meteringUpdateWithValue:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 meteringToken:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)occurredWithValue:(id)arg0 cost:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)occurredWithValue:(id)arg0 cost:(NSInteger)arg1 onDate:(id)arg2 error:(*id)arg3 ;
-(BOOL)requestPeerForecastFromDevice:(id)arg0 withValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(NSInteger)arg3 error:(*id)arg4 handler:(id)arg5 ;
-(BOOL)requestStatisticFromDevice:(id)arg0 statistic:(NSInteger)arg1 forHistoryWindow:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)requestTemporalForecastFromDevice:(id)arg0 withValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(NSInteger)arg3 error:(*id)arg4 handler:(id)arg5 ;
-(BOOL)reset:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)resetAdmissionBitMask:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAdmissionBitMask:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setAdmissionRevocationBlockWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)setCategory:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setResourceAvailabilityBlockWithError:(*id)arg0 handler:(id)arg1 ;
-(BOOL)setTrendBlockForValue:(id)arg0 withConfig:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(CGFloat)correlationOfValue:(id)arg0 toAttribute:(id)arg1 withValue:(id)arg2 temporalLeeway:(CGFloat)arg3 error:(*id)arg4 ;
-(NSUInteger)meteringStartedWithValue:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 error:(*id)arg3 ;
-(id)description;
-(id)distinctValuesForHistoryWindow:(id)arg0 error:(*id)arg1 ;
-(id)fullNameFromString:(id)arg0 clientId:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)histogramForHistoryWindow:(id)arg0 error:(*id)arg1 ;
-(id)historyOfValue:(id)arg0 forWindow:(id)arg1 filter:(NSInteger)arg2 maximumElements:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithMySession:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 integerId:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithSession:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 integerId:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)peerForecastOfValue:(id)arg0 forHistoryWindow:(id)arg1 device:(id)arg2 forecastType:(NSInteger)arg3 temporalLeeway:(CGFloat)arg4 maximumElements:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)peerForecastOfValue:(id)arg0 forHistoryWindow:(id)arg1 forecastType:(NSInteger)arg2 maximumElements:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)repeatedStatistic:(NSInteger)arg0 forHistoryWindow:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
-(id)repeatedStatistic:(NSInteger)arg0 forHistoryWindow:(id)arg1 error:(*id)arg2 ;
-(id)statistic:(NSInteger)arg0 forHistoryWindow:(id)arg1 device:(id)arg2 error:(*id)arg3 ;
-(id)statistic:(NSInteger)arg0 forHistoryWindow:(id)arg1 error:(*id)arg2 ;
-(id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(id)arg1 device:(id)arg2 forecastType:(NSInteger)arg3 temporalLeeway:(CGFloat)arg4 maximumElements:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)temporalForecastOfValue:(id)arg0 forHistoryWindow:(id)arg1 forecastType:(NSInteger)arg2 maximumElements:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)admissionCheckOfValueAsync:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 handleQueue:(id)arg3 handler:(id)arg4 ;
-(void)dealloc;


@end


#endif