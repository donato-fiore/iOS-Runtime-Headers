// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKDATERANGEQUERY_H
#define _HKDATERANGEQUERY_H

@class NSString;
@protocol HKDateRangeQueryClientInterface;


#import "HKQuery.h"

@interface _HKDateRangeQuery : HKQuery <HKDateRangeQueryClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithDateIntervalHandler:(id)arg0 ;
-(void)client_deliverDateIntervals:(id)arg0 forQuery:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif