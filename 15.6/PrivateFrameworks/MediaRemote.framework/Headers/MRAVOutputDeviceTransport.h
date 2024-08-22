// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    NSString *_groupID;
    AVOutputDevice *_avOutputDevice;
}




+(id)_createConnectionWith:(id)arg0 groupID:(id)arg1 connectionType:(NSInteger)arg2 shouldUseSystemAuthenticationPrompt:(BOOL)arg3 userInfo:(id)arg4 ;
-(BOOL)requiresCustomPairing;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)port;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithOutputDevice:(id)arg0 groupID:(id)arg1 connectionType:(NSInteger)arg2 ;
-(id)name;
-(id)uid;
-(void)resetWithError:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;


@end


#endif