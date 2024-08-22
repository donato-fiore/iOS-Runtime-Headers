// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USAGEFEED_H
#define USAGEFEED_H

@class AnalyticsWorkspace, UsageAnalytics, NSArray;

#import <Foundation/Foundation.h>


@interface UsageFeed : NSObject {
    AnalyticsWorkspace *workspace;
    UsageAnalytics *handleAnalytics;
    unsigned int lastSubscriberTag;
    unsigned int lastSkippedTag;
    NSUInteger numUnrolledCellCounts;
    NSUInteger numRolledCellCounts;
    NSUInteger numNewlyCreated;
    NSUInteger numAppended;
}


@property (nonatomic) id *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *processFeedData; // ivar: _processFeedData


-(BOOL)_rollUsageValuesFromDict:(id)arg0 toDict:(id)arg1 forKey:(id)arg2 subscriberTag:(unsigned int)arg3 ;
-(BOOL)algosScoreToDateWithOptionsFor:(id)arg0 nameKind:(id)arg1 startTime:(id)arg2 options:(id)arg3 reply:(id)arg4 ;
-(BOOL)calendarUsageFor:(id)arg0 nameKind:(id)arg1 dayResolution:(id)arg2 daySlot:(unsigned short)arg3 weekSlot:(unsigned short)arg4 reply:(id)arg5 ;
-(BOOL)getNetworkDomainsOptions:(id)arg0 reply:(id)arg1 ;
-(BOOL)getUsageOption:(id)arg0 reply:(id)arg1 ;
-(BOOL)identifierForUUID:(id)arg0 reply:(id)arg1 ;
-(BOOL)networkBitmapsToDateWithOptionsFor:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 options:(id)arg3 reply:(id)arg4 ;
-(BOOL)networkDomainsToDateWithOptionsFor:(id)arg0 nameKind:(id)arg1 domainType:(unsigned short)arg2 startTime:(id)arg3 options:(id)arg4 reply:(id)arg5 ;
-(BOOL)performNetworkDomainsActionWithOptions:(id)arg0 reply:(id)arg1 ;
-(BOOL)resetUsageDataFor:(id)arg0 nameKind:(id)arg1 reply:(id)arg2 ;
-(BOOL)setNetworkDomainsOptions:(id)arg0 reply:(id)arg1 ;
-(BOOL)setUsageOption:(id)arg0 reply:(id)arg1 ;
-(BOOL)typicalUsageFor:(id)arg0 nameKind:(id)arg1 intervalKind:(unsigned int)arg2 reply:(id)arg3 ;
-(BOOL)usageToDateFor:(id)arg0 nameKind:(id)arg1 reply:(id)arg2 ;
-(BOOL)usageToDateWithOptionsFor:(id)arg0 nameKind:(id)arg1 options:(id)arg2 reply:(id)arg3 ;
-(id)_calendarUsagePresentation:(id)arg0 nameKind:(id)arg1 source:(id)arg2 ;
-(id)_composePredicateLineWithName:(id)arg0 keyPath:(id)arg1 isSweep:(*BOOL)arg2 wantGeneric:(BOOL)arg3 gotGeneric:(*BOOL)arg4 ;
-(id)_performRollUp:(unsigned int)arg0 andMetadata:(unsigned int)arg1 from:(id)arg2 until:(id)arg3 ;
-(id)_typicalUsagePresentation:(id)arg0 nameKind:(id)arg1 source:(id)arg2 ;
-(id)_usagePresentation:(id)arg0 nameKind:(id)arg1 altName:(id)arg2 altNameKind:(id)arg3 source:(*CGFloat)arg4 since:(id)arg5 ;
-(id)createEndpointEntryFrom:(id)arg0 withKey:(id)arg1 showDetails:(BOOL)arg2 ;
-(id)groupRecordsByBundleId:(id)arg0 ;
-(id)initWithWorkspace:(id)arg0 ;
-(id)networkDomainInitiatedTypeString:(unsigned int)arg0 ;
-(void)_rollValuesFrom:(id)arg0 toDict:(id)arg1 ;
-(void)batchFetchCallbackWithResults:(id)arg0 entityName:(id)arg1 pred:(id)arg2 service:(id)arg3 limit:(NSUInteger)arg4 offset:(NSUInteger)arg5 container:(id)arg6 actions:(id)arg7 reply:(id)arg8 ;
-(void)clearLoggingCounters;
-(void)dealloc;
-(void)displayLoggingCounters:(id)arg0 ;
-(void)prepProcessDataFractionWithTag:(unsigned int)arg0 andMetadata:(unsigned int)arg1 from:(id)arg2 until:(id)arg3 pollInterval:(float)arg4 ;
-(void)prepProcessDataFractionWithTag:(unsigned int)arg0 from:(id)arg1 until:(id)arg2 pollInterval:(float)arg3 ;


@end


#endif