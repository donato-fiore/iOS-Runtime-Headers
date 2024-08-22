// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSTATISTICSQUERY_H
#define HKSTATISTICSQUERY_H

@class NSDateInterval, NSString;
@protocol HKStatisticsQueryClientInterface;


#import "HKQuery.h"

@interface HKStatisticsQuery : HKQuery <HKStatisticsQueryClientInterface>

 {
    BOOL _requireQuantityType;
}


@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic, getter=_dateInterval, setter=_setDateInterval:) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mergeStrategy; // ivar: _mergeStrategy
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)_filter;
-(id)_filterForDateInterval:(id)arg0 ;
-(id)initWithQuantityType:(id)arg0 quantitySamplePredicate:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(id)initWithSampleType:(id)arg0 samplePredicate:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)client_deliverStatistics:(id)arg0 forQuery:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif