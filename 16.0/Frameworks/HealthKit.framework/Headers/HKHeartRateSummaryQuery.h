// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTRATESUMMARYQUERY_H
#define HKHEARTRATESUMMARYQUERY_H

@class NSString;
@protocol HKHeartRateSummaryQueryClientInterface;


#import "HKQuery.h"

@interface HKHeartRateSummaryQuery : HKQuery <HKHeartRateSummaryQueryClientInterface>

 {
    id *_updateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)client_deliverSummary:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif