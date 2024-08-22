// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALPARSER_H
#define SIRINLUEXTERNALPARSER_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUEXTERNALParser : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) BOOL hasParserId;
@property (nonatomic) int parserId; // ivar: _parserId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parserIdAsString:(int)arg0 ;
-(int)StringAsAlgorithm:(id)arg0 ;
-(int)StringAsParserId:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif