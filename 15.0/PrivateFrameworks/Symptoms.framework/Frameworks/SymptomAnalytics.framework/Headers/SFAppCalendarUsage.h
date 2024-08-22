// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPCALENDARUSAGE_H
#define SFAPPCALENDARUSAGE_H

@class NSManagedObject, NSNumber, NSDate;


#import "SFApp.h"

@interface SFAppCalendarUsage : NSManagedObject

@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (retain, nonatomic) SFApp *hintedBy;
@property (copy, nonatomic) NSNumber *tier1;
@property (copy, nonatomic) NSNumber *tier2;
@property (copy, nonatomic) NSNumber *tier3;
@property (copy, nonatomic) NSNumber *tier4;
@property (copy, nonatomic) NSNumber *tier5;
@property (copy, nonatomic) NSNumber *timeOfDaySlot;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif