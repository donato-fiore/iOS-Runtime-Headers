// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALQUERYREWRITEQRRESPONSE_H
#define SIRINLUINTERNALQUERYREWRITEQRRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALQUERYREWRITEQRResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRepetitionType;
@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSMutableArray *qrHypotheses; // ivar: _qrHypotheses
@property (nonatomic) int repetitionType; // ivar: _repetitionType
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId
@property (retain, nonatomic) NSMutableArray *rewriteHypotheses; // ivar: _rewriteHypotheses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)qrHypothesesAtIndex:(NSUInteger)arg0 ;
-(id)repetitionTypeAsString:(int)arg0 ;
-(id)rewriteHypothesesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRepetitionType:(id)arg0 ;
-(void)addQrHypotheses:(id)arg0 ;
-(void)addRewriteHypotheses:(id)arg0 ;
-(void)clearQrHypotheses;
-(void)clearRewriteHypotheses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif