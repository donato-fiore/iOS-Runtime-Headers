// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHAWARDSCLIENT_H
#define ACHAWARDSCLIENT_H

@class NSString, NSUUID, HKNanoSyncControl, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, ACHAwardsServerInterface;

#import <Foundation/Foundation.h>


@interface ACHAwardsClient : NSObject <_HKXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *injectedErrorHandler; // ivar: _injectedErrorHandler
@property (retain, nonatomic) HKNanoSyncControl *nanoSyncControl; // ivar: _nanoSyncControl
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (retain, nonatomic) NSObject<ACHAwardsServerInterface> *serverProxy; // ivar: _serverProxy
@property (readonly) Class superclass;


-(BOOL)addEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTemplates:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTemplates:(id)arg0 removingTemplates:(id)arg1 error:(*id)arg2 ;
-(BOOL)isProtectedDataAvailable;
-(BOOL)removeAllEarnedInstancesWithError:(*id)arg0 ;
-(BOOL)removeAllTemplatesWithError:(*id)arg0 ;
-(BOOL)removeEarnedInstances:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeEarnedInstancesForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeTemplate:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeTemplates:(id)arg0 error:(*id)arg1 ;
-(id)addEarnedInstances:(id)arg0 removingEarnedInstances:(id)arg1 error:(*id)arg2 ;
-(id)countOfEarnedInstancesForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)countOfEarnedInstancesForTemplateUniqueNames:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)fetchAllEarnedInstancesWithError:(*id)arg0 ;
-(id)fetchAllTemplatesWithError:(*id)arg0 ;
-(id)fetchEarnedInstancesForEarnedDateComponents:(id)arg0 error:(*id)arg1 ;
-(id)fetchEarnedInstancesForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)arg0 error:(*id)arg1 ;
-(id)fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)arg0 error:(*id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_addPluginProxyErrorHandler:(id)arg0 ;
-(void)_injectProxyProvider:(id)arg0 ;
-(void)connectionInvalidated;
-(void)triggerSyncWithCompletion:(id)arg0 ;


@end


#endif