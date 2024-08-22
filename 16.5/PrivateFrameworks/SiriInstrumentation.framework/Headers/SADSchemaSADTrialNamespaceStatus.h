// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADSCHEMASADTRIALNAMESPACESTATUS_H
#define SADSCHEMASADTRIALNAMESPACESTATUS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVersion.h"
#import "SADSchemaSADTrialRollout.h"

@interface SADSchemaSADTrialNamespaceStatus : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *assets; // ivar: _assets
@property (nonatomic) BOOL hasNamespaceCompatabilityVersion; // ivar: _hasNamespaceCompatabilityVersion
@property (nonatomic) BOOL hasRollout; // ivar: _hasRollout
@property (nonatomic) BOOL hasTrialNamespace;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaVersion *namespaceCompatabilityVersion; // ivar: _namespaceCompatabilityVersion
@property (retain, nonatomic) SADSchemaSADTrialRollout *rollout; // ivar: _rollout
@property (nonatomic) int trialNamespace; // ivar: _trialNamespace


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)assetsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAssets:(id)arg0 ;
-(void)clearAssets;
-(void)deleteAssets;
-(void)deleteNamespaceCompatabilityVersion;
-(void)deleteRollout;
-(void)deleteTrialNamespace;
-(void)writeTo:(id)arg0 ;


@end


#endif