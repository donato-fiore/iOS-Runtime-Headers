// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCCLOUDKITTRANSACTIONMANAGER_H
#define BCCLOUDKITTRANSACTIONMANAGER_H

@class NSString, NSMutableDictionary;
@protocol BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCCloudKitController.h"
#import "BDSServiceProxy.h"

@interface BCCloudKitTransactionManager : NSObject <BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService>



@property (weak, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionAccessQueue; // ivar: _transactionAccessQueue
@property (retain, nonatomic) NSMutableDictionary *transactionCompletionCallbacks; // ivar: _transactionCompletionCallbacks
@property (retain, nonatomic) NSMutableDictionary *transactions; // ivar: _transactions


-(id)initWithCloudKitController:(id)arg0 ;
-(void)signalDataChangeTransactionForEntityName:(id)arg0 notificationName:(id)arg1 ;
-(void)signalFetchChangesTransaction:(id)arg0 ;
-(void)signalFetchChangesTransactionInService:(id)arg0 ;
-(void)signalSyncToCKTransactionForEntityName:(id)arg0 syncManager:(id)arg1 ;
-(void)signalSyncToCKTransactionForEntityName:(id)arg0 syncManager:(id)arg1 completion:(id)arg2 ;
-(void)transactionCompleted:(id)arg0 ;


@end


#endif