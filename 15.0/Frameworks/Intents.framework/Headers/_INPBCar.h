// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBCAR_H
#define _INPBCAR_H

@class PBCodable, NSString, NSArray;
@protocol _INPBCar, NSSecureCoding, NSCopying;


#import "_INPBColor.h"
#import "_INPBCarHeadUnit.h"

@interface _INPBCar : PBCodable <_INPBCar, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *carIdentifier; // ivar: _carIdentifier
@property (retain, nonatomic) _INPBColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasCarIdentifier;
@property (readonly, nonatomic) BOOL hasColor;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasHeadUnit;
@property (readonly, nonatomic) BOOL hasMake;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasYear;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBCarHeadUnit *headUnit; // ivar: _headUnit
@property (copy, nonatomic) NSString *make; // ivar: _make
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSArray *powerPerConnectors; // ivar: _powerPerConnectors
@property (readonly, nonatomic) NSUInteger powerPerConnectorsCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedChargingConnectors; // ivar: _supportedChargingConnectors
@property (readonly, nonatomic) NSUInteger supportedChargingConnectorsCount;
@property (copy, nonatomic) NSString *year; // ivar: _year


+(BOOL)supportsSecureCoding;
+(Class)powerPerConnectorType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)powerPerConnectorAtIndex:(NSUInteger)arg0 ;
-(id)supportedChargingConnectorsAtIndex:(NSUInteger)arg0 ;
-(void)addPowerPerConnector:(id)arg0 ;
-(void)addSupportedChargingConnectors:(id)arg0 ;
-(void)clearPowerPerConnectors;
-(void)clearSupportedChargingConnectors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif