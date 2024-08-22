// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGREMINDERMESSAGE_H
#define SGREMINDERMESSAGE_H

@class NSArray;


#import "SGExtractionDocument.h"
#import "SGPipelineEntity.h"
#import "SGDuplicateKey.h"
#import "SGMessage.h"

@interface SGReminderMessage : SGExtractionDocument

@property (retain, nonatomic) SGPipelineEntity *entity; // ivar: _entity
@property (retain, nonatomic) SGDuplicateKey *extractedReminderDuplicateKey; // ivar: _extractedReminderDuplicateKey
@property (retain, nonatomic) SGMessage *message; // ivar: _message
@property (retain, nonatomic) NSArray *plainTextDetectedData; // ivar: _plainTextDetectedData


+(BOOL)enrichedTaggedCharacterRangesContainsProfanity:(id)arg0 ;
+(BOOL)excludedContent:(id)arg0 ;
+(BOOL)isConfirmationOptionalForContent:(id)arg0 ;
+(BOOL)shouldAddTitlePrefixForContent:(id)arg0 ;
+(BOOL)tokensMatchedInContent:(id)arg0 content:(id)arg1 ;
+(BOOL)validActionVerbIndexRange:(struct _NSRange )arg0 enrichedTaggedCharacterRanges:(id)arg1 ;
+(BOOL)validModelOutput:(id)arg0 error:(*id)arg1 ;
+(BOOL)validObjectCoreIndexRange:(struct _NSRange )arg0 enrichedTaggedCharacterRanges:(id)arg1 ;
+(id)confirmationOptionalTokens;
+(id)detectedTitleInModelOutput:(id)arg0 enrichedTaggedCharacterRanges:(id)arg1 textContent:(id)arg2 language:(id)arg3 ;
+(id)excludeList;
+(id)frenchPrependForEnrichedTaggedCharacterRanges:(id)arg0 actionVerbIndexRange:(struct _NSRange )arg1 ;
+(id)posTaggerNouns;
+(id)regexFromJoinedArray:(id)arg0 wordBoundary:(id)arg1 ;
+(id)searchTokensForReminderTitle:(id)arg0 ;
+(id)titlePrefixTokens;
+(id)titlePrependForActionVerbIndexRange:(struct _NSRange )arg0 enrichedTaggedCharacterRanges:(id)arg1 language:(id)arg2 content:(id)arg3 ;
+(id)triggerOptionalTokens;
-(BOOL)hasTrigger;
-(BOOL)isConfirmation;
-(BOOL)isProposal;
-(BOOL)isRejection;
-(BOOL)isTriggerOptional;
-(id)_labelTokenIndexesForOutputName:(id)arg0 label:(id)arg1 ;
-(id)detectedDueDateComponents;
-(id)detectedTitleForLanguage:(id)arg0 ;
-(id)dueDateDataDetectorMatches;
-(id)dueLocation;
-(id)initWithMessage:(id)arg0 entity:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 modelOutput:(id)arg3 ;
-(id)initWithMessage:(id)arg0 plainTextDetectedData:(id)arg1 enrichedTaggedCharacterRanges:(id)arg2 modelOutput:(id)arg3 ;


@end


#endif