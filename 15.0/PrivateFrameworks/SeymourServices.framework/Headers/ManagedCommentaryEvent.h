// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCOMMENTARYEVENT_H
#define MANAGEDCOMMENTARYEVENT_H

@class NSManagedObject, NSString;


#import "ManagedCatalogWorkoutMetadata.h"

@interface ManagedCommentaryEvent : NSManagedObject

@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSString *topicIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif