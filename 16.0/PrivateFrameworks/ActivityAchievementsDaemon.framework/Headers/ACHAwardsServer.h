// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHAWARDSSERVER_H
#define ACHAWARDSSERVER_H

@class HDStandardTaskServer, NSString, NSCalendar;
@protocol ACHAwardsServerInterface, OS_dispatch_queue;



@interface ACHAwardsServer : HDStandardTaskServer <ACHAwardsServerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)_transactionContextForReadingProtectedDataWithIdentifier:(id)arg0 ;
-(id)_transactionContextForWritingProtectedDataWithIdentifier:(id)arg0 ;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)protectedDataAvailableWithCompletion:(id)arg0 ;
-(void)remote_addEarnedInstances:(id)arg0 completion:(id)arg1 ;
-(void)remote_addEarnedInstances:(id)arg0 removingEarnedInstances:(id)arg1 completion:(id)arg2 ;
-(void)remote_addOrUpdateTemplates:(id)arg0 completion:(id)arg1 ;
-(void)remote_addTemplates:(id)arg0 completion:(id)arg1 ;
-(void)remote_addTemplates:(id)arg0 removingTemplates:(id)arg1 completion:(id)arg2 ;
-(void)remote_countOfEarnedInstancesForTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_countOfEarnedInstancesForUniqueNames:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)remote_fetchAllTemplatesWithCompletion:(id)arg0 ;
-(void)remote_fetchEarnedInstancesForEarnedDateComponentsString:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchEarnedInstancesForTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeAllEarnedInstancesWithCompletion:(id)arg0 ;
-(void)remote_removeAllTemplatesWithCompletion:(id)arg0 ;
-(void)remote_removeEarnedInstances:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeEarnedInstancesForTemplateUniqueName:(id)arg0 completion:(id)arg1 ;
-(void)remote_removeTemplates:(id)arg0 completion:(id)arg1 ;


@end


#endif