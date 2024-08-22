// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPMERGEABLEDELTAMETADATA_H
#define CKDPMERGEABLEDELTAMETADATA_H

@class PBCodable, NSData, NSString, NSMutableArray, CKDPDistributedTimestamps;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"

@interface CKDPMergeableDeltaMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *encryptedTimestamps; // ivar: _encryptedTimestamps
@property (readonly, nonatomic) BOOL hasEncryptedTimestamps;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasTimestamps;
@property (readonly, nonatomic) BOOL hasTimestampsAuthTag;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers; // ivar: _replacedDeltaIdentifiers
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps; // ivar: _timestamps
@property (retain, nonatomic) NSData *timestampsAuthTag; // ivar: _timestampsAuthTag


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)replacedDeltaIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addReplacedDeltaIdentifiers:(id)arg0 ;
-(void)clearReplacedDeltaIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif