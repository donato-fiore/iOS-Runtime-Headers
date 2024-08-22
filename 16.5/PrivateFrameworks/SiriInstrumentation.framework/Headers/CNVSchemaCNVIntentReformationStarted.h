// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVSCHEMACNVINTENTREFORMATIONSTARTED_H
#define CNVSCHEMACNVINTENTREFORMATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasTargetPlugin;
@property (nonatomic) BOOL hasTransformer;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int targetPlugin; // ivar: _targetPlugin
@property (nonatomic) int transformer; // ivar: _transformer


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteTargetPlugin;
-(void)deleteTransformer;
-(void)writeTo:(id)arg0 ;


@end


#endif