// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDSESSIONSCORES_H
#define MANAGEDSESSIONSCORES_H

@class NSManagedObject, NSData, NSString;



@interface ManagedSessionScores : NSManagedObject

@property (nonatomic) NSInteger activityType;
@property (nonatomic, copy) NSData *scores;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) int workoutDuration;
@property (nonatomic, copy) NSString *workoutIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif