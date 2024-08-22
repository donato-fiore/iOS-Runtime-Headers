// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HVDONATIONRECEIVER_H
#define HVDONATIONRECEIVER_H

@class BMBiomeScheduler, BPSSink;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HVQueues.h"

@interface HVDonationReceiver : NSObject {
    HVQueues *_queues;
    NSObject<OS_dispatch_queue> *_biomeSubQueue;
    BMBiomeScheduler *_biomeScheduler;
    BPSSink *_biomeSink;
}




+(id)defaultReceiver;
-(BOOL)deleteContentWithRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)donateInteractions:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)donateSearchableItems:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)donateUserAction:(id)arg0 searchableItem:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithQueues:(id)arg0 ;
-(void)_setUpUserActivityDonations;


@end


#endif