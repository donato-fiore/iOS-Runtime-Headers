// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBXPCCONNECTION_H
#define CBXPCCONNECTION_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object, CBXpcConnectionDelegate;

#import <Foundation/Foundation.h>


@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _uiAppIsBackgrounded;
    id *_whbReplyHandler;
    NSMutableDictionary *_whbRemoteToLocalUuidMap;
}


@property (weak, nonatomic) NSObject<CBXpcConnectionDelegate> *delegate; // ivar: _delegate


-(id)_allocXpcMsg:(unsigned short)arg0 args:(id)arg1 ;
-(id)_nameForMessage:(unsigned short)arg0 ;
-(id)getEventQueue;
-(id)getWhbLocalIdForRemoteId:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendSyncMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification;
-(void)_applicationWillEnterForegroundNotification;
-(void)_checkIn;
-(void)_checkOut;
-(void)_handleConnectionEvent:(id)arg0 ;
-(void)_handleFinalized;
-(void)_handleInvalid;
-(void)_handleMsg:(id)arg0 ;
-(void)_handleReset;
-(void)_sendBarrier;
-(void)didReceiveForwardedDelegateCallbackMessage:(id)arg0 ;
-(void)didReceiveForwardedMessage:(id)arg0 ;
-(void)disconnect;
-(void)forwardWhbMsg:(unsigned short)arg0 args:(id)arg1 cnx:(id)arg2 ;
-(void)removeWhbRemoteId:(id)arg0 ;
-(void)sendMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)sendMsgWithReply:(unsigned short)arg0 args:(id)arg1 replyBlock:(id)arg2 ;
-(void)setTargetQueue:(id)arg0 ;
-(void)setWhbLocalId:(id)arg0 forRemoteId:(id)arg1 ;
-(void)setWhbReplyHandler:(id)arg0 ;


@end


#endif