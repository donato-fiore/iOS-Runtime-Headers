// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGSIRIHELPSIGNAL_H
#define SUGSCHEMASUGSIRIHELPSIGNAL_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SUGSchemaSUGSiriHelpSignal : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int depthFromActiveSignal; // ivar: _depthFromActiveSignal
@property (nonatomic) BOOL hasDepthFromActiveSignal;
@property (nonatomic) BOOL hasSignalType;
@property (nonatomic) BOOL hasSignalValue; // ivar: _hasSignalValue
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int signalType; // ivar: _signalType
@property (copy, nonatomic) NSString *signalValue; // ivar: _signalValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDepthFromActiveSignal;
-(void)deleteSignalType;
-(void)deleteSignalValue;
-(void)writeTo:(id)arg0 ;


@end


#endif