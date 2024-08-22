// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSINFERENCEPLUGINCOMPLETED_H
#define PLUSSCHEMAPLUSINFERENCEPLUGINCOMPLETED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSInferencePluginCompleted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumberOfContactSuggestionsGenerated;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsRemoved;
@property (nonatomic) BOOL hasNumberOfContactSuggestionsUpdated;
@property (nonatomic) BOOL hasNumberOfConversationsReviewed;
@property (nonatomic) BOOL hasNumberOfGroundTruthsGenerated;
@property (nonatomic) BOOL hasNumberOfTurnsReviewed;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numberOfContactSuggestionsGenerated; // ivar: _numberOfContactSuggestionsGenerated
@property (nonatomic) unsigned int numberOfContactSuggestionsRemoved; // ivar: _numberOfContactSuggestionsRemoved
@property (nonatomic) unsigned int numberOfContactSuggestionsUpdated; // ivar: _numberOfContactSuggestionsUpdated
@property (nonatomic) unsigned int numberOfConversationsReviewed; // ivar: _numberOfConversationsReviewed
@property (nonatomic) unsigned int numberOfGroundTruthsGenerated; // ivar: _numberOfGroundTruthsGenerated
@property (nonatomic) unsigned int numberOfTurnsReviewed; // ivar: _numberOfTurnsReviewed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteNumberOfContactSuggestionsGenerated;
-(void)deleteNumberOfContactSuggestionsRemoved;
-(void)deleteNumberOfContactSuggestionsUpdated;
-(void)deleteNumberOfConversationsReviewed;
-(void)deleteNumberOfGroundTruthsGenerated;
-(void)deleteNumberOfTurnsReviewed;
-(void)writeTo:(id)arg0 ;


@end


#endif