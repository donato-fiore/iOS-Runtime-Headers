// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPERSONNODE_H
#define PGGRAPHPERSONNODE_H

@class NSDate, NSDateComponents, NSString;
@protocol PGPersonResult, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphPersonNodeCollection.h"

@interface PGGraphPersonNode : PGGraphOptimizedNode <PGPersonResult, PGAssetCollectionFeature>



@property (readonly) NSUInteger ageCategory; // ivar: _ageCategory
@property (readonly) NSDate *anniversaryDate; // ivar: _anniversaryDate
@property (readonly, nonatomic) NSDateComponents *anniversaryDateComponents;
@property (readonly) BOOL belongsToAnySocialGroup;
@property (readonly) BOOL belongsToBestSocialGroups;
@property (readonly, nonatomic) NSDate *birthdayDate;
@property (readonly) NSDate *birthdayDate; // ivar: _birthdayDate
@property (readonly, nonatomic) NSDateComponents *birthdayDateComponents;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *collection;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) BOOL isInferredChild;
@property (readonly) BOOL isInferredMemberOfMyFamily;
@property (readonly) BOOL isMeNode;
@property (readonly) BOOL isMemberOfMyFamily;
@property (readonly) BOOL isMyAcquaintance;
@property (readonly) BOOL isMyChild;
@property (readonly) BOOL isMyCoworker;
@property (readonly) BOOL isMyFather;
@property (readonly) BOOL isMyFriend;
@property (readonly) BOOL isMyInferredAcquaintance;
@property (readonly) BOOL isMyInferredChild;
@property (readonly) BOOL isMyInferredCoworker;
@property (readonly) BOOL isMyInferredFather;
@property (readonly) BOOL isMyInferredFriend;
@property (readonly) BOOL isMyInferredMother;
@property (readonly) BOOL isMyInferredParent;
@property (readonly) BOOL isMyInferredPartner;
@property (readonly) BOOL isMyInferredSibling;
@property (readonly) BOOL isMyMother;
@property (readonly) BOOL isMyParent;
@property (readonly) BOOL isMyPartner;
@property (readonly) BOOL isMySibling;
@property (readonly) BOOL isUserCreated; // ivar: _isUserCreated
@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *keywordDescription;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSUInteger numberOfMomentNodes;
@property (readonly) CGFloat personScore;
@property (readonly) NSDate *potentialBirthdayDate; // ivar: _potentialBirthdayDate
@property (readonly, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property (readonly) NSUInteger sex; // ivar: _sex
@property (readonly, nonatomic) NSString *suggestedContactIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(CGFloat)_specialDateTimeIntervalForDate:(id)arg0 ;
+(NSUInteger)type;
+(id)_specialDateComponentsForDate:(id)arg0 ;
+(id)_specialDateForDateComponents:(id)arg0 ;
+(id)acquaintanceOfPerson;
+(id)brotherOfPerson;
+(id)childOfPerson;
+(id)coworkerOfPerson;
+(id)coworkerSocialGroupOfPerson;
+(id)daughterOfPerson;
+(id)familyOfPerson;
+(id)familySocialGroupOfPerson;
+(id)fatherOfPerson;
+(id)filter;
+(id)filterExcludingMe;
+(id)filterForAgeCategories:(id)arg0 includingMe:(BOOL)arg1 ;
+(id)filterForBiologicalSex:(NSUInteger)arg0 ;
+(id)filterIncludingMe;
+(id)filterNameEmpty;
+(id)filterNameNotEmpty;
+(id)friendOfPerson;
+(id)homeOfPerson;
+(id)homeOrWorkOfPerson;
+(id)inferredAcquaintanceOfPerson;
+(id)inferredBrotherOfPerson;
+(id)inferredChildOfPerson;
+(id)inferredCoworkerOfPerson;
+(id)inferredCoworkerSocialGroupOfPerson;
+(id)inferredDaughterOfPerson;
+(id)inferredFamilyOfPerson;
+(id)inferredFamilySocialGroupOfPerson;
+(id)inferredFatherOfPerson;
+(id)inferredFriendOfPerson;
+(id)inferredMotherOfPerson;
+(id)inferredParentOfPerson;
+(id)inferredPartnerOfPerson;
+(id)inferredSisterOfPerson;
+(id)inferredSonOfPerson;
+(id)inferredVipOfPerson;
+(id)momentAuthoredByPerson;
+(id)momentOfPerson;
+(id)motherOfPerson;
+(id)parentOfPerson;
+(id)partnerOfPerson;
+(id)personActivityMeaningOfPerson;
+(id)personSortDescriptors;
+(id)propertiesWithAgeCategory:(NSUInteger)arg0 ;
+(id)propertiesWithBiologicalSex:(NSUInteger)arg0 ;
+(id)propertiesWithPerson:(id)arg0 ;
+(id)sisterOfPerson;
+(id)socialGroupOfPerson;
+(id)sonOfPerson;
+(id)vipOfPerson;
+(id)workOfPerson;
-(BOOL)_contactSuggestionEdge:(id)arg0 fitsQuery:(NSUInteger)arg1 ;
-(BOOL)_hasRelationshipLabel:(id)arg0 withStatus:(NSUInteger)arg1 ;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isIdentifiedByProperties:(id)arg0 ;
-(NSInteger)compareToPerson:(id)arg0 ;
-(id)_contactSuggestionEdgesSortedByWeight;
-(id)associatedNodesForRemoval;
-(id)changingPropertiesWithProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithPerson:(id)arg0 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)stringDescription;
-(unsigned short)domain;
-(void)enumerateBirthdayMomentNodesUsingBlock:(id)arg0 ;
-(void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateHomeOrWorkAddressEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)enumerateHomeOrWorkAddressNodesUsingBlock:(id)arg0 ;
-(void)enumerateHomeOrWorkNodesUsingBlock:(id)arg0 ;
-(void)enumerateMomentEdgesAndNodesUsingBlock:(id)arg0 ;
-(void)setLocalProperties:(id)arg0 ;


@end


#endif