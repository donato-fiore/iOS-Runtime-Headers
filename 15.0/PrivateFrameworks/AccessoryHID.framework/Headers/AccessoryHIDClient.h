// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCESSORYHIDCLIENT_H
#define ACCESSORYHIDCLIENT_H

@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol AccessoryHIDXPCClientProtocol, AccessoryHIDClientProtocol, AccessoryHIDXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface AccessoryHIDClient : NSObject <AccessoryHIDXPCClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AccessoryHIDClientProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *registeredHIDDescriptors; // ivar: _registeredHIDDescriptors
@property (retain, nonatomic) NSObject<AccessoryHIDXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)getReportResponse:(id)arg0 componentID:(unsigned short)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 report:(id)arg4 withReply:(id)arg5 ;
-(void)hidDescriptor:(id)arg0 active:(BOOL)arg1 ;
-(void)inReport:(id)arg0 componentID:(unsigned short)arg1 report:(id)arg2 withReply:(id)arg3 ;
-(void)registerHIDDescriptor:(id)arg0 componentID:(unsigned short)arg1 dictionary:(id)arg2 withReply:(id)arg3 ;
-(void)sendGetReportForType:(id)arg0 andID:(id)arg1 fromUUID:(id)arg2 ;
-(void)sendOutReport:(id)arg0 fromUUID:(id)arg1 ;
-(void)unregisterAllDescriptors:(id)arg0 withReply:(id)arg1 ;
-(void)unregisterHIDDescriptor:(id)arg0 componentID:(unsigned short)arg1 withReply:(id)arg2 ;


@end


#endif