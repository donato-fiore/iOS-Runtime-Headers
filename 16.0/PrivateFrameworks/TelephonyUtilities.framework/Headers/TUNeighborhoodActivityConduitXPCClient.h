// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUNEIGHBORHOODACTIVITYCONDUITXPCCLIENT_H
#define TUNEIGHBORHOODACTIVITYCONDUITXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUNeighborhoodActivityConduitXPCClient, TUNeighborhoodActivityConduitXPCClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUNeighborhoodActivityConduitXPCClient : NSObject <TUNeighborhoodActivityConduitXPCClient>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUNeighborhoodActivityConduitXPCClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) int token; // ivar: _token
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)allowedXPCClasses;
+(id)asynchronousServer;
+(id)neighborhoodActivityClientXPCInterface;
+(id)neighborhoodActivityServerXPCInterface;
+(void)setAsynchronousServer:(id)arg0 ;
-(id)init;
-(id)server;
-(id)serverWithErrorHandler:(id)arg0 ;
-(void)activeSplitSessionTVDeviceWithCompletion:(id)arg0 ;
-(void)approveSplitSessionForConversation:(id)arg0 requestedFromDevice:(id)arg1 pullContext:(NSInteger)arg2 completion:(id)arg3 ;
-(void)cancelSplitSessionApproval;
-(void)dealloc;
-(void)disconnectTVDevice:(id)arg0 completion:(id)arg1 ;
-(void)ensureConnection;
-(void)inviteTVDevice:(id)arg0 toConversationWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)nearbyTVDevicesWithCompletion:(id)arg0 ;
-(void)registerApprovalClientEnabled:(BOOL)arg0 ;
-(void)splitSessionEnded:(id)arg0 ;
-(void)splitSessionStarted:(id)arg0 ;
-(void)tvDeviceAppeared:(id)arg0 ;
-(void)tvDeviceDisappeared:(id)arg0 ;


@end


#endif