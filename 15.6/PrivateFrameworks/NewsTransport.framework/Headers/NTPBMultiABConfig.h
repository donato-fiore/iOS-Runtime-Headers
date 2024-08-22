// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBMULTIABCONFIG_H
#define NTPBMULTIABCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NTPBConfig.h"

@interface NTPBMultiABConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *abConfigs; // ivar: _abConfigs
@property (retain, nonatomic) NTPBConfig *defaultConfig; // ivar: _defaultConfig
@property (readonly, nonatomic) BOOL hasDefaultConfig;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) NSInteger moduloForHashing; // ivar: _moduloForHashing


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)abConfigsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAbConfigs:(id)arg0 ;
-(void)clearAbConfigs;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif