// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBMODIFYNICKNAME_H
#define _INPBMODIFYNICKNAME_H

@class PBCodable, NSString;
@protocol _INPBModifyNickname, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBModifyNickname : PBCodable <_INPBModifyNickname, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsRemoval;
@property (readonly, nonatomic) BOOL hasTargetNickname;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemoval; // ivar: _isRemoval
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBString *targetNickname; // ivar: _targetNickname


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