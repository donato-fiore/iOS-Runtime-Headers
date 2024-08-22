// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXEVENT_H
#define ATXEVENT_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXEvent : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSObject<NSSecureCoding> *event; // ivar: _event
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(void)joinLaunchEvents:(id)arg0 withVisits:(id)arg1 block:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithEvent:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif