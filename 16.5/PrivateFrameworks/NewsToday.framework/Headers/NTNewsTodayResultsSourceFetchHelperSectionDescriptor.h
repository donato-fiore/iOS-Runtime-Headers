// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTNEWSTODAYRESULTSSOURCEFETCHHELPERSECTIONDESCRIPTOR_H
#define NTNEWSTODAYRESULTSSOURCEFETCHHELPERSECTIONDESCRIPTOR_H

@class NSString, NSURL;
@protocol NTSectionDescriptor, NTSectionQueueDescriptor;

#import <Foundation/Foundation.h>


@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor>



@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *backgroundColorDark;
@property (readonly, copy, nonatomic) NSString *backgroundColorLight;
@property (readonly, nonatomic) NSString *backingTagID;
@property (readonly, nonatomic) NSUInteger cachedResultCutoffTime;
@property (readonly, copy, nonatomic) NSString *compactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fallbackOrder;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSUInteger maximumStoriesAllocation;
@property (readonly, nonatomic) NSUInteger minimumStoriesAllocation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *nameActionURL;
@property (readonly, copy, nonatomic) NSString *nameColorDark;
@property (readonly, copy, nonatomic) NSString *nameColorLight;
@property (readonly, copy, nonatomic) NSObject<NTSectionQueueDescriptor> *parentSectionQueueDescriptor; // ivar: _parentSectionQueueDescriptor
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, nonatomic) int promotionCriterion;
@property (readonly, nonatomic) int readArticlesFilterMethod;
@property (readonly, copy, nonatomic) NSString *referralBarName;
@property (readonly, copy, nonatomic) NSObject<NTSectionDescriptor> *sectionDescriptor; // ivar: _sectionDescriptor
@property (readonly, nonatomic) int seenArticlesFilterMethod;
@property (readonly, nonatomic) NSInteger seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (readonly, copy, nonatomic) NSString *subidentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supplementalInterSectionFilterOptions;
@property (readonly, nonatomic) NSUInteger supplementalIntraSectionFilterOptions;


-(id)assembleResultsWithCatchUpOperation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg0 limit:(NSUInteger)arg1 priorFeedItems:(id)arg2 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg0 ;
-(id)init;
-(id)initWithSectionDescriptor:(id)arg0 parentSectionQueueDescriptor:(id)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg0 ;


@end


#endif