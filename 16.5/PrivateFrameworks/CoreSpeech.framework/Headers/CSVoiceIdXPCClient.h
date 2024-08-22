// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICEIDXPCCLIENT_H
#define CSVOICEIDXPCCLIENT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSVoiceIdXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


+(void)notifyImplicitUtterance:(id)arg0 audioDeviceType:(id)arg1 audioRecordType:(id)arg2 voiceTriggerEventInfo:(id)arg3 otherCtxt:(id)arg4 completion:(id)arg5 ;
-(id)_decodeError:(id)arg0 ;
-(id)init;
-(void)_handleListenerError:(id)arg0 ;
-(void)_handleListenerEvent:(id)arg0 ;
-(void)_notifyImplicitUtterance:(id)arg0 audioDeviceType:(id)arg1 audioRecordType:(id)arg2 voiceTriggerEventInfo:(id)arg3 otherCtxt:(id)arg4 completion:(id)arg5 ;
-(void)_sendMessage:(id)arg0 connection:(id)arg1 completion:(id)arg2 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;


@end


#endif