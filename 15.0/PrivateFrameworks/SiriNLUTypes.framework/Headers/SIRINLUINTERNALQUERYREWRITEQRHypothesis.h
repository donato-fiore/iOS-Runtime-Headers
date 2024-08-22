// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALQUERYREWRITEQRHYPOTHESIS_H
#define SIRINLUINTERNALQUERYREWRITEQRHYPOTHESIS_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALQUERYREWRITEQRHypothesis : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALUUID *asrId; // ivar: _asrId
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) BOOL hasAsrId;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasRewriteType;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (nonatomic) int rewriteType; // ivar: _rewriteType
@property (retain, nonatomic) NSString *utterance; // ivar: _utterance


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rewriteTypeAsString:(int)arg0 ;
-(int)StringAsRewriteType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif