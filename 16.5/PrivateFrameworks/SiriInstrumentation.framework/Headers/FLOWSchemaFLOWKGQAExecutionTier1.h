// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWKGQAEXECUTIONTIER1_H
#define FLOWSCHEMAFLOWKGQAEXECUTIONTIER1_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWKGQAExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId; // ivar: _answerId
@property (nonatomic) BOOL hasAnswerId; // ivar: _hasAnswerId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *primaryEntities; // ivar: _primaryEntities
@property (copy, nonatomic) NSArray *secondaryEntities; // ivar: _secondaryEntities


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)primaryEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)secondaryEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addPrimaryEntities:(id)arg0 ;
-(void)addSecondaryEntities:(id)arg0 ;
-(void)clearPrimaryEntities;
-(void)clearSecondaryEntities;
-(void)deleteAnswerId;
-(void)deletePrimaryEntities;
-(void)deleteSecondaryEntities;
-(void)writeTo:(id)arg0 ;


@end


#endif