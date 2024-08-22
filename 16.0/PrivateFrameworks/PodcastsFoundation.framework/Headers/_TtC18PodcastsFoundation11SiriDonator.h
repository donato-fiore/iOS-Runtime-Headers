// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18PODCASTSFOUNDATION11SIRIDONATOR_H
#define _TTC18PODCASTSFOUNDATION11SIRIDONATOR_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation11SiriDonator : NSObject {
    ? accountController;
    ? mediaRequestController;
    ? backgroundTaskManager;
    ? workQueue;
    ? _donationInProgress;
}




-(id)init;
-(id)initWithAccountController:(id)arg0 backgroundTaskManager:(id)arg1 ;
-(void)startDonation;


@end


#endif