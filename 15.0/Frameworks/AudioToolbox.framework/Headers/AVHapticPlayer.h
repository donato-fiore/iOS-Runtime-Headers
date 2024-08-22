// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVHAPTICPLAYER_H
#define AVHAPTICPLAYER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "AVHapticClient.h"

@interface AVHapticPlayer : NSObject {
    NSMutableArray *_channelArray;
    id *_connectionErrorHandler;
}


@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, nonatomic) NSArray *channels;
@property (readonly) AVHapticClient *client; // ivar: _client
@property (copy) id *connectionErrorHandler;
@property (readonly) CGFloat currentMediaTime;
@property (readonly) CGFloat hapticLatency;
@property (readonly) BOOL resourcesAllocated; // ivar: _resourcesAllocated
@property (copy) id *stopRunningHandler; // ivar: _stopRunningHandler


+(BOOL)isSupported;
-(BOOL)clearSequenceEvents:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)copyCustomAudioEvent:(NSUInteger)arg0 options:(id)arg1 reply:(id)arg2 ;
-(BOOL)createCustomAudioEvent:(id)arg0 format:(id)arg1 frames:(NSUInteger)arg2 options:(id)arg3 reply:(id)arg4 ;
-(BOOL)doInitWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)enableSequenceLooping:(NSUInteger)arg0 enable:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)finishWithCompletionHandler:(id)arg0 ;
-(BOOL)loadAndPrepareHapticSequenceFromData:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromEvents:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)arg0 reply:(id)arg1 ;
-(BOOL)loadHapticEvent:(id)arg0 reply:(id)arg1 ;
-(BOOL)pauseHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)playHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 offset:(CGFloat)arg2 ;
-(BOOL)prepareHapticSequence:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)referenceCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(BOOL)releaseCustomAudioEvent:(NSUInteger)arg0 reply:(id)arg1 ;
-(BOOL)removeChannel:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)resumeHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)seekHapticSequence:(NSUInteger)arg0 toTime:(CGFloat)arg1 ;
-(BOOL)setNumberOfChannels:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setSequenceChannelParam:(NSUInteger)arg0 atTime:(CGFloat)arg1 channel:(NSUInteger)arg2 param:(NSUInteger)arg3 value:(float)arg4 error:(*id)arg5 ;
-(BOOL)setSequenceLoopLength:(NSUInteger)arg0 length:(float)arg1 error:(*id)arg2 ;
-(BOOL)setSequencePlaybackRate:(NSUInteger)arg0 rate:(float)arg1 error:(*id)arg2 ;
-(BOOL)stopHapticSequence:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(NSUInteger)getBehavior;
-(id)addChannel:(*id)arg0 ;
-(id)createOptionsFromAudioSessionID:(unsigned int)arg0 shared:(BOOL)arg1 ;
-(id)initAndReturnError:(*id)arg0 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithSessionID:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithSessionID:(unsigned int)arg0 sessionIsShared:(BOOL)arg1 error:(*id)arg2 ;
-(void)allocateRenderResourcesWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)deallocateRenderResources;
-(void)detachHapticSequence:(NSUInteger)arg0 ;
-(void)expectNotifyAfter:(CGFloat)arg0 ;
-(void)invalidateChannels;
-(void)prewarmWithCompletionHandler:(id)arg0 ;
-(void)queryServerCapabilities:(id)arg0 reply:(id)arg1 ;
-(void)releaseChannels;
-(void)startRunningWithCompletionHandler:(id)arg0 ;
-(void)stopPrewarm;
-(void)stopRunning;
-(void)stopRunningWithCompletionHandler:(id)arg0 ;


@end


#endif