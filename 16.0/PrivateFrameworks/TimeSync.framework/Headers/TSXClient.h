// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXCLIENT_H
#define TSXCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TSXClient : NSObject {
    BOOL _invalidated;
}


@property (readonly) NSXPCConnection *serverConnection; // ivar: _serverConnection


+(id)clientProtocol;
+(id)serverProtocol;
+(id)serviceName;
-(id)exportedObject;
-(id)init;
-(void)dealloc;
-(void)interruptedConnection;
-(void)invalidatedConnection;


@end


#endif