// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LCSERVICECONFIGURATIONRESPONSE_H
#define LCSERVICECONFIGURATIONRESPONSE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "LCServiceLoggingConfiguration.h"

@interface LCServiceConfigurationResponse : SISchemaInstrumentationMessage

@property (retain, nonatomic) LCServiceLoggingConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL hasConfiguration; // ivar: _hasConfiguration
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichResponse; // ivar: _whichResponse


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfiguration;
-(void)writeTo:(id)arg0 ;


@end


#endif