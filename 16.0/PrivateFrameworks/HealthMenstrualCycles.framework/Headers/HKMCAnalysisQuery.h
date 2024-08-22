// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCANALYSISQUERY_H
#define HKMCANALYSISQUERY_H

@class HKQuery;



@interface HKMCAnalysisQuery : HKQuery {
    id *_updateHandler;
}


@property (readonly, nonatomic) BOOL forceAnalysis; // ivar: _forceAnalysis


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithForceAnalysis:(BOOL)arg0 updateHandler:(id)arg1 ;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)client_deliverAnalysis:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif