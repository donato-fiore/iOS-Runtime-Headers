// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALTOKENCHAIN_H
#define SIRINLUINTERNALTOKENCHAIN_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALTokenChain : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain, nonatomic) NSMutableArray *tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tokensAtIndex:(NSUInteger)arg0 ;
-(void)addTokens:(id)arg0 ;
-(void)clearTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif