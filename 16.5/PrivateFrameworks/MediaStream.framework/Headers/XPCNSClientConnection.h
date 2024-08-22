// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCNSCLIENTCONNECTION_H
#define XPCNSCLIENTCONNECTION_H

@class NSString;
@protocol XPCClientConnectionDelegate, XPCNSClientConnectionDelegate;

#import <Foundation/Foundation.h>

#import "XPCClientConnection.h"

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate>

 {
    XPCClientConnection *_clientConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<XPCNSClientConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithServiceName:(id)arg0 delegate:(id)arg1 ;
-(void)XPCClientConnection:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)sendMessage:(id)arg0 data:(id)arg1 withHandler:(id)arg2 ;
-(void)sendMessageReliably:(id)arg0 data:(id)arg1 maxRetryCount:(int)arg2 withHandler:(id)arg3 ;
-(void)shutDownCompletionBlock:(id)arg0 ;


@end


#endif