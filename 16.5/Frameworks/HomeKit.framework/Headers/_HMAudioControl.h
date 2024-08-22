// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMAUDIOCONTROL_H
#define _HMAUDIOCONTROL_H

@class NSString, NSUUID;
@protocol HMFMessageReceiver, HMObjectMerge, _HMAudioControlDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMMediaSession.h"

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMAudioControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMMediaSession *mediaSession; // ivar: _mediaSession
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (getter=isMuted) BOOL muted; // ivar: _muted
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property float volume; // ivar: _volume


-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithMediaSession:(id)arg0 ;
-(id)messageDestination;
-(void)__configureWithContext:(id)arg0 ;
-(void)_handleAudioControlUpdated:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)updateMuted:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)updateVolume:(float)arg0 completionHandler:(id)arg1 ;


@end


#endif