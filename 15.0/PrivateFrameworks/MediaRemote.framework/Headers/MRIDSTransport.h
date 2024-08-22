// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRIDSTRANSPORT_H
#define MRIDSTRANSPORT_H

@class NSError, NSString;


#import "MRExternalDeviceTransport.h"
#import "MRAVOutputDevice.h"
#import "MRIDSTransportConnection.h"
#import "MRDeviceInfo.h"

@interface MRIDSTransport : MRExternalDeviceTransport {
    MRAVOutputDevice *_outputDevice;
    MRIDSTransportConnection *_connection;
    BOOL _shouldUseSystemAuthenticationPrompt;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
}


@property (retain, nonatomic) NSString *sessionUID; // ivar: _sessionUID


-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)port;
-(id)_generateSessionUID;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithOutputDevice:(id)arg0 ;
-(id)name;
-(id)uid;
-(void)_handleDeviceConnected:(id)arg0 ;
-(void)_handleDeviceDisconnected:(id)arg0 ;
-(void)reset;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;


@end


#endif