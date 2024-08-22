// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTIONREMOVED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTIONREMOVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSContactSuggestion.h"
#import "PLUSSchemaPLUSContactSuggestionUsageSummary.h"

@interface PLUSSchemaPLUSContactSuggestionRemoved : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRemovedSuggestion; // ivar: _hasRemovedSuggestion
@property (nonatomic) BOOL hasUsageSummary; // ivar: _hasUsageSummary
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestion *removedSuggestion; // ivar: _removedSuggestion
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionUsageSummary *usageSummary; // ivar: _usageSummary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReason;
-(void)deleteRemovedSuggestion;
-(void)deleteUsageSummary;
-(void)writeTo:(id)arg0 ;


@end


#endif