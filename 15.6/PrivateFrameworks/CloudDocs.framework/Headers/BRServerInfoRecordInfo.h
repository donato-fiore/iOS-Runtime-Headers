// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSERVERINFORECORDINFO_H
#define BRSERVERINFORECORDINFO_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface BRServerInfoRecordInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger bounceNo; // ivar: _bounceNo
@property (retain, nonatomic) NSData *encryptedBasename; // ivar: _encryptedBasename
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSString *extension; // ivar: _extension
@property (nonatomic) BOOL hasBounceNo;
@property (readonly, nonatomic) BOOL hasEncryptedBasename;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasExtension;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfo;
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSData *recordProtectionInfo; // ivar: _recordProtectionInfo
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName
@property (retain, nonatomic) NSData *zoneProtectionInfo; // ivar: _zoneProtectionInfo


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