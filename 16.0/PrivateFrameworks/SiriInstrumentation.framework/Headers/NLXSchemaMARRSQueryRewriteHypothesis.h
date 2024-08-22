// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMAMARRSQUERYREWRITEHYPOTHESIS_H
#define NLXSCHEMAMARRSQUERYREWRITEHYPOTHESIS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaMARRSQueryRewriteHypothesis : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasRewriteType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int rewriteType; // ivar: _rewriteType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfidence;
-(void)deleteRewriteType;
-(void)writeTo:(id)arg0 ;


@end


#endif