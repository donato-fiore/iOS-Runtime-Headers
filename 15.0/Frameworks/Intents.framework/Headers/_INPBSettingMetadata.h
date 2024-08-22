// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSETTINGMETADATA_H
#define _INPBSETTINGMETADATA_H

@class PBCodable, NSString;
@protocol _INPBSettingMetadata, NSSecureCoding, NSCopying;


#import "_INPBAppIdentifier.h"
#import "_INPBDevice.h"

@interface _INPBSettingMetadata : PBCodable <_INPBSettingMetadata, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSettingId;
@property (readonly, nonatomic) BOOL hasTargetApp;
@property (readonly, nonatomic) BOOL hasTargetDevice;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *settingId; // ivar: _settingId
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBAppIdentifier *targetApp; // ivar: _targetApp
@property (retain, nonatomic) _INPBDevice *targetDevice; // ivar: _targetDevice


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