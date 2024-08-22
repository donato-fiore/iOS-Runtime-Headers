// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPOWNERINTERFACE_H
#define SPOWNERINTERFACE_H


#import <Foundation/Foundation.h>


@interface SPOwnerInterface : NSObject



+(id)cbPeripheralManagementSession;
-(id)firmwareUpdateSession;
-(id)fmipRegisterInfo;
-(id)maintenanceConnectionSession;
-(id)ownerSession;
-(id)persistentConnectionSession;
-(id)privateFirmwareUpdateSession;
-(id)privateOwnerSession;
-(id)separationMonitoringSession;
-(id)settingsConfiguration;
-(id)tagSeparationSession;
-(id)trackingAvoidanceService;


@end


#endif