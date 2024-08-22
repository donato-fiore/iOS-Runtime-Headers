// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMSINGLESERVICESETUPATTEMPTFAILED_H
#define NLXSCHEMACDMSINGLESERVICESETUPATTEMPTFAILED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMSingleServiceSetupAttemptFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRetryNumber;
@property (nonatomic) BOOL hasServiceType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) unsigned int retryNumber; // ivar: _retryNumber
@property (nonatomic) int serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReason;
-(void)deleteRetryNumber;
-(void)deleteServiceType;
-(void)writeTo:(id)arg0 ;


@end


#endif