// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPMEDIAPLAYERDELEGATE_H
#define PPMEDIAPLAYERDELEGATE_H

@class PPNamedEntityStore, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPMediaPlayerResponse.h"

@interface PPMediaPlayerDelegate : NSObject {
    PPNamedEntityStore *_namedEntityStore;
    CGFloat _donationDelaySeconds;
    BOOL _useSGNamedEntityDissector;
    PPMediaPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)bundleIdOfCurrentForegroundApp;
-(id)getResponse;
-(id)init;
-(void)_donateDelayedResponse:(id)arg0 timePlayed:(CGFloat)arg1 bundleId:(id)arg2 ;
-(void)_registerForNowPlayingNotifications;


@end


#endif