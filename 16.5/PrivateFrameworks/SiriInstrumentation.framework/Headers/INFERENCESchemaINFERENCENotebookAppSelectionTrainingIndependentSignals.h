// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCENOTEBOOKAPPSELECTIONTRAININGINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCENOTEBOOKAPPSELECTIONTRAININGINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommonAppIndependentSignals.h"

@interface INFERENCESchemaINFERENCENotebookAppSelectionTrainingIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppIndependentSignals *commonIndependent; // ivar: _commonIndependent
@property (nonatomic) BOOL hasCommonIndependent; // ivar: _hasCommonIndependent
@property (nonatomic) BOOL hasIsNotebookGroupPresent;
@property (nonatomic) BOOL hasIsNotebookPayloadPresent;
@property (nonatomic) BOOL hasIsNotebookTitlePresent;
@property (nonatomic) BOOL isNotebookGroupPresent; // ivar: _isNotebookGroupPresent
@property (nonatomic) BOOL isNotebookPayloadPresent; // ivar: _isNotebookPayloadPresent
@property (nonatomic) BOOL isNotebookTitlePresent; // ivar: _isNotebookTitlePresent
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommonIndependent;
-(void)deleteIsNotebookGroupPresent;
-(void)deleteIsNotebookPayloadPresent;
-(void)deleteIsNotebookTitlePresent;
-(void)writeTo:(id)arg0 ;


@end


#endif