// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCARCHARGINGCONNECTORPOWER_H
#define _INPBCARCHARGINGCONNECTORPOWER_H

@class PBCodable, NSString;
@protocol _INPBCarChargingConnectorPower, NSSecureCoding, NSCopying;


#import "_INPBPower.h"

@interface _INPBCarChargingConnectorPower : PBCodable <_INPBCarChargingConnectorPower, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int chargingConnector; // ivar: _chargingConnector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasChargingConnector;
@property (readonly, nonatomic) BOOL hasMaximumPower;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBPower *maximumPower; // ivar: _maximumPower
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)chargingConnectorAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsChargingConnector:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif