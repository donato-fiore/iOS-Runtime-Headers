// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBLANGUAGEBUCKET_H
#define NTPBLANGUAGEBUCKET_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NTPBGroupingFlags.h"

@interface NTPBLanguageBucket : PBCodable <NSCopying>



@property (retain, nonatomic) NTPBGroupingFlags *groupingFlags; // ivar: _groupingFlags
@property (readonly, nonatomic) BOOL hasGroupingFlags;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearValues;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif