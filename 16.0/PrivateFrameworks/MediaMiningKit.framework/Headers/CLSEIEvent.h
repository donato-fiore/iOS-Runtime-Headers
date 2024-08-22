// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEIEVENT_H
#define CLSEIEVENT_H

@class NSManagedObject, NSSet, NSDate, NSString, NSTimeZone;


#import "CLSEIVenue.h"

@interface CLSEIEvent : NSManagedObject

@property (copy, nonatomic) NSSet *artists;
@property (copy, nonatomic) NSSet *categories;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) CGFloat endTime;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) CGFloat startTime;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) NSInteger timeZoneOffset;
@property (nonatomic) NSInteger uuid;
@property (retain, nonatomic) CLSEIVenue *venue;




@end


#endif