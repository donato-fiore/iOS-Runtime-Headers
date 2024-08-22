// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWPROFILESWITCHCONTEXT_H
#define FLOWSCHEMAFLOWPROFILESWITCHCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWProfileSwitchContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasProfileSwitchByNameType;
@property (nonatomic) BOOL hasProfileSwitchDurationInMs;
@property (nonatomic) BOOL hasProfileSwitchFailureReason;
@property (nonatomic) BOOL hasProfileSwitchMethod;
@property (nonatomic) BOOL hasProfileSwitchOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int profileSwitchByNameType; // ivar: _profileSwitchByNameType
@property (nonatomic) unsigned int profileSwitchDurationInMs; // ivar: _profileSwitchDurationInMs
@property (nonatomic) int profileSwitchFailureReason; // ivar: _profileSwitchFailureReason
@property (nonatomic) int profileSwitchMethod; // ivar: _profileSwitchMethod
@property (nonatomic) int profileSwitchOutcome; // ivar: _profileSwitchOutcome


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteProfileSwitchByNameType;
-(void)deleteProfileSwitchDurationInMs;
-(void)deleteProfileSwitchFailureReason;
-(void)deleteProfileSwitchMethod;
-(void)deleteProfileSwitchOutcome;
-(void)writeTo:(id)arg0 ;


@end


#endif