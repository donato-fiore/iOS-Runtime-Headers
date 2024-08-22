// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFORYOUGADGETDATASOURCEMANAGER_H
#define PXFORYOUGADGETDATASOURCEMANAGER_H

@class NSArray, NSDictionary, NSDate, NSString;
@protocol PXCMMCloudGadgetViewControllerDelegate, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetDataSourceManager.h"
#import "PXCloudWelcomeGadgetProvider.h"
#import "PXCMMSuggestionsHorizontalGadgetProvider.h"
#import "PXGadgetNavigationHelper.h"

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate>

 {
    NSArray *_cachedForYouGadgetProviders;
    NSDictionary *_cachedUserRelevanceDateForContentIdentifiers;
    NSDate *_dateUsedForCurrentGadgetOrder;
}


@property (retain, nonatomic) PXCloudWelcomeGadgetProvider *CMMCloudWelcomeGadgetProvider; // ivar: _CMMCloudWelcomeGadgetProvider
@property (retain, nonatomic) PXCMMSuggestionsHorizontalGadgetProvider *CMMSuggestionsHorizontalGadgetProvider; // ivar: _CMMSuggestionsHorizontalGadgetProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *userRelevanceDateForContentIdentifiers;


-(BOOL)_canShowSurveyQuestionsGadget;
-(id)gadgetProviderSortComparator:(SEL)arg0 ;
-(id)gadgetProviders;
-(id)gadgetSortComparator:(SEL)arg0 ;
-(id)hiddenGadgetProviders;
-(id)init;
-(void)_calendarDayChanged;
-(void)_invalidateCachedGadgetProviders;
-(void)_invalidateCachedUserRelevanceDates;
-(void)_pretendDateChanged;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg0 ;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg0 ;
-(void)removeCachedProviders;
-(void)test_pretendItsTommorow;


@end


#endif