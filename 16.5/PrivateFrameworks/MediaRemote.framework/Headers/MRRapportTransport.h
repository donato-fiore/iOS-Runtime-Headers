// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRRAPPORTTRANSPORT_H
#define MRRAPPORTTRANSPORT_H

@class NSError, NSString, RPCompanionLinkDevice;
@protocol OS_dispatch_queue;


#import "MRExternalDeviceTransport.h"
#import "MRAVOutputDevice.h"
#import "MRCompanionLinkClient.h"
#import "MRExternalDeviceTransportConnection.h"

@interface MRRapportTransport : MRExternalDeviceTransport {
    NSError *_error;
    NSObject<OS_dispatch_queue> *_workerQueue;
    MRAVOutputDevice *_outputDevice;
    MRAVOutputDevice *_proxyOutputDevice;
    id *_resetToken;
    id *_disconnectToken;
    MRCompanionLinkClient *_client;
}


@property (retain, nonatomic) MRExternalDeviceTransportConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSString *sessionUID; // ivar: _sessionUID
@property (retain, nonatomic) RPCompanionLinkDevice *targetDevice; // ivar: _targetDevice


+(id)_readConnectionRecordsFromDisk;
+(id)userDefaults;
+(void)_writeConnectionRecordsToDisk:(id)arg0 ;
+(void)resetPersistedConnections;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)port;
-(id)_generateSessionUID;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithOutputDevice:(id)arg0 ;
-(id)initWithOutputDevice:(id)arg0 proxyOutputDevice:(id)arg1 ;
-(id)name;
-(id)uid;
-(void)_persistConnectionRecordToDisk;
-(void)_removeConnectionRecordFromDisk;
-(void)dealloc;
-(void)resetWithError:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;


@end


#endif