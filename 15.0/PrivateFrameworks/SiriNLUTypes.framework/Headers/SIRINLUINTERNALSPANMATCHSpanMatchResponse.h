// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALSPANMATCHSPANMATCHRESPONSE_H
#define SIRINLUINTERNALSPANMATCHSPANMATCHRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALSPANMATCHSpanMatchResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *matchingSpans; // ivar: _matchingSpans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)matchingSpansAtIndex:(NSUInteger)arg0 ;
-(void)addMatchingSpans:(id)arg0 ;
-(void)clearMatchingSpans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif