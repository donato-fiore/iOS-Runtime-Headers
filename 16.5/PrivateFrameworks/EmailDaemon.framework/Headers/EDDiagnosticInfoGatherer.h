// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDDIAGNOSTICINFOGATHERER_H
#define EDDIAGNOSTICINFOGATHERER_H

@class NSString;
@protocol EFLoggable, EMDiagnosticInfoGathererInterface, EMDiagnosticInfoProvidingXPC, EFScheduler, EDServerRemoteClientsProvider;

#import <Foundation/Foundation.h>

#import "EDFetchController.h"
#import "EDPersistence.h"

@interface EDDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoGathererInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<EMDiagnosticInfoProvidingXPC> *diagnosticInfoProvider; // ivar: _diagnosticInfoProvider
@property (readonly, nonatomic) EDFetchController *fetchController; // ivar: _fetchController
@property (retain, nonatomic) NSObject<EFScheduler> *gathererQueue; // ivar: _gathererQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDPersistence *persistence; // ivar: _persistence
@property (retain, nonatomic) NSObject<EDServerRemoteClientsProvider> *remoteClientsProvider; // ivar: _remoteClientsProvider
@property (readonly) Class superclass;


+(id)log;
-(id)initWithFetchController:(id)arg0 remoteClientsProvider:(id)arg1 persistence:(id)arg2 ;
-(void)databaseStatisticsWithCompletionHandler:(id)arg0 ;
-(void)fetchControllerStatusWithCompletionHandler:(id)arg0 ;
-(void)gatherDiagnosticsWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)registerDiagnosticInfoProvider:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif