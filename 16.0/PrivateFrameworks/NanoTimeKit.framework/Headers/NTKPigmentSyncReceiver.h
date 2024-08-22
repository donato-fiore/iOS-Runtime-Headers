// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKPIGMENTSYNCRECEIVER_H
#define NTKPIGMENTSYNCRECEIVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKPigmentPersistentStorageController.h"

@interface NTKPigmentSyncReceiver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (nonatomic) BOOL receivedUpdates; // ivar: _receivedUpdates
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController; // ivar: _storageController


-(id)init;
-(void)finishSyncingForDeviceUUID:(id)arg0 success:(BOOL)arg1 ;
-(void)processSyncData:(id)arg0 domain:(id)arg1 deviceUUID:(id)arg2 ;


@end


#endif