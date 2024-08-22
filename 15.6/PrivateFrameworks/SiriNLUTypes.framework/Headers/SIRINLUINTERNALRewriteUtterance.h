// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALREWRITEUTTERANCE_H
#define SIRINLUINTERNALREWRITEUTTERANCE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALRewriteUtterance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (retain, nonatomic) NSMutableArray *asrUtteranceTokens; // ivar: _asrUtteranceTokens
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL hasAsrId;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSMutableArray *nluInternalTokens; // ivar: _nluInternalTokens
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)asrUtteranceTokensAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nluInternalTokensAtIndex:(NSUInteger)arg0 ;
-(void)addAsrUtteranceTokens:(id)arg0 ;
-(void)addNluInternalTokens:(id)arg0 ;
-(void)clearAsrUtteranceTokens;
-(void)clearNluInternalTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif