// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRANSPARENCYXPCCONNECTION_H
#define TRANSPARENCYXPCCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection


+(id)instance;
// +(void)invokeXPCAsynchronousCallWithBlock:(id)arg0 errorHandler:(unk)arg1  ;
// +(void)invokeXPCSynchronousCallWithBlock:(id)arg0 errorHandler:(unk)arg1  ;
// +(void)invokeXPCWithBlock:(id)arg0 synchronous:(unk)arg1 errorHandler:(BOOL)arg2  ;
+(void)setupTestConnection:(id)arg0 ;
-(id)createConnection;
-(void)dealloc;
-(void)setTestEndpoint:(id)arg0 ;


@end


#endif