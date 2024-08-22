// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUUSERNOTIFICATIONPROVIDERXPCCLIENT_H
#define TUUSERNOTIFICATIONPROVIDERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUUserNotificationsProviderXPCServer, TUUserNotificationProviderDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUUserNotificationProviderXPCClient : NSObject <TUUserNotificationsProviderXPCServer, TUUserNotificationProviderDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)synchronousServer;
+(id)userNotificationProviderServerXPCInterface;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)init;
-(id)serverWithErrorHandler:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)momentCapturedForStreamToken:(NSInteger)arg0 requesterID:(id)arg1 reply:(id)arg2 ;


@end


#endif