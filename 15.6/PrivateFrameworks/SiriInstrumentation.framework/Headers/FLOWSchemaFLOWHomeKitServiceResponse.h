// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWHOMEKITSERVICERESPONSE_H
#define FLOWSCHEMAFLOWHOMEKITSERVICERESPONSE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWHomeKitServiceResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHomeKitServiceType;
@property (nonatomic) BOOL hasNumServicesCompleted;
@property (nonatomic) BOOL hasNumServicesFailed;
@property (nonatomic) int homeKitServiceType; // ivar: _homeKitServiceType
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numServicesCompleted; // ivar: _numServicesCompleted
@property (nonatomic) int numServicesFailed; // ivar: _numServicesFailed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHomeKitServiceType;
-(void)deleteNumServicesCompleted;
-(void)deleteNumServicesFailed;
-(void)writeTo:(id)arg0 ;


@end


#endif