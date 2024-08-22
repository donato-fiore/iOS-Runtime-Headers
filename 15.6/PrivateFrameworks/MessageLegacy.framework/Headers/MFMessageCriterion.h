// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGECRITERION_H
#define MFMESSAGECRITERION_H

@class NSString, NSArray, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MFMessageCriterion : NSObject <NSCopying>

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
@property (copy, nonatomic) NSString *expression;
@property (nonatomic) BOOL expressionIsSanitized; // ivar: _expressionIsSanitized
@property (nonatomic) BOOL includeRelatedMessages; // ivar: _includeRelatedMessages
@property (nonatomic) BOOL includeRemoteBodyContent; // ivar: _includeRemoteBodyContent
@property (retain, nonatomic) NSIndexSet *libraryIdentifiers; // ivar: _libraryIdentifiers
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL preferFullTextSearch; // ivar: _preferFullTextSearch
@property (nonatomic) int qualifier; // ivar: _qualifier
@property (nonatomic) BOOL useFlaggedForUnreadCount; // ivar: _useFlaggedForUnreadCount


+(NSInteger)criterionTypeForString:(id)arg0 ;
+(id)VIPSenderMessageCriterion;
+(id)andCompoundCriterionWithCriteria:(id)arg0 ;
+(id)ccMeCriterion;
+(id)criteriaFromDefaultsArray:(id)arg0 ;
+(id)criteriaFromDefaultsArray:(id)arg0 removingRecognizedKeys:(BOOL)arg1 ;
+(id)criterionExcludingMailboxes:(id)arg0 ;
+(id)criterionForAccount:(id)arg0 ;
+(id)criterionForConversationID:(NSInteger)arg0 ;
+(id)criterionForDateReceivedOlderThanDate:(id)arg0 ;
+(id)criterionForLibraryID:(id)arg0 ;
+(id)criterionForMailbox:(id)arg0 ;
+(id)criterionForMailboxURL:(id)arg0 ;
+(id)criterionForNotDeletedConversationID:(NSInteger)arg0 ;
+(id)defaultsArrayFromCriteria:(id)arg0 ;
+(id)expressionForDate:(id)arg0 ;
+(id)flaggedMessageCriterion;
+(id)hasAttachmentsCriterion;
+(id)includesMeCriterion;
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
+(void)_updateAddressComments:(id)arg0 ;
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
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isVIPCriterion;
-(NSUInteger)hash;
-(id)_headersRequiredForEvaluation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFromExpression;
-(id)description;
-(id)descriptionWithDepth:(unsigned int)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCriterion:(id)arg0 expression:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 andRemoveRecognizedKeysIfMutable:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 qualifier:(int)arg1 expression:(id)arg2 ;
-(id)simplifiedCriterion;
-(id)simplifyOnce;
-(id)stringForMessageRuleQualifier:(int)arg0 ;
-(int)dateUnits;
-(int)messageRuleQualifierForString:(id)arg0 ;
-(void)dealloc;
-(void)setAllCriteriaMustBeSatisfied:(BOOL)arg0 ;
-(void)setDateIsRelative:(BOOL)arg0 ;
-(void)setDateUnits:(int)arg0 ;


@end


#endif