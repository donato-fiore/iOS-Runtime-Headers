// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBHOMEENTITYRESPONSE_H
#define _INPBHOMEENTITYRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBHomeEntityResponse, NSSecureCoding, NSCopying;


#import "_INPBHomeEntity.h"

@interface _INPBHomeEntityResponse : PBCodable <_INPBHomeEntityResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBHomeEntity *entity; // ivar: _entity
@property (readonly, nonatomic) BOOL hasEntity;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *taskResponses; // ivar: _taskResponses
@property (readonly, nonatomic) NSUInteger taskResponsesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)taskResponsesAtIndex:(NSUInteger)arg0 ;
-(void)addTaskResponses:(id)arg0 ;
-(void)clearTaskResponses;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif