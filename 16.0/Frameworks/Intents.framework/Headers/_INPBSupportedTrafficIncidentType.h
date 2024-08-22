// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSUPPORTEDTRAFFICINCIDENTTYPE_H
#define _INPBSUPPORTEDTRAFFICINCIDENTTYPE_H

@class PBCodable, NSString;
@protocol _INPBSupportedTrafficIncidentType, NSSecureCoding, NSCopying;


#import "_INPBString.h"

@interface _INPBSupportedTrafficIncidentType : PBCodable <_INPBSupportedTrafficIncidentType, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocalizedDisplayString;
@property (nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *localizedDisplayString; // ivar: _localizedDisplayString
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif