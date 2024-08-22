// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BYSOURCEDEVICEMIGRATION_H
#define BYSOURCEDEVICEMIGRATION_H



#import "BYDeviceMigrationManager.h"

@interface BYSourceDeviceMigration : BYDeviceMigrationManager



+(id)createDeviceTransferTask:(id)arg0 ;
-(BOOL)requiresProcessAssertion;
-(id)sourceDeviceTransferTask;
-(void)cancelDeviceTransferTask;
-(void)startDeviceTransferTask;
-(void)updateFileTransferSession:(id)arg0 ;


@end


#endif