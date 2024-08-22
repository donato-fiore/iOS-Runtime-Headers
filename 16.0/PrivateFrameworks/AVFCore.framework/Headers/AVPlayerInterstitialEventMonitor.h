// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERINTERSTITIALEVENTMONITOR_H
#define AVPLAYERINTERSTITIALEVENTMONITOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVPlayer.h"
#import "AVQueuePlayer.h"
#import "AVWeakReference.h"
#import "AVPlayerInterstitialEvent.h"

@interface AVPlayerInterstitialEventMonitor : NSObject {
    AVPlayer *_primaryPlayer;
    AVQueuePlayer *_interstitialPlayer;
    AVWeakReference *_weakReference;
    *OpaqueFigPlayerInterstitialCoordinator _observedCoord;
}


@property (readonly) AVPlayerInterstitialEvent *currentEvent;
@property (readonly, copy) NSArray *events;
@property (readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property (readonly, weak, nonatomic) AVPlayer *primaryPlayer;


+(id)interstitialEventMonitorWithPrimaryPlayer:(id)arg0 ;
-(id)init;
-(id)initWithPrimaryPlayer:(id)arg0 ;
-(id)makeCopyOf:(id)arg0 immutable:(BOOL)arg1 ;
-(void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator *)arg0 ;
-(void)_removeMonitorListeners;
-(void)dealloc;


@end


#endif