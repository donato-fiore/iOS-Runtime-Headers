// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKASTATUSRECEIVINGMANAGER_H
#define SKASTATUSRECEIVINGMANAGER_H

@class NSString;
@protocol SKAStatusReceivingManaging, OS_dispatch_queue, SKADatabaseManaging, SKAStatusReceivingManagingDelegate, SKAStatusEncryptionManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusReceivingManager : NSObject <SKAStatusReceivingManaging>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue; // ivar: _backgroundCleanupQueue
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAStatusReceivingManagingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SKAStatusEncryptionManaging> *encryptionManager; // ivar: _encryptionManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logger;
-(id)initWithDatabaseManager:(id)arg0 encryptionManager:(id)arg1 delegate:(id)arg2 ;
-(void)handleIncomingStatusData:(id)arg0 onChannelIdentifier:(id)arg1 dateReceived:(id)arg2 dateExpired:(id)arg3 serverTime:(id)arg4 ;


@end


#endif