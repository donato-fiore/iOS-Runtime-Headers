// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCARHEADUNIT_H
#define _INPBCARHEADUNIT_H

@class PBCodable, NSString;
@protocol _INPBCarHeadUnit, NSSecureCoding, NSCopying;



@interface _INPBCarHeadUnit : PBCodable <_INPBCarHeadUnit, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *bluetoothIdentifier; // ivar: _bluetoothIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBluetoothIdentifier;
@property (readonly, nonatomic) BOOL hasIAP2Identifier;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iAP2Identifier; // ivar: _iAP2Identifier
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