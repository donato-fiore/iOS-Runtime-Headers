// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMAGICALMOMENTSAPPPREDICTOR_H
#define ATXMAGICALMOMENTSAPPPREDICTOR_H

@class ATXCoreDuetContextHelper;

#import <Foundation/Foundation.h>

#import "ATXTimeBucketedRateLimiter.h"

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}




+(id)sharedInstance;
-(id)addNowPlayingEventsToAppLaunches:(id)arg0 ;
-(id)fetchAppLaunchEventsForTraining;
-(id)generateAppLaunchCountedSetFromAppLaunches:(id)arg0 ;
-(id)init;
-(void)train;


@end


#endif