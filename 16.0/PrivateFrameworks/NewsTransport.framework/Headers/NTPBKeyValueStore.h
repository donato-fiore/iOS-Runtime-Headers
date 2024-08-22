// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBKEYVALUESTORE_H
#define NTPBKEYVALUESTORE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface NTPBKeyValueStore : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger clientVersion; // ivar: _clientVersion
@property (nonatomic) BOOL hasClientVersion;
@property (readonly, nonatomic) BOOL hasPlistSidecar;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *keyValuePairs; // ivar: _keyValuePairs
@property (retain, nonatomic) NSData *plistSidecar; // ivar: _plistSidecar
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyValuePairsAtIndex:(NSUInteger)arg0 ;
-(void)addKeyValuePairs:(id)arg0 ;
-(void)clearKeyValuePairs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif