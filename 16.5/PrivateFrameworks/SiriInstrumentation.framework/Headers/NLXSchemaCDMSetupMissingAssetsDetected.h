// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMSETUPMISSINGASSETSDETECTED_H
#define NLXSCHEMACDMSETUPMISSINGASSETSDETECTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMSetupMissingAssetsDetected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *servicesMissingAssets; // ivar: _servicesMissingAssets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)servicesMissingAssetCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)servicesMissingAssetAtIndex:(NSUInteger)arg0 ;
-(void)addServicesMissingAsset:(int)arg0 ;
-(void)clearServicesMissingAsset;
-(void)deleteContextId;
-(void)deleteServicesMissingAsset;
-(void)writeTo:(id)arg0 ;


@end


#endif