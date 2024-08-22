// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSBRIDGEAPPCONTEXT_H
#define BPSBRIDGEAPPCONTEXT_H

@class NRDevice, PBBridgeCompanionController, NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BPSBridgeAppContext : NSObject

@property (retain, nonatomic) NRDevice *activeDevice; // ivar: _activeDevice
@property (retain, nonatomic) PBBridgeCompanionController *bridgeController; // ivar: _bridgeController
@property (nonatomic) BOOL inWatchSetupFlow; // ivar: _inWatchSetupFlow
@property (retain, nonatomic) NSDictionary *installedWatchkitApps; // ivar: _installedWatchkitApps
@property (nonatomic) BOOL syncTrapEnabled; // ivar: _syncTrapEnabled
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallStates; // ivar: _watchAppInstallStates


+(id)shared;
-(BOOL)isInWatchSetupFlow;
-(BOOL)isSyncTrapEnabled;
-(void)tellWatchToSetSiriEnabled:(BOOL)arg0 ;


@end


#endif