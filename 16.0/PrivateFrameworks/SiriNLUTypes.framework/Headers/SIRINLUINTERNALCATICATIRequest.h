// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALCATICATIREQUEST_H
#define SIRINLUINTERNALCATICATIREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "SIRINLUINTERNALNLv4EmbeddingTensor.h"
#import "SIRINLUEXTERNALUUID.h"
#import "SIRINLUEXTERNALTurnInput.h"

@interface SIRINLUINTERNALCATICATIRequest : PBRequest <NSCopying>



@property (retain, nonatomic) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings; // ivar: _embeddings
@property (readonly, nonatomic) BOOL hasEmbeddings;
@property (readonly, nonatomic) BOOL hasNormalisedUtterance;
@property (readonly, nonatomic) BOOL hasOriginalUtterance;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) BOOL hasTurnInput;
@property (retain, nonatomic) NSString *normalisedUtterance; // ivar: _normalisedUtterance
@property (retain, nonatomic) NSString *originalUtterance; // ivar: _originalUtterance
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) SIRINLUEXTERNALTurnInput *turnInput; // ivar: _turnInput


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