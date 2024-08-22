// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDARCHIVEDSESSION_H
#define MANAGEDARCHIVEDSESSION_H

@class NSManagedObject, NSString, NSDate;


#import "ManagedScoreSummary.h"

@interface ManagedArchivedSession : NSManagedObject

@property (nonatomic) int activityType;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat percentageCompleted;
@property (nonatomic, retain) ManagedScoreSummary *scoreSummary;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *watchConnectionState;
@property (nonatomic, copy) NSString *workoutIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif