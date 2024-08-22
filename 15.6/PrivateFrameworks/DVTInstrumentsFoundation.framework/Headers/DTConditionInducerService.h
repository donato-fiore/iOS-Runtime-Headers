// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTCONDITIONINDUCERSERVICE_H
#define DTCONDITIONINDUCERSERVICE_H

@class DTXService, NSXPCConnection, NSString;
@protocol DTConditionInducerSupportUpdatesProtocol, DTConditionInducerServiceAPI;



@interface DTConditionInducerService : DTXService <DTConditionInducerSupportUpdatesProtocol, DTConditionInducerServiceAPI>



@property (retain) NSXPCConnection *connectionToService; // ivar: _connectionToService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)availableConditionInducers;
-(id)disableActiveCondition;
-(id)disableConditionWithIdentifier:(id)arg0 ;
-(id)enableConditionWithIdentifier:(id)arg0 profileIdentifier:(id)arg1 ;
-(id)initWithChannel:(id)arg0 ;
-(void)_disconnectServiceConnection;
-(void)_requestAvailableConditionInducersWithCompletion:(id)arg0 ;
-(void)_requestDisableActiveConditionInducerWithCompletion:(id)arg0 ;
-(void)_requestDisableConditionInducerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_requestEnableConditionInducerWithIdentifier:(id)arg0 profileIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)activeConditionsDidStop;
-(void)activeConditionsWillStop;
-(void)dealloc;


@end


#endif