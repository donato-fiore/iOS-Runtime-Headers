// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBDEVICE_H
#define _INPBDEVICE_H

@class PBCodable, NSString;
@protocol _INPBDevice, NSSecureCoding, NSCopying;



@interface _INPBDevice : PBCodable <_INPBDevice, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceCategory; // ivar: _deviceCategory
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) BOOL hasDeviceCategory;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceCategoryAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsDeviceCategory:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif