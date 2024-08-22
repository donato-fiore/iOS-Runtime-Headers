// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOBSERVERQUERY_H
#define HKOBSERVERQUERY_H

@class NSString;
@protocol HKObserverQueryClientInterface;


#import "HKQuery.h"

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL observeUnfrozenSeries; // ivar: _observeUnfrozenSeries
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *updateHandler; // ivar: _updateHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithQueryDescriptors:(id)arg0 updateHandler:(id)arg1 ;
-(id)initWithSampleType:(id)arg0 predicate:(id)arg1 updateHandler:(id)arg2 ;
-(void)client_dataUpdatedInDatabaseForTypes:(id)arg0 withAnchor:(id)arg1 query:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif