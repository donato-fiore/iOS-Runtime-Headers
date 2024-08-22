// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSOCKET_H
#define CATSOCKET_H

@protocol CATSocketDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CATEndPoint.h"

@interface CATSocket : NSObject {
    BOOL mIsInvalid;
    int mState;
}


@property (weak, nonatomic) NSObject<CATSocketDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CATEndPoint *localEndPoint; // ivar: _localEndPoint
@property (nonatomic) int nativeSocket; // ivar: _nativeSocket
@property (readonly, nonatomic) CATEndPoint *remoteEndPoint; // ivar: _remoteEndPoint
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *socketQueue; // ivar: _socketQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *socketSource; // ivar: _socketSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *userQueue; // ivar: _userQueue


-(BOOL)connectToEndPoint:(id)arg0 error:(*id)arg1 ;
-(BOOL)delegateShouldAcceptNewSocket:(id)arg0 ;
-(BOOL)listenWithEndPoint:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithNativeSocket:(int)arg0 ;
-(void)acceptPendingConnection;
-(void)dealloc;
-(void)delegateDidFailWithError:(id)arg0 ;
-(void)delegateDidReceiveData:(id)arg0 ;
-(void)invalidate;
-(void)populateLocalEndPoint;
-(void)populateRemoteEndPoint;
-(void)resume;
-(void)socketDidCancel;
-(void)socketDidConnect;
-(void)socketDidFailWithError:(id)arg0 ;
-(void)socketDidReceiveData;
-(void)socketDidReceiveEvent;
-(void)socketDidReceiveListeningEvent;
-(void)suspend;


@end


#endif