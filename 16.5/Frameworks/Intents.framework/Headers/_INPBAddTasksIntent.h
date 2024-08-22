// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBADDTASKSINTENT_H
#define _INPBADDTASKSINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBAddTasksIntent, NSSecureCoding, NSCopying;


#import "_INPBContactEventTrigger.h"
#import "_INPBIntent.h"
#import "_INPBIntentMetadata.h"
#import "_INPBSpatialEventTrigger.h"
#import "_INPBTaskList.h"
#import "_INPBTemporalEventTrigger.h"

@interface _INPBAddTasksIntent : PBCodable <_INPBAddTasksIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger; // ivar: _contactEventTrigger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (readonly, nonatomic) BOOL hasIntent;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (readonly, nonatomic) BOOL hasTargetTaskList;
@property (nonatomic) BOOL hasTaskReference;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntent *intent; // ivar: _intent
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int priority; // ivar: _priority
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // ivar: _spatialEventTrigger
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTaskList *targetTaskList; // ivar: _targetTaskList
@property (copy, nonatomic) NSArray *targetTaskListMembers; // ivar: _targetTaskListMembers
@property (readonly, nonatomic) NSUInteger targetTaskListMembersCount;
@property (nonatomic) int taskReference; // ivar: _taskReference
@property (copy, nonatomic) NSArray *taskTitles; // ivar: _taskTitles
@property (readonly, nonatomic) NSUInteger taskTitlesCount;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)priorityAsString:(int)arg0 ;
-(id)targetTaskListMembersAtIndex:(NSUInteger)arg0 ;
-(id)taskReferenceAsString:(int)arg0 ;
-(id)taskTitlesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPriority:(id)arg0 ;
-(int)StringAsTaskReference:(id)arg0 ;
-(void)addTargetTaskListMembers:(id)arg0 ;
-(void)addTaskTitles:(id)arg0 ;
-(void)clearTargetTaskListMembers;
-(void)clearTaskTitles;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif