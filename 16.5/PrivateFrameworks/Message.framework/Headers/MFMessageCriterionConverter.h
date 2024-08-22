// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGECRITERIONCONVERTER_H
#define MFMESSAGECRITERIONCONVERTER_H

@class NSString;
@protocol EFLoggable, MFMessageCriterionConverterDelegate;

#import <Foundation/Foundation.h>


@interface MFMessageCriterionConverter : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMessageCriterionConverterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)spotlightBodySearchPredicateForValue:(id)arg0 ;
+(id)spotlightRecipientSearchPredicateForValue:(id)arg0 operator:(NSUInteger)arg1 ;
+(id)spotlightSearchPredicateForValue:(id)arg0 ;
+(id)spotlightSenderSearchPredicateForValue:(id)arg0 operator:(NSUInteger)arg1 ;
+(id)spotlightSubjectSearchPredicateForValue:(id)arg0 operator:(NSUInteger)arg1 ;
-(NSInteger)_criterionTypeForKey:(id)arg0 ;
-(NSInteger)_criterionTypeFromExpression:(id)arg0 ;
-(NSInteger)_defaultCriterionTypeForKey:(id)arg0 ;
-(NSUInteger)_proposedPredicateOperatorType:(NSUInteger)arg0 forKey:(id)arg1 ;
-(id)_defaultKeysForCriterionType:(NSInteger)arg0 ;
-(id)_messageCriterionForComparisonPredicate:(id)arg0 ;
-(id)_messageCriterionForCompoundPredicate:(id)arg0 ;
-(id)_orPredicateForAttributes:(id)arg0 matchingValue:(id)arg1 qualifier:(NSInteger)arg2 ;
-(id)_predicateForKey:(id)arg0 value:(id)arg1 qualifier:(NSInteger)arg2 ;
-(id)_predicateKeysForCriterion:(NSInteger)arg0 ;
-(id)_searchPredicateForCriterion:(id)arg0 ;
-(id)_simplifiedCompoundPredicateOfType:(NSUInteger)arg0 forSubqueries:(id)arg1 ;
-(id)messageCriterionFromPredicate:(id)arg0 ;
-(id)messageCriterionFromPredicateFormatString:(id)arg0 ;
-(id)predicateFromMessageCriterion:(id)arg0 ;


@end


#endif