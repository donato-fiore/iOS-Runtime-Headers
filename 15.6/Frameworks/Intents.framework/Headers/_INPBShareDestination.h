// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSHAREDESTINATION_H
#define _INPBSHAREDESTINATION_H

@class PBCodable, NSString;
@protocol _INPBShareDestination, NSSecureCoding, NSCopying;


#import "_INPBContact.h"

@interface _INPBShareDestination : PBCodable <_INPBShareDestination, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (readonly, nonatomic) BOOL hasContact;
@property (nonatomic) BOOL hasDeviceType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceTypeAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDeviceType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif