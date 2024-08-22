// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCURRENTACTIVITYCACHEQUERY_H
#define HKCURRENTACTIVITYCACHEQUERY_H

@class NSDateComponents;
@protocol HKCurrentActivityCacheQueryClientInterface;


#import "HKQuery.h"

@interface HKCurrentActivityCacheQuery : HKQuery <HKCurrentActivityCacheQueryClientInterface>

 {
    NSDateComponents *_statisticsIntervalComponents;
}


@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithStatisticsIntervalComponents:(id)arg0 updateHandler:(id)arg1 ;
-(void)client_deliverQueryResult:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif