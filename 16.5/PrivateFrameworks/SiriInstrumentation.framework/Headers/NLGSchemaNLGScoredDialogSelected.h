// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLGSCHEMANLGSCOREDDIALOGSELECTED_H
#define NLGSCHEMANLGSCOREDDIALOGSELECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLGSchemaNLGDialogCandidateStatistics.h"
#import "NLGSchemaNLGDialogScorer.h"
#import "NLGSchemaNLGScoredDialog.h"

@interface NLGSchemaNLGScoredDialogSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLGSchemaNLGDialogCandidateStatistics *dialogCandidateStatistics; // ivar: _dialogCandidateStatistics
@property (retain, nonatomic) NLGSchemaNLGDialogScorer *dialogScorer; // ivar: _dialogScorer
@property (nonatomic) BOOL hasDialogCandidateStatistics; // ivar: _hasDialogCandidateStatistics
@property (nonatomic) BOOL hasDialogScorer; // ivar: _hasDialogScorer
@property (nonatomic) BOOL hasSelectedScoredDialog; // ivar: _hasSelectedScoredDialog
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLGSchemaNLGScoredDialog *selectedScoredDialog; // ivar: _selectedScoredDialog


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDialogCandidateStatistics;
-(void)deleteDialogScorer;
-(void)deleteSelectedScoredDialog;
-(void)writeTo:(id)arg0 ;


@end


#endif