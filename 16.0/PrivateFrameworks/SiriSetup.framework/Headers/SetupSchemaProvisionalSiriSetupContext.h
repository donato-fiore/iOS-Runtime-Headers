// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETUPSCHEMAPROVISIONALSIRISETUPCONTEXT_H
#define SETUPSCHEMAPROVISIONALSIRISETUPCONTEXT_H

@class SISchemaInstrumentationMessage, NSData;


#import "SetupSchemaProvisionalSiriSetupEnded.h"
#import "SetupSchemaProvisionalSiriSetupStarted.h"
#import "SetupSchemaProvisionalSiriSetupStep.h"

@interface SetupSchemaProvisionalSiriSetupContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupEnded *ended; // ivar: _ended
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasStarted; // ivar: _hasStarted
@property (nonatomic) BOOL hasStep; // ivar: _hasStep
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStarted *started; // ivar: _started
@property (retain, nonatomic) SetupSchemaProvisionalSiriSetupStep *step; // ivar: _step
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteEnded;
-(void)deleteStarted;
-(void)deleteStep;
-(void)writeTo:(id)arg0 ;


@end


#endif