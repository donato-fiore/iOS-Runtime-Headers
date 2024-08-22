// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALUAAP_PARSERUAAPPARSERRESPONSE_H
#define SIRINLUINTERNALUAAP_PARSERUAAPPARSERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALUAAP_PARSERUaaPParserResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSMutableArray *hypotheses; // ivar: _hypotheses
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId


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