// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEEDBACKLOGGERFBFCLIENT_H
#define FEEDBACKLOGGERFBFCLIENT_H

@class NSXPCConnection, NSDistributedNotificationCenter;
@protocol FeedbackLoggerDaemonXPC, OS_os_log;

#import <Foundation/Foundation.h>


@interface FeedbackLoggerFBFClient : NSObject

@property (retain, nonatomic) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (retain, nonatomic) NSObject<FeedbackLoggerDaemonXPC> *fbf; // ivar: _fbf
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // ivar: _notificationCenter


-(id)init;
-(void)scheduleImmediateUploadWithHeaders:(id)arg0 completion:(id)arg1 ;


@end


#endif