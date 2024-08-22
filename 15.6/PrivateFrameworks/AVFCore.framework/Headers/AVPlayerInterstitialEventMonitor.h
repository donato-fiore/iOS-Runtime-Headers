// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly) NSArray *events;
@property (readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property (readonly, weak, nonatomic) AVPlayer *primaryPlayer;


+(id)interstitialEventMonitorWithPrimaryPlayer:(id)arg0 ;
-(id)init;
-(id)initWithPrimaryPlayer:(id)arg0 ;
-(void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator *)arg0 ;
-(void)_removeMonitorListeners;
-(void)dealloc;


@end


#endif