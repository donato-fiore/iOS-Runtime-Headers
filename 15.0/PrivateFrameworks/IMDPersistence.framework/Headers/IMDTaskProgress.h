// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDTASKPROGRESS_H
#define IMDTASKPROGRESS_H

@class NSDateComponentsFormatter, NSString;

#import <Foundation/Foundation.h>


@interface IMDTaskProgress : NSObject {
    NSUInteger _lastPercentComplete;
    CGFloat _startTime;
    NSDateComponentsFormatter *_intervalFormatter;
}


@property (readonly, nonatomic) NSString *taskName; // ivar: _taskName
@property (readonly, nonatomic) NSUInteger totalCount; // ivar: _totalCount


-(id)initWithTaskName:(id)arg0 totalCount:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)startTrackingTime;
-(void)updateWithCompletedCount:(NSUInteger)arg0 ;


@end


#endif