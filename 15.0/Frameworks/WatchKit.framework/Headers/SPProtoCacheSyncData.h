// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPPROTOCACHESYNCDATA_H
#define SPPROTOCACHESYNCDATA_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SPProtoCacheAssets.h"

@interface SPProtoCacheSyncData : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *cacheIdentifier; // ivar: _cacheIdentifier
@property (retain, nonatomic) SPProtoCacheAssets *permanentCache; // ivar: _permanentCache
@property (retain, nonatomic) SPProtoCacheAssets *transientCache; // ivar: _transientCache


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