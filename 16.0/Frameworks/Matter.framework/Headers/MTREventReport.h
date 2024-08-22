// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTREVENTREPORT_H
#define MTREVENTREPORT_H

@class NSError, NSNumber;

#import <Foundation/Foundation.h>

#import "MTREventPath.h"

@interface MTREventReport : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSNumber *eventNumber; // ivar: _eventNumber
@property (readonly, nonatomic) MTREventPath *path; // ivar: _path
@property (readonly, nonatomic) NSNumber *priority; // ivar: _priority
@property (readonly, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithPath:(struct ConcreteEventPath *)arg0 eventNumber:(id)arg1 priority:(id)arg2 timestamp:(id)arg3 value:(id)arg4 error:(id)arg5 ;


@end


#endif