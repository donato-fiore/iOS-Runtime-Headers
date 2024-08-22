// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPMEDIAPLAYERDELEGATE_H
#define PPMEDIAPLAYERDELEGATE_H

@class PPNamedEntityStore, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PPMediaPlayerResponse.h"

@interface PPMediaPlayerDelegate : NSObject {
    PPNamedEntityStore *_namedEntityStore;
    CGFloat _donationDelaySeconds;
    BOOL _useNamedEntityDissector;
    PPMediaPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)bundleIdOfCurrentForegroundApp;
-(id)getResponse;
-(id)init;
-(id)initWithNamedEntityStore:(id)arg0 donationDelaySeconds:(CGFloat)arg1 registersResponseLoading:(BOOL)arg2 useNamedEntityDissector:(BOOL)arg3 ;
-(void)_donateDelayedResponse:(id)arg0 timePlayed:(CGFloat)arg1 bundleId:(id)arg2 ;
-(void)_registerForNowPlayingNotifications;
-(void)processResponse:(id)arg0 ;
-(void)waitForQueueEmpty;


@end


#endif