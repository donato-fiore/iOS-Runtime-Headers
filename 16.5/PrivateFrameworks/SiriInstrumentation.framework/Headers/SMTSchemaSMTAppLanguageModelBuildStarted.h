// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMTSCHEMASMTAPPLANGUAGEMODELBUILDSTARTED_H
#define SMTSCHEMASMTAPPLANGUAGEMODELBUILDSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SMTSchemaSMTAppLanguageModelBuildStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) NSUInteger artifactSizeInBytes; // ivar: _artifactSizeInBytes
@property (nonatomic) BOOL hasAppBundleId; // ivar: _hasAppBundleId
@property (nonatomic) BOOL hasArtifactSizeInBytes;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int locale; // ivar: _locale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppBundleId;
-(void)deleteArtifactSizeInBytes;
-(void)deleteLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif