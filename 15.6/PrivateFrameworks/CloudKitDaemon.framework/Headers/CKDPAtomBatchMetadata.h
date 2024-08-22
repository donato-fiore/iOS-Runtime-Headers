// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPATOMBATCHMETADATA_H
#define CKDPATOMBATCHMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"
#import "CKDPDistributedTimestamps.h"

@interface CKDPAtomBatchMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *encryptedTimestamps; // ivar: _encryptedTimestamps
@property (readonly, nonatomic) BOOL hasEncryptedTimestamps;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasTimestamps;
@property (readonly, nonatomic) BOOL hasTimestampsAuthTag;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps; // ivar: _timestamps
@property (retain, nonatomic) NSData *timestampsAuthTag; // ivar: _timestampsAuthTag


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