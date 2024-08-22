// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSMANAGEDPUBLICEVENT_H
#define CLSMANAGEDPUBLICEVENT_H

@class NSManagedObject, NSSet, NSNumber, NSDate, NSString, NSTimeZone;



@interface CLSManagedPublicEvent : NSManagedObject

@property (nonatomic) CGFloat businessItemLatitude;
@property (nonatomic) CGFloat businessItemLongitude;
@property (nonatomic) NSUInteger businessItemMuid;
@property (retain, nonatomic) NSSet *categories;
@property (nonatomic) NSInteger expectedAttendance;
@property (retain, nonatomic) NSNumber *expectedAttendanceAsNumber;
@property (retain, nonatomic) NSDate *localEndDate;
@property (nonatomic) CGFloat localEndTime;
@property (retain, nonatomic) NSDate *localStartDate;
@property (nonatomic) CGFloat localStartTime;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *performers;
@property (retain, nonatomic) NSSet *queryLocations;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) NSInteger timeZoneOffset;


+(id)entityName;


@end


#endif