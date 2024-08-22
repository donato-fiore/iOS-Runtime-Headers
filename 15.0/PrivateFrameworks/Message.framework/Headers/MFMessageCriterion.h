// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGECRITERION_H
#define MFMESSAGECRITERION_H

@class NSString, NSArray, EFMutableInt64Set;
@protocol EDSearchableCriterion, NSCopying;

#import <Foundation/Foundation.h>


@interface MFMessageCriterion : NSObject <EDSearchableCriterion, NSCopying>

 {
    NSString *_criterionIdentifier;
    NSInteger _type;
    NSString *_uniqueId;
    NSString *_expression;
    NSArray *_criteria;
    int _dateUnitType;
    BOOL _allCriteriaMustBeSatisfied;
    BOOL _dateIsRelative;
    NSArray *_requiredHeaders;
}


@property (copy, nonatomic) NSArray *criteria;
@property (retain, nonatomic) NSString *criterionIdentifier;
@property (nonatomic) NSInteger criterionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *expression;
@property (nonatomic) BOOL expressionIsSanitized; // ivar: _expressionIsSanitized
@property (copy, nonatomic) NSArray *expressionLanguages; // ivar: _expressionLanguages
@property (readonly, nonatomic, getter=isFullTextSearchableCriterion) BOOL fullTextSearchableCriterion;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeRelatedMessages; // ivar: _includeRelatedMessages
@property (nonatomic) BOOL includeRemoteBodyContent; // ivar: _includeRemoteBodyContent
@property (retain, nonatomic) EFMutableInt64Set *libraryIdentifiers; // ivar: _libraryIdentifiers
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL preferFullTextSearch; // ivar: _preferFullTextSearch
@property (nonatomic) int qualifier; // ivar: _qualifier
@property (readonly, nonatomic) NSString *spotlightQueryString;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFlaggedForUnreadCount; // ivar: _useFlaggedForUnreadCount


