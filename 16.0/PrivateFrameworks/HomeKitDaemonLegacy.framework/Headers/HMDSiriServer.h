// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSIRISERVER_H
#define HMDSIRISERVER_H

@class NSString;
@protocol HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging, OS_dispatch_workloop, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDNotificationRegistration.h"
#import "HMDSiriAccessoryMonitor.h"
#import "HMDSiriRemoteInputServer.h"
#import "HMDSiriSession.h"

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriAccessoryMonitorDelegate, HMFLogging>



@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *audioWorkloop; // ivar: _audioWorkloop
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // ivar: _notificationRegistration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor; // ivar: _siriAccessoryMonitor
@property (retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer; // ivar: _siriInputServer
@property (retain, nonatomic) HMDSiriSession *siriUISession; // ivar: _siriUISession
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetControlIdentifier; // ivar: _targetControlIdentifier


+(id)logCategory;
+(id)sharedSiriServer;
-(BOOL)_isAudioCodecSupported:(id)arg0 ;
-(BOOL)_isSiriInputType:(NSInteger)arg0 supportedOnAccessory:(id)arg1 siriAudioConfiguration:(id)arg2 ;
-(id)_getBestAudioCodecConfiguration:(id)arg0 ;
-(id)_getSiriSessionForAccessory:(id)arg0 ;
-(id)init;
-(void)_checkSiriSupportByAccessory:(id)arg0 ;
-(void)_handleDisconnectForAccessory:(id)arg0 ;
-(void)_maybeTearDownSiriPlugin;
-(void)_removeDataStreamListenerForAccessory:(id)arg0 ;
-(void)_setupSiriPlugin;
-(void)_setupSiriUIContext;
-(void)_tearDownSiriUIContext;
-(void)accessory:(id)arg0 didReceiveBulkSessionCandidate:(id)arg1 ;
-(void)accessoryDidCloseDataStream:(id)arg0 ;
-(void)accessoryDidStartListening:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleAccessoryHasBulkSendDataStream:(id)arg0 ;
-(void)handleAccessoryRemoved:(id)arg0 ;
-(void)monitor:(id)arg0 needsSiriCapabilityForAccessory:(id)arg1 ;
-(void)monitor:(id)arg0 willAllowAccessoryForDragonSiri:(id)arg1 ;
-(void)monitor:(id)arg0 willNotAllowAccessoryForDragonSiri:(id)arg1 ;
-(void)monitorHasNoAccessoriesForDragonSiri:(id)arg0 ;
-(void)registerForMessages;
-(void)setTargetableAccessory:(id)arg0 withControllers:(id)arg1 ;


@end


#endif