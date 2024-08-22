// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMTSCHEMASMTAPPLANGUAGEMODELASSETCOPYSTARTED_H
#define SMTSCHEMASMTAPPLANGUAGEMODELASSETCOPYSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SMTSchemaSMTAppLanguageModelAssetCopyStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *appAssetPath; // ivar: _appAssetPath
@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) BOOL hasAppAssetPath; // ivar: _hasAppAssetPath
@property (nonatomic) BOOL hasAppBundleId; // ivar: _hasAppBundleId
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
-(void)deleteAppAssetPath;
-(void)deleteAppBundleId;
-(void)deleteLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif