// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMCONTEXTUPDATEENDED_H
#define NLXSCHEMACDMCONTEXTUPDATEENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMContextUpdateEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *reformedTurnInputBundles; // ivar: _reformedTurnInputBundles


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)reformedTurnInputBundlesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addReformedTurnInputBundles:(id)arg0 ;
-(void)clearReformedTurnInputBundles;
-(void)deleteContextId;
-(void)deleteReformedTurnInputBundles;
-(void)writeTo:(id)arg0 ;


@end


#endif