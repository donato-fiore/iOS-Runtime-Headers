// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETMETADATA_H
#define PETMETADATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PETMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (nonatomic) unsigned int configVersion; // ivar: _configVersion
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSString *device; // ivar: _device
@property (readonly, nonatomic) BOOL hasBuild;
@property (nonatomic) BOOL hasConfigVersion;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasDevice;
@property (nonatomic) BOOL hasIsConfigEnabled;
@property (nonatomic) BOOL hasIsGm;
@property (nonatomic) BOOL hasIsInternal;
@property (nonatomic) BOOL hasIsInternalCarry;
@property (nonatomic) BOOL hasIsSeed;
@property (nonatomic) BOOL hasIsTestingData;
@property (nonatomic) BOOL hasIsTrialUpload;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasMessageGroup;
@property (readonly, nonatomic) BOOL hasPlatform;
@property (readonly, nonatomic) BOOL hasPseudoDeviceId;
@property (readonly, nonatomic) BOOL hasUploadIdentifier;
@property (nonatomic) BOOL hasUploadService;
@property (nonatomic) BOOL hasUploadTime;
@property (nonatomic) BOOL isConfigEnabled; // ivar: _isConfigEnabled
@property (nonatomic) BOOL isGm; // ivar: _isGm
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (nonatomic) BOOL isInternalCarry; // ivar: _isInternalCarry
@property (nonatomic) BOOL isSeed; // ivar: _isSeed
@property (nonatomic) BOOL isTestingData; // ivar: _isTestingData
@property (nonatomic) BOOL isTrialUpload; // ivar: _isTrialUpload
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *messageGroup; // ivar: _messageGroup
@property (retain, nonatomic) NSString *platform; // ivar: _platform
@property (retain, nonatomic) NSString *pseudoDeviceId; // ivar: _pseudoDeviceId
@property (retain, nonatomic) NSString *uploadIdentifier; // ivar: _uploadIdentifier
@property (nonatomic) int uploadService; // ivar: _uploadService
@property (nonatomic) NSUInteger uploadTime; // ivar: _uploadTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)uploadServiceAsString:(int)arg0 ;
-(int)StringAsUploadService:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif