// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OTESCROWRECORDMETADATACLIENTMETADATA_H
#define OTESCROWRECORDMETADATACLIENTMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface OTEscrowRecordMetadataClientMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (retain, nonatomic) NSString *deviceEnclosureColor; // ivar: _deviceEnclosureColor
@property (retain, nonatomic) NSString *deviceMid; // ivar: _deviceMid
@property (retain, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (retain, nonatomic) NSString *deviceModelClass; // ivar: _deviceModelClass
@property (retain, nonatomic) NSString *deviceModelVersion; // ivar: _deviceModelVersion
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSUInteger devicePlatform; // ivar: _devicePlatform
@property (readonly, nonatomic) BOOL hasDeviceColor;
@property (readonly, nonatomic) BOOL hasDeviceEnclosureColor;
@property (readonly, nonatomic) BOOL hasDeviceMid;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDeviceModelClass;
@property (readonly, nonatomic) BOOL hasDeviceModelVersion;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasDevicePlatform;
@property (nonatomic) BOOL hasSecureBackupMetadataTimestamp;
@property (nonatomic) BOOL hasSecureBackupNumericPassphraseLength;
@property (nonatomic) BOOL hasSecureBackupUsesComplexPassphrase;
@property (nonatomic) BOOL hasSecureBackupUsesNumericPassphrase;
@property (nonatomic) NSUInteger secureBackupMetadataTimestamp; // ivar: _secureBackupMetadataTimestamp
@property (nonatomic) NSUInteger secureBackupNumericPassphraseLength; // ivar: _secureBackupNumericPassphraseLength
@property (nonatomic) NSUInteger secureBackupUsesComplexPassphrase; // ivar: _secureBackupUsesComplexPassphrase
@property (nonatomic) NSUInteger secureBackupUsesNumericPassphrase; // ivar: _secureBackupUsesNumericPassphrase


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif