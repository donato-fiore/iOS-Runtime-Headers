// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVADMINSERVICECONNECTION_H
#define CKVADMINSERVICECONNECTION_H

@protocol CKVAdminService, OS_dispatch_queue, KVDonateServiceProvider;

#import <Foundation/Foundation.h>

#import "CKVTaskHandler.h"
#import "CKVIndexManager.h"
#import "CKVSettings.h"

@interface CKVAdminServiceConnection : NSObject <CKVAdminService>

 {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVTaskHandler *_taskHandler;
    CKVIndexManager *_indexManager;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    CKVSettings *_settings;
}




-(BOOL)_isCustomerInstall:(id)arg0 ;
-(id)initWithServiceQueue:(id)arg0 taskHandler:(id)arg1 indexManager:(id)arg2 serviceProvider:(id)arg3 settings:(id)arg4 ;
-(void)_donateProfile:(id)arg0 settings:(id)arg1 completion:(id)arg2 ;
-(void)beginEvaluation:(id)arg0 clean:(BOOL)arg1 completion:(id)arg2 ;
-(void)captureVocabularySnapshot:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)endEvaluation:(id)arg0 ;
-(void)enumerateItemsWithBatchSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)findProfileSnapshotsNearDate:(id)arg0 completion:(id)arg1 ;
-(void)finishEventSimulation:(id)arg0 ;
-(void)handleTask:(unsigned short)arg0 reason:(unsigned short)arg1 completion:(id)arg2 ;
-(void)rebuildSpeechProfileForUserId:(id)arg0 completion:(id)arg1 ;
-(void)startEventSimulation:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerMaintenance:(id)arg0 ;
-(void)triggerMigration:(BOOL)arg0 completeAfterTrigger:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif