// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTIONUSAGESUMMARY_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTIONUSAGESUMMARY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSContactSuggestionUsageSummary : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int abandonmentCount; // ivar: _abandonmentCount
@property (nonatomic) unsigned int activationCount; // ivar: _activationCount
@property (nonatomic) NSUInteger averageTimeBetweenActivationsInMs; // ivar: _averageTimeBetweenActivationsInMs
@property (nonatomic) unsigned int confirmationSelectedCount; // ivar: _confirmationSelectedCount
@property (nonatomic) unsigned int disambiguationSelectedCount; // ivar: _disambiguationSelectedCount
@property (nonatomic) int domain; // ivar: _domain
@property (nonatomic) BOOL hasAbandonmentCount;
@property (nonatomic) BOOL hasActivationCount;
@property (nonatomic) BOOL hasAverageTimeBetweenActivationsInMs;
@property (nonatomic) BOOL hasConfirmationSelectedCount;
@property (nonatomic) BOOL hasDisambiguationSelectedCount;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasPresentationCount;
@property (nonatomic) BOOL hasSuggestionGenerationTimeSince1970InMs;
@property (nonatomic) BOOL hasTimeUntilFirstActivationInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int presentationCount; // ivar: _presentationCount
@property (nonatomic) NSUInteger suggestionGenerationTimeSince1970InMs; // ivar: _suggestionGenerationTimeSince1970InMs
@property (nonatomic) NSUInteger timeUntilFirstActivationInMs; // ivar: _timeUntilFirstActivationInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAbandonmentCount;
-(void)deleteActivationCount;
-(void)deleteAverageTimeBetweenActivationsInMs;
-(void)deleteConfirmationSelectedCount;
-(void)deleteDisambiguationSelectedCount;
-(void)deleteDomain;
-(void)deletePresentationCount;
-(void)deleteSuggestionGenerationTimeSince1970InMs;
-(void)deleteTimeUntilFirstActivationInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif