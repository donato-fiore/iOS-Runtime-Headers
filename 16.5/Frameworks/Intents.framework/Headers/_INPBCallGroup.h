// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBCALLGROUP_H
#define _INPBCALLGROUP_H

@class PBCodable, NSString;
@protocol _INPBCallGroup, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBCallGroup : PBCodable <_INPBCallGroup, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBString *groupId; // ivar: _groupId
@property (retain, nonatomic) _INPBString *groupName; // ivar: _groupName
@property (readonly, nonatomic) BOOL hasGroupId;
@property (readonly, nonatomic) BOOL hasGroupName;
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