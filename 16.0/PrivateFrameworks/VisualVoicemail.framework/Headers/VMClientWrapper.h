// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMCLIENTWRAPPER_H
#define VMCLIENTWRAPPER_H

@class NSXPCConnection;
@protocol VMClientXPCProtocol;

#import <Foundation/Foundation.h>


@interface VMClientWrapper : NSObject

@property (retain, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (weak, nonatomic) NSObject<VMClientXPCProtocol> *manager; // ivar: _manager


+(BOOL)isVMXPCAvailable;
+(id)voicemailClientXPCInterface;
+(id)voicemailServerXPCInterface;
-(id)init;
-(void)dealloc;


@end


#endif