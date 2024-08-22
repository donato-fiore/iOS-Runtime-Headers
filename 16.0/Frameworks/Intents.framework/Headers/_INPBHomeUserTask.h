// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBHOMEUSERTASK_H
#define _INPBHOMEUSERTASK_H

@class PBCodable, NSString;
@protocol _INPBHomeUserTask, NSSecureCoding, NSCopying;


#import "_INPBHomeAttributeValue.h"

@interface _INPBHomeUserTask : PBCodable <_INPBHomeUserTask, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int attribute; // ivar: _attribute
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttribute;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int taskType; // ivar: _taskType
@property (retain, nonatomic) _INPBHomeAttributeValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)attributeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)taskTypeAsString:(int)arg0 ;
-(int)StringAsAttribute:(id)arg0 ;
-(int)StringAsTaskType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif