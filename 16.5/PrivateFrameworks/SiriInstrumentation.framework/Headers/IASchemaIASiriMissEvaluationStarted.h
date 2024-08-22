// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IASCHEMAIASIRIMISSEVALUATIONSTARTED_H
#define IASCHEMAIASIRIMISSEVALUATIONSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface IASchemaIASiriMissEvaluationStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (nonatomic) BOOL hasAssetVersion; // ivar: _hasAssetVersion
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAssetVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif