// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSETTASKATTRIBUTEINTENT_H
#define _INPBSETTASKATTRIBUTEINTENT_H

@class PBCodable, NSString;
@protocol _INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying;


#import "_INPBContactEventTrigger.h"
#import "_INPBIntentMetadata.h"
#import "_INPBSpatialEventTrigger.h"
#import "_INPBTask.h"
#import "_INPBDataString.h"
#import "_INPBTemporalEventTrigger.h"

@interface _INPBSetTaskAttributeIntent : PBCodable <_INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger; // ivar: _contactEventTrigger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTargetTask;
@property (readonly, nonatomic) BOOL hasTaskTitle;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int priority; // ivar: _priority
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // ivar: _spatialEventTrigger
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTask *targetTask; // ivar: _targetTask
@property (retain, nonatomic) _INPBDataString *taskTitle; // ivar: _taskTitle
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // ivar: _temporalEventTrigger


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)priorityAsString:(int)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsPriority:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif