// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDROPINCENTER_H
#define DIDROPINCENTER_H

@class NSUUID;
@protocol DIXPCManagerDelegate, DIDropInCenterDelegate;

#import <Foundation/Foundation.h>

#import "DIAudioPowerController.h"
#import "DIAudioSystemController.h"
#import "DIXPCConnectionManager.h"
#import "DIDeviceManager.h"
#import "DIDropInSessionManager.h"

@interface DIDropInCenter : NSObject <DIXPCManagerDelegate>



@property (retain, nonatomic) DIAudioPowerController *audioPowerController; // ivar: _audioPowerController
@property (retain, nonatomic) DIAudioSystemController *audioSystemController; // ivar: _audioSystemController
@property (readonly, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (weak, nonatomic) NSObject<DIDropInCenterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) DIDeviceManager *deviceManager; // ivar: _deviceManager
@property (readonly, nonatomic) NSUUID *homeIdentifier; // ivar: _homeIdentifier
@property (retain, nonatomic) DIDropInSessionManager *sessionManager; // ivar: _sessionManager


+(id)new;
-(id)createAudioPowerController;
-(id)createAudioSystemController;
-(id)init;
-(id)initWithHomeIdentifier:(id)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 queue:(id)arg1 ;
-(id)initWithNullableHomeIdentifier:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)managerDidInterruptConnection:(id)arg0 ;
-(void)startSessionWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif