// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCELLULARFWCORESTATS_H
#define KCELLULARFWCORESTATS_H

@class PBCodable;
@protocol NSCopying;


#import "EutraStats.h"
#import "GeraStats.h"
#import "UtraFddStats.h"
#import "UtraTddStats.h"

@interface KCellularFwCoreStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) EutraStats *eutraStats; // ivar: _eutraStats
@property (retain, nonatomic) GeraStats *geraStats; // ivar: _geraStats
@property (readonly, nonatomic) BOOL hasEutraStats;
@property (readonly, nonatomic) BOOL hasGeraStats;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUtraFddStats;
@property (readonly, nonatomic) BOOL hasUtraTddStats;
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) UtraFddStats *utraFddStats; // ivar: _utraFddStats
@property (retain, nonatomic) UtraTddStats *utraTddStats; // ivar: _utraTddStats


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