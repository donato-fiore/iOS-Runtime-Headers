// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTWORLDCLOCK_H
#define MTWORLDCLOCK_H

@class INObject, NSString, NSDateComponents, NSNumber;



@interface MTWorldClock : INObject

@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSDateComponents *currentDate;
@property (copy, nonatomic) NSDateComponents *currentTime;
@property (copy, nonatomic) NSNumber *isDaylightSavingTime;
@property (copy, nonatomic) NSString *timeZoneAbbreviation;
@property (copy, nonatomic) NSString *timeZoneDisplayName;
@property (copy, nonatomic) NSString *timeZoneName;
@property (copy, nonatomic) NSNumber *timeZoneOffset;
@property (copy, nonatomic) NSNumber *timeZoneOffsetFromGMT;




@end


#endif