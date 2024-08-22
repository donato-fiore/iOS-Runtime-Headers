// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPKSIGNPOSTEVENT_H
#define LPKSIGNPOSTEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface LPKSignpostEvent : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(void)_calculateDurationIfNeeded;


@end


#endif