// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKACTIVITYSTATISTICSQUERY_H
#define _HKACTIVITYSTATISTICSQUERY_H

@class NSDate, NSDateComponents, NSString;
@protocol HKActivityStatisticsQueryClientInterface;


#import "HKQuery.h"

@interface _HKActivityStatisticsQuery : HKQuery <HKActivityStatisticsQueryClientInterface>

 {
    BOOL _deliveredInitial;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *initialQueryResultsHandler; // ivar: _initialQueryResultsHandler
@property (copy, nonatomic) id *queryUpdateHandler; // ivar: _queryUpdateHandler
@property (readonly) Class superclass;
@property (nonatomic, getter=_updateInterval, setter=_setUpdateInterval:) CGFloat updateInterval; // ivar: _updateInterval


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 moveIntervalComponents:(id)arg2 exerciseIntervalComponents:(id)arg3 initialQueryResultsHandler:(id)arg4 ;
-(void)_validateIntervalComponents:(id)arg0 ;
-(void)client_deliverResult:(id)arg0 query:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif