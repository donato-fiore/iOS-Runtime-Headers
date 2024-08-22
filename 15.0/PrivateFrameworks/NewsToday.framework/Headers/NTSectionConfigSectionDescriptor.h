// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTSECTIONCONFIGSECTIONDESCRIPTOR_H
#define NTSECTIONCONFIGSECTIONDESCRIPTOR_H

@class NSString, NSURL;
@protocol NTSectionDescriptor, NTSectionFetchDescriptor;

#import <Foundation/Foundation.h>


@interface NTSectionConfigSectionDescriptor : NSObject <NTSectionDescriptor>



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
@property (copy, nonatomic) NSObject<NTSectionFetchDescriptor> *fetchDescriptor; // ivar: _fetchDescriptor
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
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger supplementalInterSectionFilterOptions; // ivar: _supplementalInterSectionFilterOptions
@property (readonly, nonatomic) NSInteger supplementalIntraSectionFilterOptions; // ivar: _supplementalIntraSectionFilterOptions


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithSectionConfig:(id)arg0 appConfiguration:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 paidBundleFeedID:(id)arg4 todayData:(id)arg5 supplementalFeedFilterOptions:(NSInteger)arg6 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif