// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETSCHEMANETPROXYCONFIGURATION_H
#define NETSCHEMANETPROXYCONFIGURATION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETProxyConfiguration : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsProxyConfigured;
@property (nonatomic) BOOL hasUsingConfiguredProxy;
@property (nonatomic) BOOL isProxyConfigured; // ivar: _isProxyConfigured
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL usingConfiguredProxy; // ivar: _usingConfiguredProxy


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsProxyConfigured;
-(void)deleteUsingConfiguredProxy;
-(void)writeTo:(id)arg0 ;


@end


#endif