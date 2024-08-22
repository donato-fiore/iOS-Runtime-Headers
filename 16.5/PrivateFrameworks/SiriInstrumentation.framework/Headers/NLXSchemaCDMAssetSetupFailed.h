// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMASSETSETUPFAILED_H
#define NLXSCHEMACDMASSETSETUPFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMAssetSetupFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (nonatomic) int errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif