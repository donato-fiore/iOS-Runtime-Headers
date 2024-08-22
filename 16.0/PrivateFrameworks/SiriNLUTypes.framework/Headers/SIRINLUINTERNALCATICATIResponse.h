// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALCATICATIRESPONSE_H
#define SIRINLUINTERNALCATICATIRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALCATICATIResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *hypotheses; // ivar: _hypotheses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hypothesesAtIndex:(NSUInteger)arg0 ;
-(void)addHypotheses:(id)arg0 ;
-(void)clearHypotheses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif