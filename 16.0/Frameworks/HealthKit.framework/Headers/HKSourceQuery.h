// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSOURCEQUERY_H
#define HKSOURCEQUERY_H

@class NSString;
@protocol HKSourceQueryClientInterface, HKQueryServerInterface;


#import "HKQuery.h"

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface>

 {
    BOOL _hasDeliveredInitialResults;
    id<HKQueryServerInterface> *_serverProxy;
}


@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
+(void)configureServerInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithSampleType:(id)arg0 samplePredicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)client_deliverSources:(id)arg0 forQuery:(id)arg1 ;
-(void)client_deliverUpdatedSources:(id)arg0 added:(id)arg1 forQuery:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif