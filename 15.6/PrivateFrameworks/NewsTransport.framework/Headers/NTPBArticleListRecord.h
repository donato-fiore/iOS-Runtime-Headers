// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLELISTRECORD_H
#define NTPBARTICLELISTRECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"

@interface NTPBArticleListRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *articleIDs; // ivar: _articleIDs
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *metadata; // ivar: _metadata
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArticleIDs:(id)arg0 ;
-(void)clearArticleIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif