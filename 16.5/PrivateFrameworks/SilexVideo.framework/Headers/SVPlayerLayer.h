// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVPLAYERLAYER_H
#define SVPLAYERLAYER_H

@class CALayer, AVPlayer, AVPlayerLayer, NSString;


#import "SVLooper.h"
#import "SVNonAnimatingDelegate.h"
#import "SVKeyValueObserver.h"
#import "SVImageLayer.h"

@interface SVPlayerLayer : CALayer

@property (nonatomic) NSUInteger currentPlaybackKind; // ivar: _currentPlaybackKind
@property (retain, nonatomic) SVLooper *looper; // ivar: _looper
@property (retain, nonatomic) SVNonAnimatingDelegate *nonAnimatingDelegate; // ivar: _nonAnimatingDelegate
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (retain, nonatomic) SVKeyValueObserver *readyForDisplayObserver; // ivar: _readyForDisplayObserver
@property (retain, nonatomic) SVKeyValueObserver *statusObserver; // ivar: _statusObserver
@property (readonly) SVImageLayer *stillImageLayer; // ivar: _stillImageLayer
@property (copy, nonatomic) NSString *videoGravity;


+(id)defaultActionForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)dealloc;
-(void)initialize;
-(void)layoutSublayers;
-(void)pause;
-(void)play;
-(void)playWithPlaybackKind:(NSUInteger)arg0 looping:(BOOL)arg1 ;


@end


#endif