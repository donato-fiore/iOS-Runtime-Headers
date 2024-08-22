// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCODABLEDATABASECOMPETITIONPREFERREDVICTORYBADGESTYLES_H
#define ASCODABLEDATABASECOMPETITIONPREFERREDVICTORYBADGESTYLES_H

@class PBCodable;
@protocol NSCopying;



@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying>

 {
    ? _styles;
}


@property (readonly, nonatomic) *int styles;
@property (readonly, nonatomic) NSUInteger stylesCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)stylesAtIndex:(NSUInteger)arg0 ;
-(void)addStyles:(int)arg0 ;
-(void)clearStyles;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif