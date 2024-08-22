// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRPROTOCOLCLIENTCONNECTION_H
#define MRPROTOCOLCLIENTCONNECTION_H

@class MSVMessageParser, NSMutableDictionary, NSString, NSError;
@protocol MSVMessageParserDelegate, MRExternalDeviceTransportConnectionDelegate, MRProtocolClientConnectionDelegate;

#import <Foundation/Foundation.h>

#import "MRSupportedProtocolMessages.h"
#import "MRExternalDeviceTransportConnection.h"
#import "MRDeviceInfo.h"

@interface MRProtocolClientConnection : NSObject <MSVMessageParserDelegate, MRExternalDeviceTransportConnectionDelegate>

 {
    MSVMessageParser *_parser;
    NSUInteger _firstClientNanoseconds;
    NSUInteger _firstDeviceTicks;
    MRSupportedProtocolMessages *_supportedMessages;
    NSMutableDictionary *_pendingReplyQueue;
}


@property (readonly, nonatomic) MRExternalDeviceTransportConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRProtocolClientConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) BOOL disconnected; // ivar: _disconnected
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;


-(id)dataForMessage:(id)arg0 ;
-(id)decryptData:(id)arg0 error:(*id)arg1 ;
-(id)encryptDataForMessage:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)disconnectWithError:(id)arg0 ;
-(void)parser:(id)arg0 didParseMessage:(id)arg1 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 expectedMessage:(NSUInteger)arg1 timeout:(CGFloat)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(void)sendMessage:(id)arg0 queue:(id)arg1 reply:(id)arg2 ;
-(void)sendMessage:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 reply:(id)arg3 ;
-(void)transport:(id)arg0 didReceiveData:(id)arg1 ;
-(void)transportDidClose:(id)arg0 error:(id)arg1 ;


@end


#endif