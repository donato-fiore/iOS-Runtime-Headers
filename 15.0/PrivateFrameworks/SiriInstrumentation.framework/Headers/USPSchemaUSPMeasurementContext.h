// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USPSCHEMAUSPMEASUREMENTCONTEXT_H
#define USPSCHEMAUSPMEASUREMENTCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface USPSchemaUSPMeasurementContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *contextName; // ivar: _contextName
@property (nonatomic) int environment; // ivar: _environment
@property (nonatomic) BOOL hasContextName; // ivar: _hasContextName
@property (nonatomic) BOOL hasEnvironment;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif