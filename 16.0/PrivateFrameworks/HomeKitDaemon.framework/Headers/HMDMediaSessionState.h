// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIASESSIONSTATE_H
#define HMDMEDIASESSIONSTATE_H

@class HMFObject, NSString, NSNumber;
@protocol HMFDumpState;



@interface HMDMediaSessionState : HMFObject <HMFDumpState>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *mediaUniqueIdentifier; // ivar: _mediaUniqueIdentifier
@property (copy) NSNumber *muted; // ivar: _muted
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) NSInteger repeatState; // ivar: _repeatState
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSInteger shuffleState; // ivar: _shuffleState
@property (nonatomic) NSUInteger sleepWakeState; // ivar: _sleepWakeState
@property (readonly) Class superclass;
@property (copy) NSNumber *volume; // ivar: _volume


-(BOOL)isEqual:(id)arg0 ;
-(id)dumpState;
-(id)initWithSessionIdentifier:(id)arg0 ;


@end


#endif