// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLQUERY_H
#define PLQUERY_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "PLQuery.h"

@interface PLQuery : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int conjunction; // ivar: _conjunction
@property (retain, nonatomic) PLQuery *first; // ivar: _first
@property (nonatomic) BOOL hasConjunction;
@property (readonly, nonatomic) BOOL hasFirst;
@property (readonly, nonatomic) BOOL hasSecond;
@property (retain, nonatomic) PLQuery *second; // ivar: _second
@property (retain, nonatomic) NSMutableArray *singleQueries; // ivar: _singleQueries


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)logDescription;
-(id)singleQueriesAtIndex:(NSUInteger)arg0 ;
-(void)addSingleQueries:(id)arg0 ;
-(void)clearSingleQueries;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif