// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMSINGLESERVICESETUPATTEMPTSTARTED_H
#define NLXSCHEMACDMSINGLESERVICESETUPATTEMPTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMSingleServiceSetupAttemptStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasRetryNumber;
@property (nonatomic) BOOL hasServiceType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int retryNumber; // ivar: _retryNumber
@property (nonatomic) int serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRetryNumber;
-(void)deleteServiceType;
-(void)writeTo:(id)arg0 ;


@end


#endif