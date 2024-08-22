// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPPLICATIONBACKGROUNDFETCHSCHEDULER_H
#define TSAPPLICATIONBACKGROUNDFETCHSCHEDULER_H

@protocol TSBackgroundFetchScheduler;

#import <Foundation/Foundation.h>


@interface TSApplicationBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler>

 {
    ? application;
}




-(id)init;
-(id)initWithApplication:(id)arg0 ;
-(void)prepareForUseWithApplicationDelegate:(id)arg0 ;
-(void)setMinimumBackgroundFetchInterval:(CGFloat)arg0 ;


@end


#endif