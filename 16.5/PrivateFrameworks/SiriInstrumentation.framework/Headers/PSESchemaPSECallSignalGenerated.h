// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSECALLSIGNALGENERATED_H
#define PSESCHEMAPSECALLSIGNALGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PSESchemaPSECall.h"
#import "PSESchemaPSECommonSignal.h"

@interface PSESchemaPSECallSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECall *callSignal; // ivar: _callSignal
@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal; // ivar: _commonSignal
@property (nonatomic) BOOL hasCallSignal; // ivar: _hasCallSignal
@property (nonatomic) BOOL hasCommonSignal; // ivar: _hasCommonSignal
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCallSignal;
-(void)deleteCommonSignal;
-(void)writeTo:(id)arg0 ;


@end


#endif