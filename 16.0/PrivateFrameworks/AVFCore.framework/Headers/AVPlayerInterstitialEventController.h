// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERINTERSTITIALEVENTCONTROLLER_H
#define AVPLAYERINTERSTITIALEVENTCONTROLLER_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "AVPlayerInterstitialEventMonitor.h"

@interface AVPlayerInterstitialEventController : AVPlayerInterstitialEventMonitor {
    NSObject<OS_dispatch_queue> *_ivarQueue;
}


@property (copy) NSArray *events;


+(id)interstitialEventControllerWithPrimaryPlayer:(id)arg0 ;
-(id)initWithPrimaryPlayer:(id)arg0 ;
-(void)cancelCurrentEventWithResumptionOffset:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif