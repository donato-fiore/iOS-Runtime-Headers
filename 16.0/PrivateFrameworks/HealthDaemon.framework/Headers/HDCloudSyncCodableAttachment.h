// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLEATTACHMENT_H
#define HDCLOUDSYNCCODABLEATTACHMENT_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCloudSyncCodableAttachment : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *assetData; // ivar: _assetData
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSData *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSString *fileHash; // ivar: _fileHash
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSInteger fileSize; // ivar: _fileSize
@property (readonly, nonatomic) BOOL hasAssetData;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (readonly, nonatomic) BOOL hasFileHash;
@property (readonly, nonatomic) BOOL hasFileName;
@property (nonatomic) BOOL hasFileSize;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasMimeType;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion


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