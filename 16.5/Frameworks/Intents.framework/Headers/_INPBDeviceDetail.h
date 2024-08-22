// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBDEVICEDETAIL_H
#define _INPBDEVICEDETAIL_H

@class PBCodable, NSString;
@protocol _INPBDeviceDetail, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"
#import "_INPBContact.h"

@interface _INPBDeviceDetail : PBCodable <_INPBDeviceDetail, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDataString *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceClass; // ivar: _deviceClass
@property (retain, nonatomic) _INPBDataString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) _INPBContact *deviceOwner; // ivar: _deviceOwner
@property (readonly, nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasDeviceClass;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly, nonatomic) BOOL hasDeviceOwner;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasProductName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) _INPBDataString *productName; // ivar: _productName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceClassAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDeviceClass:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif