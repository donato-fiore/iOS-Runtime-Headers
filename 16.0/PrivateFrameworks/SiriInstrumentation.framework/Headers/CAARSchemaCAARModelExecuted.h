// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAARSCHEMACAARMODELEXECUTED_H
#define CAARSCHEMACAARMODELEXECUTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAsset.h"
#import "CAARSchemaCAARModelOutput.h"

@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaAsset *asset; // ivar: _asset
@property (nonatomic) BOOL hasAsset; // ivar: _hasAsset
@property (nonatomic) BOOL hasIsShadowLog;
@property (nonatomic) BOOL hasModelOutput; // ivar: _hasModelOutput
@property (nonatomic) BOOL isShadowLog; // ivar: _isShadowLog
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAARSchemaCAARModelOutput *modelOutput; // ivar: _modelOutput


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsset;
-(void)deleteIsShadowLog;
-(void)deleteModelOutput;
-(void)writeTo:(id)arg0 ;


@end


#endif