// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTSECTIONPLACEHOLDERDESCRIPTOR_H
#define NTSECTIONPLACEHOLDERDESCRIPTOR_H

@class NSString, NSURL;
@protocol NTSectionDescriptor;

#import <Foundation/Foundation.h>


@interface NTSectionPlaceholderDescriptor : NSObject <NTSectionDescriptor>



@property (readonly, copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (readonly, copy, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (readonly, copy, nonatomic) NSString *backgroundColorDark; // ivar: _backgroundColorDark
@property (readonly, copy, nonatomic) NSString *backgroundColorLight; // ivar: _backgroundColorLight
@property (readonly, nonatomic) NSString *backingTagID; // ivar: _backingTagID
@property (readonly, nonatomic) NSUInteger cachedResultCutoffTime; // ivar: _cachedResultCutoffTime
@property (readonly, copy, nonatomic) NSString *compactName; // ivar: _compactName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fallbackOrder; // ivar: _fallbackOrder
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger maximumStoriesAllocation; // ivar: _maximumStoriesAllocation
@property (readonly, nonatomic) NSUInteger minimumStoriesAllocation; // ivar: _minimumStoriesAllocation
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSURL *nameActionURL; // ivar: _nameActionURL
@property (readonly, copy, nonatomic) NSString *nameColorDark; // ivar: _nameColorDark
@property (readonly, copy, nonatomic) NSString *nameColorLight; // ivar: _nameColorLight
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID; // ivar: _personalizationFeatureID
@property (readonly, nonatomic) int promotionCriterion; // ivar: _promotionCriterion
@property (readonly, nonatomic) int readArticlesFilterMethod; // ivar: _readArticlesFilterMethod
@property (readonly, copy, nonatomic) NSString *referralBarName; // ivar: _referralBarName
@property (readonly, nonatomic) int seenArticlesFilterMethod; // ivar: _seenArticlesFilterMethod
@property (readonly, nonatomic) NSInteger seenArticlesMinimumTimeSinceFirstSeenToFilter; // ivar: _seenArticlesMinimumTimeSinceFirstSeenToFilter
@property (readonly, copy, nonatomic) NSString *subidentifier; // ivar: _subidentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supplementalInterSectionFilterOptions; // ivar: _supplementalInterSectionFilterOptions
@property (readonly, nonatomic) NSUInteger supplementalIntraSectionFilterOptions; // ivar: _supplementalIntraSectionFilterOptions


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 nameColorLight:(id)arg1 nameColorDark:(id)arg2 minimumStoriesAllocation:(NSUInteger)arg3 maximumStoriesAllocation:(NSUInteger)arg4 backingTagID:(id)arg5 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif