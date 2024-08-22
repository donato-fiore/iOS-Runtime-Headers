// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMTSCHEMASMTCLIENTEVENT_H
#define SMTSCHEMASMTCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SMTSchemaSMTAppLanguageModelAssetCopyContext.h"
#import "SMTSchemaSMTAppLanguageModelBuildContext.h"
#import "SMTSchemaSMTAppLanguageModelProfileRebuildContext.h"
#import "SMTSchemaSMTClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"

@interface SMTSchemaSMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelAssetCopyContext *appLanguageModelAssetCopyContext; // ivar: _appLanguageModelAssetCopyContext
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelBuildContext *appLanguageModelBuildContext; // ivar: _appLanguageModelBuildContext
@property (retain, nonatomic) SMTSchemaSMTAppLanguageModelProfileRebuildContext *appLanguageModelProfileRebuildContext; // ivar: _appLanguageModelProfileRebuildContext
@property (retain, nonatomic) SMTSchemaSMTClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAppLanguageModelAssetCopyContext; // ivar: _hasAppLanguageModelAssetCopyContext
@property (nonatomic) BOOL hasAppLanguageModelBuildContext; // ivar: _hasAppLanguageModelBuildContext
@property (nonatomic) BOOL hasAppLanguageModelProfileRebuildContext; // ivar: _hasAppLanguageModelProfileRebuildContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)clockIsolationLevel;
-(int)getAnyEventType;
-(void)deleteAppLanguageModelAssetCopyContext;
-(void)deleteAppLanguageModelBuildContext;
-(void)deleteAppLanguageModelProfileRebuildContext;
-(void)deleteEventMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif