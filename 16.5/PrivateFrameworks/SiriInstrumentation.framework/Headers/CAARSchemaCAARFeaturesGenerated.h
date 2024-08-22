// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARFEATURESGENERATED_H
#define CAARSCHEMACAARFEATURESGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionFeatureSets; // ivar: _actionFeatureSets
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionFeatureSetsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addActionFeatureSets:(id)arg0 ;
-(void)clearActionFeatureSets;
-(void)deleteActionFeatureSets;
-(void)writeTo:(id)arg0 ;


@end


#endif