// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBMODIFYRELATIONSHIP_H
#define _INPBMODIFYRELATIONSHIP_H

@class PBCodable, NSString;
@protocol _INPBModifyRelationship, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBModifyRelationship : PBCodable <_INPBModifyRelationship, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsRemoval;
@property (readonly, nonatomic) BOOL hasTargetRelationship;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemoval; // ivar: _isRemoval
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBString *targetRelationship; // ivar: _targetRelationship


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