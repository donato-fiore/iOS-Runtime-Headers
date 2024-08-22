// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWPEGASUSCONTEXTTIER1_H
#define FLOWSCHEMAFLOWPEGASUSCONTEXTTIER1_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PEGASUSSchemaPEGASUSIntentTier1.h"
#import "FLOWSchemaFLOWKGQAExecutionTier1.h"
#import "SISchemaUUID.h"
#import "FLOWSchemaFLOWMapsExecutionTier1.h"
#import "FLOWSchemaFLOWSportsExecutionTier1.h"
#import "FLOWSchemaFLOWWebAnswerExecutionTier1.h"

@interface FLOWSchemaFLOWPegasusContextTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasIntentTier1; // ivar: _hasIntentTier1
@property (nonatomic) BOOL hasKgQAExecutionTier1; // ivar: _hasKgQAExecutionTier1
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasMapsExecutionTier1; // ivar: _hasMapsExecutionTier1
@property (nonatomic) BOOL hasSportsExecutionTier1; // ivar: _hasSportsExecutionTier1
@property (nonatomic) BOOL hasWebAnswerExecutionTier1; // ivar: _hasWebAnswerExecutionTier1
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntentTier1 *intentTier1; // ivar: _intentTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecutionTier1 *kgQAExecutionTier1; // ivar: _kgQAExecutionTier1
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (retain, nonatomic) FLOWSchemaFLOWMapsExecutionTier1 *mapsExecutionTier1; // ivar: _mapsExecutionTier1
@property (retain, nonatomic) FLOWSchemaFLOWSportsExecutionTier1 *sportsExecutionTier1; // ivar: _sportsExecutionTier1
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecutionTier1 *webAnswerExecutionTier1; // ivar: _webAnswerExecutionTier1


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIntentTier1;
-(void)deleteKgQAExecutionTier1;
-(void)deleteLinkId;
-(void)deleteMapsExecutionTier1;
-(void)deleteSportsExecutionTier1;
-(void)deleteWebAnswerExecutionTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif