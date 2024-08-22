// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCETIER1_H
#define PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCETIER1_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface PEGASUSSchemaPEGASUSRewrittenUtteranceTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRewrittenUtterance; // ivar: _hasRewrittenUtterance
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *rewrittenUtterance; // ivar: _rewrittenUtterance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRewrittenUtterance;
-(void)writeTo:(id)arg0 ;


@end


#endif