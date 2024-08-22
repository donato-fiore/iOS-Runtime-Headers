// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PEGASUSSCHEMAPEGASUSINTENTTIER1_H
#define PEGASUSSCHEMAPEGASUSINTENTTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSIntentTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (copy, nonatomic) NSArray *intentArgs; // ivar: _intentArgs
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)intentArgsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addIntentArgs:(id)arg0 ;
-(void)clearIntentArgs;
-(void)deleteIntentArgs;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif