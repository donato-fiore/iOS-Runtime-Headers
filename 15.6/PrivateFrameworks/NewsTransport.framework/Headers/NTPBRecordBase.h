// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBRECORDBASE_H
#define NTPBRECORDBASE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBRecordBase : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NTPBDate *assetURLsDate; // ivar: _assetURLsDate
@property (nonatomic) int cacheLifetimeHint; // ivar: _cacheLifetimeHint
@property (retain, nonatomic) NSString *changeTag; // ivar: _changeTag
@property (nonatomic) BOOL deletedFromCloud; // ivar: _deletedFromCloud
@property (retain, nonatomic) NTPBDate *fetchDate; // ivar: _fetchDate
@property (readonly, nonatomic) BOOL hasAssetURLsDate;
@property (nonatomic) BOOL hasCacheLifetimeHint;
@property (readonly, nonatomic) BOOL hasChangeTag;
@property (nonatomic) BOOL hasDeletedFromCloud;
@property (readonly, nonatomic) BOOL hasFetchDate;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModificationDate;
@property (nonatomic) BOOL hasRecordType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NTPBDate *modificationDate; // ivar: _modificationDate
@property (nonatomic) int recordType; // ivar: _recordType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif