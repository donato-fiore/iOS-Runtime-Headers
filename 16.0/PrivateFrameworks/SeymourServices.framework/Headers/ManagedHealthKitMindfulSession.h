// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDHEALTHKITMINDFULSESSION_H
#define MANAGEDHEALTHKITMINDFULSESSION_H

@class NSManagedObject, NSDate, NSString;


#import "ManagedHealthKitStandaloneMindfulSessionJob.h"

@interface ManagedHealthKitMindfulSession : NSManagedObject

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) CGFloat heartRate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) ManagedHealthKitStandaloneMindfulSessionJob *standaloneMindfulSessionJob;
@property (nonatomic, copy) NSDate *startDate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif