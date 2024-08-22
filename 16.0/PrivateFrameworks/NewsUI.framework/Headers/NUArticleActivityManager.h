// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUARTICLEACTIVITYMANAGER_H
#define NUARTICLEACTIVITYMANAGER_H

@class NSString, FCReadingHistory, FCReadingList, FCSubscriptionList;
@protocol NUActivityProvider, NUURLHandling, NUURLModifying, FCHeadlineProviding, NUArticleActivityOptionsProvider, NUReportConcernViewPresenter;

#import <Foundation/Foundation.h>


@interface NUArticleActivityManager : NSObject <NUActivityProvider>



@property (readonly, nonatomic) NSObject<NUURLHandling> *URLHandler; // ivar: _URLHandler
@property (readonly, nonatomic) NSObject<NUURLModifying> *URLModifier; // ivar: _URLModifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly, nonatomic) NSObject<NUArticleActivityOptionsProvider> *optionsProvider; // ivar: _optionsProvider
@property (readonly, nonatomic) FCReadingHistory *readingHistory; // ivar: _readingHistory
@property (readonly, nonatomic) FCReadingList *readingList; // ivar: _readingList
@property (readonly, nonatomic) NSObject<NUReportConcernViewPresenter> *reportConcernViewPresenter; // ivar: _reportConcernViewPresenter
@property (readonly, nonatomic) FCSubscriptionList *subscriptionList; // ivar: _subscriptionList
@property (readonly) Class superclass;


-(BOOL)articleDislikedForHeadline:(id)arg0 ;
-(BOOL)articleLikedForHeadline:(id)arg0 ;
-(BOOL)articleSavedForHeadline:(id)arg0 ;
-(BOOL)channelMutedForHeadline:(id)arg0 ;
-(id)activities;
-(id)activityForType:(NSUInteger)arg0 ;
-(id)activityImageForHeadline:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)activityItemSources;
-(id)activityTitleForHeadline:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)activityTypeForHeadline:(id)arg0 withType:(NSUInteger)arg1 ;
-(id)initWithHeadline:(id)arg0 readingHistory:(id)arg1 readingList:(id)arg2 subscriptionList:(id)arg3 URLHandler:(id)arg4 reportConcernViewPresenter:(id)arg5 URLModifier:(id)arg6 optionsProvider:(id)arg7 ;
-(id)performBlockForHeadline:(SEL)arg0 withType:(id)arg1 ;
-(id)supportedActivities;
-(void)toggleArticleDislikeStatusForHeadline:(id)arg0 ;
-(void)toggleArticleLikeStatusForHeadline:(id)arg0 ;
-(void)toggleMuteForHeadline:(id)arg0 ;
-(void)toggleSaveForHeadline:(id)arg0 ;


@end


#endif