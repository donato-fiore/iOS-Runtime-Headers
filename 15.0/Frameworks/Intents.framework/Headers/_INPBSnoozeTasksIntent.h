// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSNOOZETASKSINTENT_H
#define _INPBSNOOZETASKSINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSnoozeTasksIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBDateTimeRange.h"

@interface _INPBSnoozeTasksIntent : PBCodable <_INPBSnoozeTasksIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL all; // ivar: _all
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAll;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasNextTriggerTime;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBDateTimeRange *nextTriggerTime; // ivar: _nextTriggerTime
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tasks; // ivar: _tasks
@property (readonly, nonatomic) NSUInteger tasksCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)tasksAtIndex:(NSUInteger)arg0 ;
-(void)addTasks:(id)arg0 ;
-(void)clearTasks;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif