// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ANEDAEMONCONNECTION_H
#define _ANEDAEMONCONNECTION_H

@class NSXPCConnection;
@protocol _ANEDaemonProtocol;

#import <Foundation/Foundation.h>


@interface _ANEDaemonConnection : NSObject <_ANEDaemonProtocol>



@property (readonly, nonatomic) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, nonatomic) BOOL restricted; // ivar: _restricted


-(id)init;
-(id)initWithMachServiceName:(id)arg0 restricted:(BOOL)arg1 ;
-(void)beginRealTimeTaskWithReply:(id)arg0 ;
-(void)compileModel:(id)arg0 sandboxExtension:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 withReply:(id)arg4 ;
-(void)compiledModelExistsFor:(id)arg0 withReply:(id)arg1 ;
-(void)compiledModelExistsMatchingHash:(id)arg0 withReply:(id)arg1 ;
-(void)dealloc;
-(void)echo:(id)arg0 withReply:(id)arg1 ;
-(void)endRealTimeTaskWithReply:(id)arg0 ;
-(void)loadModel:(id)arg0 sandboxExtension:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 withReply:(id)arg4 ;
-(void)purgeCompiledModel:(id)arg0 withReply:(id)arg1 ;
-(void)purgeCompiledModelMatchingHash:(id)arg0 withReply:(id)arg1 ;
-(void)unloadModel:(id)arg0 options:(id)arg1 qos:(unsigned int)arg2 withReply:(id)arg3 ;


@end


#endif