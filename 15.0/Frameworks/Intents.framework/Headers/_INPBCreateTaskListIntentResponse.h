// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBCREATETASKLISTINTENTRESPONSE_H
#define _INPBCREATETASKLISTINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBCreateTaskListIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBTaskList.h"

@interface _INPBCreateTaskListIntentResponse : PBCodable <_INPBCreateTaskListIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBTaskList *createdTaskList; // ivar: _createdTaskList
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCreatedTaskList;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif