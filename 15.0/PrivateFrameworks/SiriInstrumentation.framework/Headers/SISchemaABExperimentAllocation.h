// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAABEXPERIMENTALLOCATION_H
#define SISCHEMAABEXPERIMENTALLOCATION_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaABExperimentAllocation : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSInteger deploymentId; // ivar: _deploymentId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasTreatmentId; // ivar: _hasTreatmentId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif