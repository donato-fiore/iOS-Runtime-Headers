// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYXPCCONNECTION_H
#define TRANSPARENCYXPCCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection


+(id)instance;
+(void)invokeXPCAsynchronousCallWithBlock:(id)arg0 ;
+(void)invokeXPCSynchronousCallWithBlock:(id)arg0 ;
// +(void)invokeXPCWithBlock:(id)arg0 synchronous:(unk)arg1  ;
-(id)createConnection;
-(void)dealloc;


@end


#endif