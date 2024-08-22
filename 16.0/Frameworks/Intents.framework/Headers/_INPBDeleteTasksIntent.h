// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBDELETETASKSINTENT_H
#define _INPBDELETETASKSINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBDeleteTasksIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"
#import "_INPBTaskList.h"

@interface _INPBDeleteTasksIntent : PBCodable <_INPBDeleteTasksIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL all; // ivar: _all
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAll;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasTaskList;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTaskList *taskList; // ivar: _taskList
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