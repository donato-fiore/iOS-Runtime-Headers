// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALQUERYREWRITEQRUTTERANCE_H
#define SIRINLUINTERNALQUERYREWRITEQRUTTERANCE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALQUERYREWRITEQRUtterance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (retain, nonatomic) NSMutableArray *asrUtteranceTokens; // ivar: _asrUtteranceTokens
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL hasAsrId;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance
@property (retain, nonatomic) NSMutableArray *utteranceTokens; // ivar: _utteranceTokens


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)asrUtteranceTokensAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)utteranceTokensAtIndex:(NSUInteger)arg0 ;
-(void)addAsrUtteranceTokens:(id)arg0 ;
-(void)addUtteranceTokens:(id)arg0 ;
-(void)clearAsrUtteranceTokens;
-(void)clearUtteranceTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif