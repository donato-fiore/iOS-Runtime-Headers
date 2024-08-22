// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBTASKLIST_H
#define _INPBTASKLIST_H

@class PBCodable, NSString, NSArray;
@protocol _INPBTaskList, NSSecureCoding, NSCopying;


#import "_INPBDateTime.h"
#import "_INPBDataString.h"

@interface _INPBTaskList : PBCodable <_INPBTaskList, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTime *createdDateTime; // ivar: _createdDateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBDataString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasGroupName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime; // ivar: _modifiedDateTime
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tasks; // ivar: _tasks
@property (readonly, nonatomic) NSUInteger tasksCount;
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


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