// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACENAVIGATIONEVENTROW_H
#define MNTRACENAVIGATIONEVENTROW_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MNTraceNavigationEventRow : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *eventDescription; // ivar: _eventDescription
@property (copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) NSUInteger locationID; // ivar: _locationID
@property (nonatomic) CGFloat relativeTimestamp; // ivar: _relativeTimestamp
@property (copy, nonatomic) NSString *speakableEventDescription; // ivar: _speakableEventDescription


-(id)description;


@end


#endif