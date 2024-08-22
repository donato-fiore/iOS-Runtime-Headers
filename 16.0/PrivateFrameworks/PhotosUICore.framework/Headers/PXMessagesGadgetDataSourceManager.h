// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESGADGETDATASOURCEMANAGER_H
#define PXMESSAGESGADGETDATASOURCEMANAGER_H

@class NSArray, NSString, UIViewController<PXPhotoLibraryPresenting>;
@protocol PXChangeObserver, PXCMMCloudGadgetViewControllerDelegate, PXGadgetTransition, PXGadgetDelegate;


#import "PXGadgetDataSourceManager.h"
#import "PXMessagesExtensionViewModel.h"
#import "PXCloudWelcomeGadgetProvider.h"
#import "PXMessagesCMMSuggestionsGadgetProvider.h"
#import "PXCMMEnabledStatusProvider.h"
#import "PXMessagesRecentPhotosGadgetProvider.h"
#import "PXGadgetNavigationHelper.h"
#import "PXCMMSuggestionsDataSourceManager.h"

@interface PXMessagesGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver, PXCMMCloudGadgetViewControllerDelegate>

 {
    PXMessagesExtensionViewModel *_viewModel;
    PXCloudWelcomeGadgetProvider *_cloudWelcomeGadgeProvider;
    PXMessagesCMMSuggestionsGadgetProvider *_suggestionsGadgetProvider;
    NSArray *_cachedGadgetProviders;
    PXCMMEnabledStatusProvider *_cmmEnabledStatusProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXGadgetTransition> *gadgetTransition;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *nextGadgetResponder;
@property (copy, nonatomic) NSString *placeholderTitle; // ivar: _placeholderTitle
@property (nonatomic) CGFloat recentPhotosHeight; // ivar: _recentPhotosHeight
@property (retain, nonatomic) PXMessagesRecentPhotosGadgetProvider *recentPhotosProvider; // ivar: _recentPhotosProvider
@property (retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // ivar: _recentPhotosViewController
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager; // ivar: _suggestionsDataSourceManager
@property (readonly) Class superclass;


-(id)gadgetProviders;
-(id)initWithViewModel:(id)arg0 dataSourceManager:(id)arg1 ;
-(void)_updateGadgetProviders;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg0 ;
-(void)removeCachedProviders;


@end


#endif