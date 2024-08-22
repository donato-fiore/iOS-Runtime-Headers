// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHWRAPCODABLEMESSAGEHEADER_H
#define HKHEALTHWRAPCODABLEMESSAGEHEADER_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HKHealthWrapCodableMessageHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL compressed; // ivar: _compressed
@property (retain, nonatomic) NSData *encryptedHMACKey; // ivar: _encryptedHMACKey
@property (retain, nonatomic) NSData *encryptedMessageKey; // ivar: _encryptedMessageKey
@property (retain, nonatomic) NSData *encryptionIdentity; // ivar: _encryptionIdentity
@property (nonatomic) BOOL hasCompressed;
@property (readonly, nonatomic) BOOL hasEncryptedHMACKey;
@property (readonly, nonatomic) BOOL hasEncryptedMessageKey;
@property (readonly, nonatomic) BOOL hasEncryptionIdentity;
@property (readonly, nonatomic) BOOL hasStudyIdentifier;
@property (readonly, nonatomic) BOOL hasStudyUUID;
@property (nonatomic) BOOL hasTrailingHMACLength;
@property (nonatomic) BOOL hasTrailingSHALength;
@property (readonly, nonatomic) BOOL hasUploadUUID;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *studyIdentifier; // ivar: _studyIdentifier
@property (retain, nonatomic) NSData *studyUUID; // ivar: _studyUUID
@property (nonatomic) int trailingHMACLength; // ivar: _trailingHMACLength
@property (nonatomic) int trailingSHALength; // ivar: _trailingSHALength
@property (retain, nonatomic) NSData *uploadUUID; // ivar: _uploadUUID
@property (nonatomic) NSInteger version; // ivar: _version


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