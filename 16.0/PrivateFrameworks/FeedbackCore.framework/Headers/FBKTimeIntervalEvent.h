// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKTIMEINTERVALEVENT_H
#define FBKTIMEINTERVALEVENT_H


#import <Foundation/Foundation.h>


@interface FBKTimeIntervalEvent : NSObject

@property (nonatomic) CGFloat endTimeInterval; // ivar: _endTimeInterval
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (nonatomic) CGFloat startTimeInterval; // ivar: _startTimeInterval


-(id)description;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif