// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCLOUDSYNCCODABLEATTACHMENTREFERENCE_H
#define HDCLOUDSYNCCODABLEATTACHMENTREFERENCE_H

@class PBCodable, NSString;
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
@property (readonly, nonatomic) BOOL hasObjectIdentifier;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasSchemaIdentifier;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *schemaIdentifier; // ivar: _schemaIdentifier
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