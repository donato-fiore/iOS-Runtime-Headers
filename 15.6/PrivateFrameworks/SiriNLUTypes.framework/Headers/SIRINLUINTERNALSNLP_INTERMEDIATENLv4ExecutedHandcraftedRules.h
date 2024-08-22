// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALSNLP_INTERMEDIATENLV4EXECUTEDHANDCRAFTEDRULES_H
#define SIRINLUINTERNALSNLP_INTERMEDIATENLV4EXECUTEDHANDCRAFTEDRULES_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules.h"

@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4ExecutedHandcraftedRules : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRules;
@property (retain, nonatomic) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules; // ivar: _rules


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