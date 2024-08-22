// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPDAEMONCONNECTION_H
#define SPDAEMONCONNECTION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPXPCConnection.h"

@interface SPDaemonConnection : NSObject {
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (retain, nonatomic) NSString *daemonName; // ivar: _daemonName
@property (nonatomic) *__CFDictionary runningQueries; // ivar: _runningQueries


+(id)sharedBackgroundConnection;
+(id)sharedConnection;
-(id)_connection;
-(id)connectionQueue;
-(id)init;
-(id)initWithDaemonName:(id)arg0 qos:(unsigned int)arg1 ;
-(id)startQuery:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(void)_resetConnection;
-(void)_sendFeedbackMessage:(id)arg0 object:(id)arg1 info:(id)arg2 reply:(id)arg3 ;
-(void)_sendMessage:(id)arg0 object:(id)arg1 info:(id)arg2 reply:(id)arg3 ;
-(void)activate;
-(void)activate:(id)arg0 ;
-(void)barrierOnXPC:(id)arg0 ;
-(void)cancelQuery:(id)arg0 ;
-(void)clearInput:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)preheat;
-(void)requestParsecParametersWithReply:(id)arg0 ;
-(void)retrieveFirstTimeExperienceTextWithReply:(id)arg0 ;
-(void)sendApps:(id)arg0 ;
-(void)sendMessageForToken:(id)arg0 ;
-(void)sendSFFeedback:(id)arg0 type:(NSInteger)arg1 queryId:(NSUInteger)arg2 ;


@end


#endif