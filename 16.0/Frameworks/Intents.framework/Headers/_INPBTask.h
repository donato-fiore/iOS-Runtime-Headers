// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBTASK_H
#define _INPBTASK_H

@class PBCodable, NSString;
@protocol _INPBTask, NSSecureCoding, NSCopying;


#import "_INPBContactEventTrigger.h"
#import "_INPBDateTime.h"
#import "_INPBSpatialEventTrigger.h"
#import "_INPBTemporalEventTrigger.h"
#import "_INPBDataString.h"

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger; // ivar: _contactEventTrigger
@property (retain, nonatomic) _INPBDateTime *createdDateTime; // ivar: _createdDateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTaskReference;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime; // ivar: _modifiedDateTime
@property (copy, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) int priority; // ivar: _priority
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // ivar: _spatialEventTrigger
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) int taskReference; // ivar: _taskReference
@property (nonatomic) int taskType; // ivar: _taskType
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger
@property (retain, nonatomic) _INPBDataString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)priorityAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(id)taskReferenceAsString:(int)arg0 ;
-(id)taskTypeAsString:(int)arg0 ;
-(int)StringAsPriority:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsTaskReference:(id)arg0 ;
-(int)StringAsTaskType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif