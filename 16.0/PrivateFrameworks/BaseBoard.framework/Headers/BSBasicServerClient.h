// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSBASICSERVERCLIENT_H
#define BSBASICSERVERCLIENT_H

@class NSString;
@protocol BSXPCServerClient, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSBasicServerClient : NSObject <BSXPCServerClient>

 {
    NSObject<OS_xpc_object> *_connection;
    int _resumed;
    int _cancelled;
    BOOL _managingResumeState;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)wrapperWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessageWithPacker:(id)arg0 ;
// -(void)sendMessageWithPacker:(id)arg0 replyHandler:(unk)arg1 onQueue:(id)arg2  ;
-(void)suspend;


@end


#endif