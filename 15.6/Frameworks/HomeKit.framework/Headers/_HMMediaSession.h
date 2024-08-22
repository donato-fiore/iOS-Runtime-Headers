// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMMEDIASESSION_H
#define _HMMEDIASESSION_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFMessageReceiver, HMObjectMerge, _HMMediaSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAudioControl.h"
#import "_HMContext.h"

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (readonly) HMAudioControl *audioControl; // ivar: _audioControl
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HMMediaSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *mediaUniqueIdentifier; // ivar: _mediaUniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (retain, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) NSInteger playbackState; // ivar: _playbackState
@property (readonly) NSInteger repeatState; // ivar: _repeatState
@property (readonly, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly) NSInteger shuffleState; // ivar: _shuffleState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithUUID:(id)arg0 routeUID:(id)arg1 playbackState:(NSInteger)arg2 shuffleState:(NSInteger)arg3 repeatState:(NSInteger)arg4 audioControl:(id)arg5 mediaUniqueIdentifier:(id)arg6 ;
-(id)messageDestination;
-(void)_handleSessionPlaybackUpdated:(id)arg0 ;
-(void)_handleSessionRouteUIDUpdated:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedMediaState;
-(void)_notifyDelegateOfUpdatedPlaybackState:(NSInteger)arg0 ;
-(void)_notifyDelegateOfUpdatedRouteUID:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_updateMediaState:(id)arg0 completion:(id)arg1 ;
-(void)refreshPlaybackStateWithCompletionHandler:(id)arg0 ;
-(void)updateMediaState:(id)arg0 ;
-(void)updatePlaybackState:(id)arg0 ;


@end


#endif