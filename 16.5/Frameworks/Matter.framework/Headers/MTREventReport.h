// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTREVENTREPORT_H
#define MTREVENTREPORT_H

@class NSNumber, NSError, NSDate;

#import <Foundation/Foundation.h>

#import "MTREventPath.h"

@interface MTREventReport : NSObject {
    NSNumber *_timestampValue;
}


@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSNumber *eventNumber; // ivar: _eventNumber
@property (readonly, nonatomic) NSUInteger eventTimeType; // ivar: _eventTimeType
@property (readonly, copy, nonatomic) MTREventPath *path; // ivar: _path
@property (readonly, copy, nonatomic) NSNumber *priority; // ivar: _priority
@property (readonly, nonatomic) CGFloat systemUpTime; // ivar: _systemUpTime
@property (readonly, copy, nonatomic) NSNumber *timestamp;
@property (readonly, copy, nonatomic) NSDate *timestampDate; // ivar: _timestampDate
@property (readonly, copy, nonatomic) id *value; // ivar: _value


-(id)initWithPath:(struct ConcreteEventPath *)arg0 eventNumber:(id)arg1 priority:(unsigned char)arg2 timestamp:(struct Timestamp *)arg3 value:(id)arg4 error:(id)arg5 ;


@end


#endif