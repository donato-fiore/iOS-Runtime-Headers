// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYNOTESACTIVATIONCLIENT_H
#define SYNOTESACTIVATIONCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYNotesActivationClient : NSObject

@property (retain, nonatomic, setter=_clientQueue:) NSObject<OS_dispatch_queue> *_clientQueue; // ivar: __clientQueue
@property (retain, nonatomic, setter=_setConnection:) NSXPCConnection *_connection; // ivar: __connection


-(id)init;
-(void)_clientQueue:(id)arg0 ;
-(void)_ensureConnection;
-(void)activateNotesWithUserActivity:(id)arg0 completion:(id)arg1 ;


@end


#endif