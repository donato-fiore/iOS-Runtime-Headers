// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADSCHEMASADTRIALROLLOUT_H
#define SADSCHEMASADTRIALROLLOUT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SADSchemaSADTrialRollout : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int deployment; // ivar: _deployment
@property (copy, nonatomic) NSString *factorPack; // ivar: _factorPack
@property (nonatomic) BOOL hasDeployment;
@property (nonatomic) BOOL hasFactorPack; // ivar: _hasFactorPack
@property (nonatomic) BOOL hasRolloutId; // ivar: _hasRolloutId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *rolloutId; // ivar: _rolloutId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeployment;
-(void)deleteFactorPack;
-(void)deleteRolloutId;
-(void)writeTo:(id)arg0 ;


@end


#endif