+(NSInteger)criterionTypeForString:(id)arg0 ;
+(id)VIPSenderMessageCriterion;
+(id)_criterionForDateReceivedBetween:(id)arg0 endDate:(id)arg1 ;
+(id)_criterionForDateReceivedBetweenDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
+(id)_todayDateComponents;
+(id)andCompoundCriterionWithCriteria:(id)arg0 ;
+(id)ccMeCriterion;
+(id)criteriaFromDefaultsArray:(id)arg0 ;
+(id)criteriaFromDefaultsArray:(id)arg0 removingRecognizedKeys:(BOOL)arg1 ;
+(id)criterionExcludingMailboxes:(id)arg0 ;
+(id)criterionForAccount:(id)arg0 ;
+(id)criterionForConversationID:(NSInteger)arg0 ;
+(id)criterionForDateReceivedNewerThanDate:(id)arg0 ;
+(id)criterionForDateReceivedOlderThanDate:(id)arg0 ;
+(id)criterionForDocumentID:(id)arg0 ;
+(id)criterionForFlagColor:(NSUInteger)arg0 ;
+(id)criterionForLibraryID:(id)arg0 ;
+(id)criterionForMailbox:(id)arg0 ;
+(id)criterionForMailboxPredictionMessageQuery:(NSUInteger)arg0 variable:(id)arg1 ;
+(id)criterionForMailboxURL:(id)arg0 ;
+(id)criterionForNotDeletedConversationID:(NSInteger)arg0 ;
+(id)criterionFromDefaultsDictionary:(id)arg0 ;
+(id)defaultsArrayFromCriteria:(id)arg0 ;
+(id)defaultsDictionaryFromCriterion:(id)arg0 ;
+(id)expressionForDate:(id)arg0 ;
+(id)flaggedMessageCriterion;
+(id)hasAttachmentsCriterion;
+(id)includesMeCriterion;
+(id)lastWeekMessageCriterion;
+(id)matchEverythingCriterion;
+(id)matchNothingCriterion;
+(id)messageIsDeletedCriterion:(BOOL)arg0 ;
+(id)messageIsJournaledCriterion:(BOOL)arg0 ;
+(id)messageIsServerSearchResultCriterion:(BOOL)arg0 ;
+(id)notCriterionWithCriterion:(id)arg0 ;
+(id)orCompoundCriterionWithCriteria:(id)arg0 ;
+(id)readMessageCriterion;
+(id)stringForCriterionType:(NSInteger)arg0 ;
+(id)threadMuteMessageCriterion;
+(id)threadNotifyMessageCriterion;
+(id)toMeCriterion;
+(id)todayMessageCriterion;
+(id)unreadMessageCriterion;
+(id)yesterdayMessageCriterion;
-(BOOL)_evaluateAccountCriterion:(id)arg0 ;
-(BOOL)_evaluateAddressBookCriterion:(id)arg0 ;
-(BOOL)_evaluateAddressHistoryCriterion:(id)arg0 ;
-(BOOL)_evaluateAttachmentCriterion:(id)arg0 ;
-(BOOL)_evaluateCompoundCriterion:(id)arg0 ;
-(BOOL)_evaluateConversationIDCriterion:(id)arg0 ;
-(BOOL)_evaluateDateCriterion:(id)arg0 ;
-(BOOL)_evaluateFlagCriterion:(id)arg0 ;
-(BOOL)_evaluateFullNameCriterion:(id)arg0 ;
-(BOOL)_evaluateHeaderCriterion:(id)arg0 ;
-(BOOL)_evaluateIsDigitallySignedCriterion:(id)arg0 ;
-(BOOL)_evaluateIsEncryptedCriterion:(id)arg0 ;
-(BOOL)_evaluateMailboxCriterion:(id)arg0 ;
-(BOOL)_evaluatePartOfStructure:(id)arg0 ;
-(BOOL)_evaluatePriorityIsHighCriterion:(id)arg0 ;
-(BOOL)_evaluatePriorityIsLowCriterion:(id)arg0 ;
-(BOOL)_evaluatePriorityIsNormalCriterion:(id)arg0 ;
-(BOOL)_evaluateSenderHeaderCriterion:(id)arg0 ;
-(BOOL)allCriteriaMustBeSatisfied;
-(BOOL)dateIsRelative;
-(BOOL)doesMessageSatisfyCriterion:(id)arg0 ;
-(BOOL)hasLibraryIDCriterion;
-(BOOL)hasNonFullTextSearchableCriterion;
-(BOOL)includesCriterionSatisfyingPredicate:(*unk)arg0 restrictive:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVIPCriterion;
-(id)SQLExpressionWithContext:(id)arg0 depth:(unsigned int)arg1 ;
-(id)SQLExpressionWithTables:(*unsigned int)arg0 baseTable:(unsigned int)arg1 protectedDataAvailable:(BOOL)arg2 searchableIndex:(id)arg3 mailboxIDs:(id)arg4 propertyMapper:(id)arg5 ;
-(id)_SQLExpressionForMailboxCriterion;
-(id)_attributesForHeaderCriterion;
-(id)_collapsedMessageNumberCriterion:(id)arg0 allMustBeSatisfied:(BOOL)arg1 collapsedIndexes:(*id)arg2 ;
-(id)_comparisonOperationMatchingValue:(id)arg0 qualifier:(int)arg1 ;
-(id)_criterionForSQL;
-(id)_evaluateFTSCriterionWithIndex:(id)arg0 mailboxIDs:(id)arg1 ;
-(id)_headersRequiredForEvaluation;
-(id)_queryWithAttributes:(id)arg0 matchingValue:(id)arg1 ;
-(id)_queryWithAttributes:(id)arg0 matchingValue:(id)arg1 qualifier:(int)arg2 ;
-(id)_resolveWithIndex:(id)arg0 mailboxIDs:(id)arg1 ;
-(id)_spotlightQueryStringIsAllSpotlightQuery:(*BOOL)arg0 ;
-(id)_wordQueryWithAttributes:(id)arg0 languages:(id)arg1 expression:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)criteriaForSpotlightCriteria:(id)arg0 ;
-(id)criteriaSatisfyingPredicate:(*unk)arg0 ;
-(id)criterionByApplyingTransform:(id)arg0 ;
-(id)criterionForSQL;
-(id)daBasicSearchString;
-(id)daSearchPredicate;
-(id)dateFromExpression;
-(id)descriptionWithDepth:(unsigned int)arg0 ;
-(id)dictionaryRepresentation;
-(id)extractedDateCriterion;
-(id)extractedUnreadCriterion;
-(id)fixOnce;
-(id)init;
-(id)initWithCriterion:(id)arg0 expression:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 andRemoveRecognizedKeysIfMutable:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 qualifier:(int)arg1 expression:(id)arg2 ;
-(id)simplifiedCriterion;
-(id)simplifyOnce;
-(id)stringForMessageRuleQualifier:(int)arg0 ;
-(id)unreadCountCriterion;
-(int)dateUnits;
-(int)messageRuleQualifierForString:(id)arg0 ;
-(unsigned int)bestBaseTable;
-(void)_addCriteriaSatisfyingPredicate:(*unk)arg0 toCollector:(id)arg1 ;
-(void)setAllCriteriaMustBeSatisfied:(BOOL)arg0 ;
-(void)setDateIsRelative:(BOOL)arg0 ;
-(void)setDateUnits:(int)arg0 ;


@end


#endif