// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFORYOUGADGETDATASOURCEMANAGER_H
#define PXFORYOUGADGETDATASOURCEMANAGER_H

@class NSArray, NSString;
@protocol PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetDataSourceManager.h"
#import "PXCloudWelcomeGadgetProvider.h"
#import "PXCMMInvitationsHorizontalGadgetProvider.h"
#import "PXCMMSuggestionsHorizontalGadgetProvider.h"
#import "PXHorizontalContentSyndicationGadgetProvider.h"
#import "PXForYouFooterGadgetProvider.h"
#import "PXSharedAlbumActivityHorizontalGadgetProvider.h"
#import "PXHorizontalCollectionGadgetProvider.h"
#import "PXForYouMemoryGadgetProvider.h"
#import "PXPeopleQuestionsGadgetProvider.h"
#import "PXForYouGadgetPriorityManager.h"
#import "PXForYouRecentInterestSuggestionsGadgetProvider.h"
#import "PXGadgetNavigationHelper.h"
#import "PXSampleSuggestionProvider.h"

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver>

 {
    NSArray *_gadgetProviders;
}


@property (retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider; // ivar: _CMMCloudWelcomeGadgetProvider
@property (retain, nonatomic) PXCMMInvitationsHorizontalGadgetProvider *CMMInvitationsHorizontalGadgetProvider; // ivar: _CMMInvitationsHorizontalGadgetProvider
@property (retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider; // ivar: _CMMSuggestionsHorizontalGadgetProvider
@property (retain, nonatomic) PXHorizontalContentSyndicationGadgetProvider *contentSyndicationGadgetProvider; // ivar: _contentSyndicationGadgetProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXForYouFooterGadgetProvider *footerGadgetProvider; // ivar: _footerGadgetProvider
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXSharedAlbumActivityHorizontalGadgetProvider *icpsActivityHorizontalGadgetProvider; // ivar: _icpsActivityHorizontalGadgetProvider
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *inboxHorizontalGadgetProvider; // ivar: _inboxHorizontalGadgetProvider
@property (readonly, nonatomic) BOOL isLaunchedToTest; // ivar: _isLaunchedToTest
@property (retain, nonatomic) PXForYouMemoryGadgetProvider *memoryGadgetProvider; // ivar: _memoryGadgetProvider
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (retain, nonatomic) PXPeopleQuestionsGadgetProvider *peopleQuestionsGadgetProvider; // ivar: _peopleQuestionsGadgetProvider
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *peopleQuestionsHorizontalGadgetProvider; // ivar: _peopleQuestionsHorizontalGadgetProvider
@property (readonly, nonatomic) PXForYouGadgetPriorityManager *priorityManager; // ivar: _priorityManager
@property (retain, nonatomic) PXHorizontalCollectionGadgetProvider *recentInterestSuggestionsHorizontalGadgetProvider; // ivar: _recentInterestSuggestionsHorizontalGadgetProvider
@property (retain, nonatomic) PXForYouRecentInterestSuggestionsGadgetProvider *recentInterestsSuggestionsGadgetProvider; // ivar: _recentInterestsSuggestionsGadgetProvider
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (retain, nonatomic) PXSampleSuggestionProvider *sampleSuggestionGadgetsProvider; // ivar: _sampleSuggestionGadgetsProvider
@property (readonly) Class superclass;


-(BOOL)_canShowHubbleSurveyQuestionsGadget;
-(BOOL)_canShowSurveyQuestionsGadget;
-(BOOL)_gadgetProviderIsInbox:(id)arg0 ;
-(BOOL)_resetSortingRanksIfNecessary;
-(NSInteger)_adjustComparasionForInbox:(NSInteger)arg0 gadgetType1:(NSUInteger)arg1 gadgeType2:(NSUInteger)arg2 ;
-(NSInteger)_compareRank1:(NSInteger)arg0 rank2:(NSInteger)arg1 ;
-(NSUInteger)_adjustGadgetTypeForRanking:(NSUInteger)arg0 ;
-(id)gadgetProviderSortComparator:(SEL)arg0 ;
-(id)gadgetProviders;
-(id)gadgetSortComparator:(SEL)arg0 ;
-(id)hiddenGadgetProviders;
-(id)initWithPriorityManager:(id)arg0 isLaunchedToTest:(BOOL)arg1 ;
-(void)_calendarDayChanged;
-(void)_calendarDayChangedForced:(BOOL)arg0 ;
-(void)_forceCalendarDayChanged;
-(void)_updatePrioritiesForCalendarChange;
-(void)didLoadDataForPriorities;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg0 ;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg0 ;
-(void)removeCachedProviders;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif