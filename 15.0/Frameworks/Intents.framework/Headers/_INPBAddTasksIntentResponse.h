// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBADDTASKSINTENTRESPONSE_H
#define _INPBADDTASKSINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBAddTasksIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBTaskList.h"

@interface _INPBAddTasksIntentResponse : PBCodable <_INPBAddTasksIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _warnings;
    ? _has;
}


@property (copy, nonatomic) NSArray *addedTasks; // ivar: _addedTasks
@property (readonly, nonatomic) NSUInteger addedTasksCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasModifiedTaskList;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBTaskList *modifiedTaskList; // ivar: _modifiedTaskList
@property (readonly) Class superclass;
@property (readonly, nonatomic) *int warnings;
@property (readonly, nonatomic) NSUInteger warningsCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)addedTasksAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)warningsAsString:(int)arg0 ;
-(int)StringAsWarnings:(id)arg0 ;
-(int)warningsAtIndex:(NSUInteger)arg0 ;
-(void)addAddedTasks:(id)arg0 ;
-(void)addWarnings:(int)arg0 ;
-(void)clearAddedTasks;
-(void)clearWarnings;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif