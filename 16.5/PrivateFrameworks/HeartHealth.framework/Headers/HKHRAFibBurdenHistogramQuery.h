// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENHISTOGRAMQUERY_H
#define HKHRAFIBBURDENHISTOGRAMQUERY_H

@class HKQuery;



@interface HKHRAFibBurdenHistogramQuery : HKQuery {
    id *_resultsHandler;
}




+(id)clientInterfaceProtocol;
-(id)initWithResultsHandler:(id)arg0 ;
-(void)client_deliverHistogramResult:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif