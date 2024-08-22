// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLEATTACHMENTREFERENCE_H
#define HDCLOUDSYNCCODABLEATTACHMENTREFERENCE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCloudSyncCodableAttachmentReference : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *attachmentIdentifier; // ivar: _attachmentIdentifier
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL hasAttachmentIdentifier;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (nonatomic) BOOL hasOptions;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasSchemaIdentifier;
@property (nonatomic) BOOL hasSchemaVersion;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (nonatomic) NSInteger options; // ivar: _options
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *schemaIdentifier; // ivar: _schemaIdentifier
@property (nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (retain, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (nonatomic) NSInteger type; // ivar: _type


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