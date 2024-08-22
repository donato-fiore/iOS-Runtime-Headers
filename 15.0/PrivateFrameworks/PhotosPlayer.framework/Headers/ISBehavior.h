// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISBEHAVIOR_H
#define ISBEHAVIOR_H

@protocol ISBehaviorDelegate;

#import <Foundation/Foundation.h>

#import "ISPlayerState.h"

@interface ISBehavior : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSInteger behaviorType;
@property (weak, nonatomic) NSObject<ISBehaviorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) ISPlayerState *initialLayoutInfo; // ivar: _initialLayoutInfo


-(BOOL)prerollVideoAtRate:(float)arg0 completionHandler:(id)arg1 ;
-(BOOL)seekVideoPlayerToTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(BOOL)seekVideoPlayerToTime:(struct ? )arg0 toleranceBefore:(struct ? )arg1 toleranceAfter:(struct ? )arg2 completionHandler:(id)arg3 ;
-(id)initWithInitialLayoutInfo:(id)arg0 ;
-(void)activeDidChange;
-(void)becomeActive;
-(void)resignActive;
-(void)setOutputInfo:(id)arg0 withTransitionOptions:(id)arg1 completion:(id)arg2 ;
-(void)setVideoForwardPlaybackEndTime:(struct ? )arg0 ;
-(void)setVideoPlayRate:(float)arg0 ;
-(void)setVideoVolume:(float)arg0 ;
-(void)videoDidPlayToEnd;
-(void)videoPlayerItemDidChange;
-(void)videoReadyForDisplayDidChange;
-(void)videoWillPlayToEnd;
-(void)videoWillPlayToPhoto;


@end


#endif