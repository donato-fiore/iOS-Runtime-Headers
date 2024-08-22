// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSBACKGROUNDTASKSBACKGROUNDFETCHSCHEDULER_H
#define TSBACKGROUNDTASKSBACKGROUNDFETCHSCHEDULER_H

@protocol TSBackgroundFetchScheduler;

#import <Foundation/Foundation.h>


@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler>

 {
    ? application;
    ? taskIdentifier;
    ? minimumBackgroundFetchInterval;
}




-(id)init;
-(id)initWithApplication:(id)arg0 taskIdentifier:(id)arg1 ;
-(void)prepareForUseWithApplicationDelegate:(id)arg0 ;
-(void)setMinimumBackgroundFetchInterval:(CGFloat)arg0 ;


@end


#endif