// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCTRANSPORTCLIENTBRIDGE_H
#define ACCTRANSPORTCLIENTBRIDGE_H

@class NSString;
@protocol ACCTransportClientDelegate;

#import <Foundation/Foundation.h>

#import "ACCTransportClient.h"

@interface ACCTransportClientBridge : NSObject <ACCTransportClientDelegate>



@property (copy, nonatomic) id *connectionAuthStatusChangedHandler; // ivar: _connectionAuthStatusChangedHandler
@property (copy, nonatomic) id *connectionPropertiesChangedHandler; // ivar: _connectionPropertiesChangedHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *endpointPropertiesChangedHandler; // ivar: _endpointPropertiesChangedHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *serverDisconnectedHandler; // ivar: _serverDisconnectedHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) ACCTransportClient *transportClient; // ivar: _transportClient


+(id)sharedBridge;
-(id)init;
-(void)transportClient:(id)arg0 authStatusDidChange:(BOOL)arg1 forConnectionWithUUID:(id)arg2 ;
-(void)transportClient:(id)arg0 propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3 ;
-(void)transportClient:(id)arg0 propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4 ;
-(void)transportClientServerDisconnected:(id)arg0 ;


@end


#endif