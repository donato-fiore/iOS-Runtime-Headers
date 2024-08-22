// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLHISTORYMANAGERXPCCLIENT_H
#define TUCALLHISTORYMANAGERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)callHistoryManagerAllowedClasses;
+(id)callHistoryManagerClientXPCInterface;
+(id)callHistoryManagerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)init;
-(id)serverWithErrorHandler:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleServerDisconnect;
-(void)invalidate;
-(void)updateOutgoingLocalParticipantUUID:(id)arg0 forCallsWithOutgoingLocalParticipantUUID:(id)arg1 ;


@end


#endif