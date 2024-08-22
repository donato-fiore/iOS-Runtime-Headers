// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALNLV4_PARSERTOKENISATION_H
#define SIRINLUINTERNALNLV4_PARSERTOKENISATION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALTokenChain.h"

@interface SIRINLUINTERNALNLV4_PARSERTokenisation : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasNormalisedUtterance;
@property (readonly, nonatomic) BOOL hasOriginalUtterance;
@property (readonly, nonatomic) BOOL hasTokenChain;
@property (retain, nonatomic) NSString *normalisedUtterance; // ivar: _normalisedUtterance
@property (retain, nonatomic) NSString *originalUtterance; // ivar: _originalUtterance
@property (retain, nonatomic) SIRINLUINTERNALTokenChain *tokenChain; // ivar: _tokenChain


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