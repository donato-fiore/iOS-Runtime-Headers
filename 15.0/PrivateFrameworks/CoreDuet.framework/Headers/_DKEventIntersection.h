// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKEVENTINTERSECTION_H
#define _DKEVENTINTERSECTION_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface _DKEventIntersection : NSObject

@property (readonly) NSDate *endDate; // ivar: _endDate
@property (readonly) NSArray *events; // ivar: _events
@property (readonly) NSDate *startDate; // ivar: _startDate


+(id)eventIntersectionWithStartDate:(id)arg0 endDate:(id)arg1 events:(id)arg2 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 events:(id)arg2 ;


@end


#endif