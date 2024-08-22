// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPUSHREGISTRY_H
#define PKPUSHREGISTRY_H

@class NSString, NSSet, NSMutableDictionary;
@protocol PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient, PKPushRegistryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient>



@property (nonatomic) int complicationToken; // ivar: _complicationToken
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PKPushRegistryDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (copy) NSSet *desiredPushTypes; // ivar: _desiredPushTypes
@property (nonatomic) int fileProviderToken; // ivar: _fileProviderToken
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // ivar: _ivarQueue
@property (nonatomic) CGFloat lastReportedCallTime; // ivar: _lastReportedCallTime
@property (nonatomic) int outstandingVoIPPushes; // ivar: _outstandingVoIPPushes
@property (retain, nonatomic) NSMutableDictionary *pushTypeToConnection; // ivar: _pushTypeToConnection
@property (retain, nonatomic) NSMutableDictionary *pushTypeToToken; // ivar: _pushTypeToToken
@property (readonly) Class superclass;
@property (nonatomic) int voipToken; // ivar: _voipToken


+(id)_pushTypeToMachServiceName;
+(void)_assertIfCallKitNotLinked;
-(BOOL)_selfTaskHasEntitlement:(struct __CFString *)arg0 ;
-(id)_createConnectionForPushType:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)pushTokenForType:(id)arg0 ;
-(void)_noteIncomingCallReported;
-(void)_registerForPushType:(id)arg0 ;
-(void)_renewConnectionForPushTypeIfRegistered:(id)arg0 ;
-(void)_terminateAppIfThereAreUnhandledVoIPPushes;
-(void)_unregisterForPushType:(id)arg0 ;
-(void)complicationPayloadReceived:(id)arg0 ;
-(void)complicationRegistrationFailed;
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg0 ;
-(void)dealloc;
-(void)fileProviderPayloadReceived:(id)arg0 ;
-(void)fileProviderRegistrationFailed;
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg0 ;
-(void)remoteUserNotificationPayloadReceived:(id)arg0 completionHandler:(id)arg1 ;
-(void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)arg0 ;
-(void)voipPayloadReceived:(id)arg0 mustPostCall:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)voipRegistrationFailed;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg0 ;


@end


#endif