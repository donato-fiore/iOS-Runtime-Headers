// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBBOOKMARKSXPCLISTENER_H
#define WEBBOOKMARKSXPCLISTENER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol WebBookmarksXPCConnectionDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate>

 {
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableArray *_clientConnections;
    NSMutableDictionary *_messageHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WebBookmarksXPCConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initListenerForMachService:(char *)arg0 ;
-(void)_handleIncomingConnection:(id)arg0 ;
-(void)connection:(id)arg0 didCloseWithError:(id)arg1 ;
// -(void)setHandler:(id)arg0 forMessageNamed:(unk)arg1  ;
-(void)setMessageHandlers:(id)arg0 ;


@end


#endif