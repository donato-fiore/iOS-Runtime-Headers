// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVADMINSERVICECONNECTION_H
#define CKVADMINSERVICECONNECTION_H

@protocol CKVAdminService;


#import "CKVServiceConnection.h"
#import "CKVTaskHandler.h"
#import "CKVIndexManager.h"
#import "CKVTaskController.h"

@interface CKVAdminServiceConnection : CKVServiceConnection <CKVAdminService>

 {
    CKVTaskHandler *_taskHandler;
    CKVIndexManager *_indexManager;
    CKVTaskController *_daemonTaskController;
    BOOL _eventSimulationActive;
}




-(BOOL)_isCustomerInstall:(id)arg0 ;
-(BOOL)_isEventSimulationInactive:(id)arg0 ;
-(id)initWithServiceQueue:(id)arg0 taskHandler:(id)arg1 indexManager:(id)arg2 daemonTaskController:(id)arg3 ;
-(void)enumerateItemsWithBatchSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)finishEventSimulation:(id)arg0 ;
-(void)handleSimulatedEvent:(unsigned short)arg0 completion:(id)arg1 ;
-(void)startEventSimulation:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerMigration:(id)arg0 ;


@end


#endif