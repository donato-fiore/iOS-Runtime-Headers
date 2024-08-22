// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMEDIASESSION_H
#define HMMEDIASESSION_H

@class NSString, NSUUID;
@protocol _HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding, HMMediaSessionDelegate;

#import <Foundation/Foundation.h>

#import "HMAudioControl.h"
#import "HMMediaProfile.h"
#import "_HMMediaSession.h"

@interface HMMediaSession : NSObject <_HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding>



@property (readonly) HMAudioControl *audioControl; // ivar: _audioControl
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMMediaSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMMediaProfile *mediaProfile; // ivar: _mediaProfile
@property (retain, nonatomic) _HMMediaSession *mediaSession; // ivar: _mediaSession
@property (readonly, copy) NSString *mediaUniqueIdentifier; // ivar: _mediaUniqueIdentifier
@property (readonly) NSInteger playbackState;
@property (readonly) NSInteger repeatState;
@property (readonly, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (readonly) NSInteger shuffleState;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 routeUID:(id)arg1 playbackState:(NSInteger)arg2 shuffleState:(NSInteger)arg3 repeatState:(NSInteger)arg4 mediaUniqueIdentifier:(id)arg5 ;
-(id)messageTargetUUID;
-(void)_unconfigure;
-(void)configure:(id)arg0 messageTargetUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mediaSession:(id)arg0 didUpdatePlaybackState:(NSInteger)arg1 ;
-(void)mediaSession:(id)arg0 didUpdateRouteUID:(id)arg1 ;
-(void)mediaSessionDidUpdate:(id)arg0 ;
-(void)pauseWithCompletionHandler:(id)arg0 ;
-(void)refreshPlaybackStateWithCompletionHandler:(id)arg0 ;
-(void)resumeWithCompletionHandler:(id)arg0 ;
-(void)updateMediaState:(id)arg0 ;
-(void)updatePlaybackState:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)updatePlaybackState:(id)arg0 ;


@end


#endif