// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALNLV4_PARSERNLV4PARSERRESPONSE_H
#define SIRINLUINTERNALNLV4_PARSERNLV4PARSERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserResponse : PBCodable <NSCopying>



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