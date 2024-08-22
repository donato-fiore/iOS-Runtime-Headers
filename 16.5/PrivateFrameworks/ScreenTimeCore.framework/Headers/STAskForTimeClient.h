// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKFORTIMECLIENT_H
#define STASKFORTIMECLIENT_H

@class NSString, NSXPCConnection;
@protocol STAskForTimeInterface;

#import <Foundation/Foundation.h>


@interface STAskForTimeClient : NSObject <STAskForTimeInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(void)_asynchronousProxyWithHandler:(id)arg0 ;
-(void)_synchronousProxyWithHandler:(id)arg0 ;
-(void)approveExceptionForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)fetchLastResponseForRequestedResourceIdentifier:(id)arg0 usageType:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleAnswer:(NSInteger)arg0 requestIdentifier:(id)arg1 timeApproved:(id)arg2 completionHandler:(id)arg3 ;
-(void)sendAskForTimeRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif