// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNASCENESESSIONTRACKER_H
#define ICNASCENESESSIONTRACKER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ICNASceneSessionTracker : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *lastStartDate; // ivar: _lastStartDate
@property (nonatomic) NSInteger sessionTypeEnum; // ivar: _sessionTypeEnum
@property (readonly, nonatomic) BOOL timerIsOn;


-(id)initWithSessionTypeEnum:(NSInteger)arg0 ;
-(id)sessionSummaryItemData;
-(void)endTimer;
-(void)startTimer;


@end


#endif