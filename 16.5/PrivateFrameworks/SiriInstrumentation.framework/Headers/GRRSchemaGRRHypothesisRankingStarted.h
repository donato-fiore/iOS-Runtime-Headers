// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRRSCHEMAGRRHYPOTHESISRANKINGSTARTED_H
#define GRRSCHEMAGRRHYPOTHESISRANKINGSTARTED_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (copy, nonatomic) NSArray *featureFlags; // ivar: _featureFlags
@property (nonatomic) BOOL hasAssetVersion; // ivar: _hasAssetVersion
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)featureFlagsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addFeatureFlags:(id)arg0 ;
-(void)clearFeatureFlags;
-(void)deleteAssetVersion;
-(void)deleteFeatureFlags;
-(void)writeTo:(id)arg0 ;


@end


#endif