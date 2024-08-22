// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDDESCRIPTOR_H
#define FCFEEDDESCRIPTOR_H

@class NSString, NSArray;
@protocol NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding, FCChannelProviding, FCTagProviding, FCContentContext, FCFeedTheming;

#import <Foundation/Foundation.h>


@interface FCFeedDescriptor : NSObject <NSCopying, FCFeedHeadlineSource, FCFeedAdMetadataProviding>



@property (readonly, nonatomic) NSObject<FCChannelProviding> *backingChannel;
@property (readonly, nonatomic) NSString *backingChannelID;
@property (readonly, nonatomic) NSString *backingSectionID;
@property (readonly, nonatomic) NSObject<FCTagProviding> *backingTag;
@property (readonly, nonatomic) NSString *backingTopicID;
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger feedFilterOptions;
@property (readonly, nonatomic) NSInteger feedPersonalizationConfigurationSet;
@property (readonly, nonatomic) NSInteger feedSortMethod;
@property (nonatomic) NSInteger feedType; // ivar: _feedType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSInteger iAdContentProvider;
@property (readonly, nonatomic) NSString *iAdFeedID;
@property (readonly, nonatomic) NSString *iAdIdentifier;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) NSString *iAdPrimaryAudience;
@property (readonly, nonatomic) NSString *iAdSectionID;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isIssueBackCatalog; // ivar: _isIssueBackCatalog
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *otherArticleIDs; // ivar: _otherArticleIDs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<FCFeedTheming> *theme;


-(BOOL)hasNotificationsEnabledWithSubscriptionController:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMutedWithSubscriptionController:(id)arg0 ;
-(BOOL)isSubscribedToWithSubscriptionController:(id)arg0 ;
-(BOOL)subscribeToWithSubscriptionController:(id)arg0 eventInitiationLevel:(NSInteger)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg0 context:(id)arg1 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)issueBackCatalogFeedDescriptor;
-(id)languagesWithSubscriptionController:(id)arg0 ;
-(id)latestHeadlineResultsWithContext:(id)arg0 ;
-(id)streamOfHeadlinesWithIDs:(id)arg0 context:(id)arg1 cachedOnly:(BOOL)arg2 maxCachedAge:(CGFloat)arg3 ;
-(id)streamOfLatestHeadlinesWithContext:(id)arg0 ;
-(void)d_fetchAllHeadlinesWithCloudContext:(id)arg0 sinceDate:(id)arg1 filter:(BOOL)arg2 personalize:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)fetchHeadlinesWithContext:(id)arg0 forIdentifiers:(id)arg1 downloadAssets:(BOOL)arg2 qualityOfService:(NSInteger)arg3 completion:(id)arg4 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg0 eventInitiationLevel:(NSInteger)arg1 ;


@end


#endif