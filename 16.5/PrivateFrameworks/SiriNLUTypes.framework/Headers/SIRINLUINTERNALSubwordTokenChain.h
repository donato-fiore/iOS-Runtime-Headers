// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALSUBWORDTOKENCHAIN_H
#define SIRINLUINTERNALSUBWORDTOKENCHAIN_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALSubwordTokenChain : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *subwordTokens; // ivar: _subwordTokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subwordTokensAtIndex:(NSUInteger)arg0 ;
-(void)addSubwordTokens:(id)arg0 ;
-(void)clearSubwordTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif