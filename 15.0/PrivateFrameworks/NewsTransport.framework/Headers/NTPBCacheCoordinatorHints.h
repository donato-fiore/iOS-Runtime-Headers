// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBCACHECOORDINATORHINTS_H
#define NTPBCACHECOORDINATORHINTS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBCacheCoordinatorHints : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *cacheHints; // ivar: _cacheHints
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cacheHintsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCacheHints:(id)arg0 ;
-(void)clearCacheHints;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif