// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYACTIVITYTHROTTLER_H
#define WBSHISTORYACTIVITYTHROTTLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WBSHistoryActivityThrottler : NSObject {
    NSMutableArray *_activityTimes;
}


@property (nonatomic) NSUInteger activityLimitPerSecond; // ivar: _activityLimitPerSecond


-(BOOL)shouldRecordHistoryVisitAtTime:(CGFloat)arg0 ;
-(id)initWithLimitPerSecond:(NSUInteger)arg0 ;


@end


#endif