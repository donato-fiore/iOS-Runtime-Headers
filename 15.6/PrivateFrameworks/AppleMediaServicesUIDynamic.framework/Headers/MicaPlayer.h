// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MICAPLAYER_H
#define MICAPLAYER_H

@class NSString, NSTimer, NSDictionary, CALayer;
@protocol NSCopying, MicaPlayerDelegate;

#import <Foundation/Foundation.h>


@interface MicaPlayer : NSObject <NSCopying>



@property (weak, nonatomic) NSObject<MicaPlayerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat documentDuration; // ivar: _documentDuration
@property (readonly, nonatomic) BOOL isPlaybackAtEnd;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL loopDuringPlayback; // ivar: _loopDuringPlayback
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSTimer *playTimer; // ivar: _playTimer
@property (nonatomic) CGFloat playbackTime;
@property (nonatomic) float preferredPlaybackSpeed; // ivar: _preferredPlaybackSpeed
@property (retain, nonatomic) NSDictionary *publishedObjects; // ivar: _publishedObjects
@property (nonatomic) CGFloat retinaScale; // ivar: _retinaScale
@property (retain, nonatomic) CALayer *rootLayer; // ivar: _rootLayer


+(BOOL)boolFromDictionary:(id)arg0 key:(id)arg1 defaultValue:(BOOL)arg2 ;
+(id)rootDictForPath:(id)arg0 ;
+(id)updatePublishedObjects:(id)arg0 toReferenceLayersInTree:(id)arg1 ratherThanLayersInTree:(id)arg2 ;
-(BOOL)isTimerNeeded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithData:(id)arg0 url:(id)arg1 retinaScale:(CGFloat)arg2 ;
-(id)initWithFileName:(id)arg0 retinaScale:(CGFloat)arg1 ;
-(id)initWithPath:(id)arg0 retinaScale:(CGFloat)arg1 ;
-(id)initWithPath:(id)arg0 retinaScale:(CGFloat)arg1 rootLayer:(id)arg2 publishedObjects:(id)arg3 ;
-(id)publishedLayerWithKey:(id)arg0 required:(BOOL)arg1 ;
-(id)publishedObjectWithKey:(id)arg0 required:(BOOL)arg1 ;
-(void)addToLayer:(id)arg0 onTop:(BOOL)arg1 gravity:(id)arg2 ;
-(void)dealloc;
-(void)moveAndResizeWithinParentLayer:(id)arg0 usingGravity:(id)arg1 animate:(BOOL)arg2 ;
-(void)notifyDelegateDidChangePlaybackTime;
-(void)notifyDelegateDidStartPlaying;
-(void)notifyDelegateDidStopPlaying;
-(void)pause;
-(void)play;
-(void)removeFromSuperlayer;
-(void)runPlayTimer:(id)arg0 ;
-(void)startPlayTimerIfNeeded;
-(void)stopPlayTimer;


@end


#endif