// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPUSHNOTIFICATIONSSUPPORT_H
#define AVTPUSHNOTIFICATIONSSUPPORT_H

@class NSString, APSConnection;
@protocol APSConnectionDelegate, AVTPushNotificationsSupport, OS_dispatch_queue, AVTPushNotificationsSupportDelegate, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTPushNotificationsConnectionFactory.h"
#import "AVTCoreEnvironment.h"

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport>



@property (readonly, nonatomic) AVTPushNotificationsConnectionFactory *connectionFactory; // ivar: _connectionFactory
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTPushNotificationsSupportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTCoreEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) APSConnection *pushConnection; // ivar: _pushConnection
@property (readonly) Class superclass;


+(id)topic;
-(id)initWithEnvironment:(id)arg0 connectionFactory:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)getAPSEnvironmentString:(id)arg0 ;
-(void)setupConnectionWithCompletionHandler:(id)arg0 ;
-(void)startListeningToPushNotifications;
-(void)stopListeningToPushNotifications;


@end


#endif