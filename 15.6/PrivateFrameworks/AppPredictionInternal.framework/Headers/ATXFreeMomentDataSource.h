// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFREEMOMENTDATASOURCE_H
#define ATXFREEMOMENTDATASOURCE_H

@class NSArray, NSCountedSet;

#import <Foundation/Foundation.h>


@interface ATXFreeMomentDataSource : NSObject {
    NSArray *_events;
    NSCountedSet *_appsLaunchedInLastNSeconds;
    NSArray *_motionStatesInLastNSeconds;
}




-(id)appsLaunchedInLastNSeconds:(CGFloat)arg0 ;
-(id)fetchEventsForDay;
-(id)init;
-(id)initWithAppsLaunchedInLastNSeconds:(id)arg0 ;
-(id)initWithEvents:(id)arg0 ;
-(id)initWithMotionStatesInLastNSeconds:(id)arg0 ;
-(id)motionStatesInLastNSeconds:(CGFloat)arg0 ;
-(id)numPhoneUnlockEventsInLastNSeconds:(CGFloat)arg0 ;
-(void)logCompletion:(id)arg0 ;


@end


#endif