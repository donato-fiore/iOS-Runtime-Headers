// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGCONTACTDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals *contactDependentMessageSignals; // ivar: _contactDependentMessageSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals *contactDependentPhoneCallSignals; // ivar: _contactDependentPhoneCallSignals
@property (nonatomic) BOOL hasContactDependentMessageSignals; // ivar: _hasContactDependentMessageSignals
@property (nonatomic) BOOL hasContactDependentPhoneCallSignals; // ivar: _hasContactDependentPhoneCallSignals
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContactDependentMessageSignals;
-(void)deleteContactDependentPhoneCallSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif