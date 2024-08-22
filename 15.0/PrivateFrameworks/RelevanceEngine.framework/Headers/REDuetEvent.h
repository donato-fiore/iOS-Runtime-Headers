// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDUETEVENT_H
#define REDUETEVENT_H

@class NSDateInterval;

#import <Foundation/Foundation.h>

#import "REFeatureValue.h"

@interface REDuetEvent : NSObject

@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) REFeatureValue *value; // ivar: _value


+(id)eventWithInterval:(id)arg0 value:(id)arg1 confidence:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif