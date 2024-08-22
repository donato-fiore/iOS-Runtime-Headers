// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI30UNIFIEDMESSAGINGSIGNALPROVIDER_H
#define _TTC8VIDEOSUI30UNIFIEDMESSAGINGSIGNALPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI30UnifiedMessagingSignalProvider : NSObject {
    ? signalLock;
    ? engagement;
    ? downloadAndPurchaseAccessQueue;
    ? mediaLibrary;
    ? upsellOfferPresented;
    ? lastPlaybackEvent;
    ? playbackElapsedTime;
    ? notifAuthStatus;
    ? hasEventForTVPlusonLargeTV;
    ? hasEventForTVPlusonATV;
    ? hasItunesPurchases;
    ? hasItunesDownloads;
    ? hasSubscriptionDownloads;
}




-(id)init;
-(void)dealloc;


@end


#endif