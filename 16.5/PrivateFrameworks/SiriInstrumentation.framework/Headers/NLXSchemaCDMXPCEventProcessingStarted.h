// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMXPCEVENTPROCESSINGSTARTED_H
#define NLXSCHEMACDMXPCEVENTPROCESSINGSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMXPCEventProcessingStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasProcessingType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int processingType; // ivar: _processingType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteProcessingType;
-(void)writeTo:(id)arg0 ;


@end


#endif