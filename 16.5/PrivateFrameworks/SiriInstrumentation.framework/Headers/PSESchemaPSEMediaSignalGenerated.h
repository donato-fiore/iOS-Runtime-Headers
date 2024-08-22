// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSEMEDIASIGNALGENERATED_H
#define PSESCHEMAPSEMEDIASIGNALGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PSESchemaPSECommonSignal.h"
#import "PSESchemaPSEMedia.h"

@interface PSESchemaPSEMediaSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal; // ivar: _commonSignal
@property (nonatomic) BOOL hasCommonSignal; // ivar: _hasCommonSignal
@property (nonatomic) BOOL hasMediaSignal; // ivar: _hasMediaSignal
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PSESchemaPSEMedia *mediaSignal; // ivar: _mediaSignal


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommonSignal;
-(void)deleteMediaSignal;
-(void)writeTo:(id)arg0 ;


@end


#endif