// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPAFTRACKER_H
#define MTPAFTRACKER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MTPAFActivity.h"

@interface MTPAFTracker : NSObject

@property (retain, nonatomic) MTPAFActivity *currentActivity; // ivar: _currentActivity
@property (retain, nonatomic) NSArray *playlistBindings; // ivar: _playlistBindings
@property (retain, nonatomic) NSArray *videoTrackers; // ivar: _videoTrackers


-(void)forEachVideoTracker:(id)arg0 ;
-(void)playStartedAtMilliseconds:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playStartedAtSeconds:(CGFloat)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playStartedWithPlaybackRate:(float)arg0 atMilliseconds:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStartedWithPlaybackRate:(float)arg0 atSeconds:(CGFloat)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)playStoppedAtMilliseconds:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)playStoppedAtSeconds:(CGFloat)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStartedAtMilliseconds:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStartedAtSeconds:(CGFloat)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStoppedAtMilliseconds:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)seekStoppedAtSeconds:(CGFloat)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)startActivity:(NSInteger)arg0 playbackRate:(float)arg1 atMilliseconds:(NSUInteger)arg2 triggerType:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)stopActivity:(NSInteger)arg0 atMilliseconds:(NSUInteger)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(void)synchronizeAtMilliseconds:(NSUInteger)arg0 ;
-(void)synchronizeAtSeconds:(CGFloat)arg0 ;
-(void)trackPlaylist:(id)arg0 using:(id)arg1 ;
-(void)updateEventData:(id)arg0 ;


@end


#endif