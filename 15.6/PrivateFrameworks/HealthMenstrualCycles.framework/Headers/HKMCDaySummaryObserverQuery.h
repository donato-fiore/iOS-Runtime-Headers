// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCDAYSUMMARYOBSERVERQUERY_H
#define HKMCDAYSUMMARYOBSERVERQUERY_H

@class HKQuery, NSString;
@protocol HKMCDaySummaryObserverQueryClientInterface;



@interface HKMCDaySummaryObserverQuery : HKQuery <HKMCDaySummaryObserverQueryClientInterface>

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
-(void)client_deliverUpdateWithQueryUUID:(id)arg0 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif