// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRAVOUTPUTDEVICETRANSPORT_H
#define MRAVOUTPUTDEVICETRANSPORT_H

@class NSError, NSString, AVOutputDevice;
@protocol OS_dispatch_queue;


#import "MRExternalDeviceTransport.h"
#import "_MRDeviceInfoMessageProtobuf.h"
#import "MRAirPlayTransportConnection.h"

@interface MRAVOutputDeviceTransport : MRExternalDeviceTransport {
    NSObject<OS_dispatch_queue> *_workerQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAirPlayTransportConnection *_connection;
    BOOL _useSystemAuthenticationPrompt;
    NSString *_outputDeviceUID;
    AVOutputDevice *_avOutputDevice;
}




+(id)_createConnectionWith:(id)arg0 connectionType:(NSInteger)arg1 shouldUseSystemAuthenticationPrompt:(BOOL)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)port;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithOutputDevice:(id)arg0 connectionType:(NSInteger)arg1 ;
-(id)name;
-(id)uid;
-(void)reset;
-(void)setError:(id)arg0 ;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;


@end


#endif