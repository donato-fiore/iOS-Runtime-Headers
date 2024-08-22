// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVINTENTREFORMATIONENDED_H
#define CNVSCHEMACNVINTENTREFORMATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"

@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasReformedIntent; // ivar: _hasReformedIntent
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraph *reformedIntent; // ivar: _reformedIntent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReformedIntent;
-(void)writeTo:(id)arg0 ;


@end


#endif