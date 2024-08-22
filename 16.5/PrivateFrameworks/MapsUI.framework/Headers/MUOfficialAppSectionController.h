// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUOFFICIALAPPSECTIONCONTROLLER_H
#define MUOFFICIALAPPSECTIONCONTROLLER_H

@class GEOAppleMediaServicesResult, NSString, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceAppLockupView.h"
#import "MUPlaceSectionView.h"
#import "MUTimeExpirableLRUCache.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUOfficialAppSectionController : MUPlaceSectionController <MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling>

 {
    MUPlaceAppLockupView *_officialAppView;
    MUPlaceSectionView *_sectionView;
    GEOAppleMediaServicesResult *_appStoreApp;
    MUTimeExpirableLRUCache *_cachedMediaResults;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)isImpressionable;
-(id)_sectionHeaderText;
-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 usingCachedMediaResults:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_hydrateViewWithApp;
-(void)_setupLockupView;
-(void)_updateViewWithMediaServicesResult:(id)arg0 ;
-(void)appLockupViewDidSelectPunchOutButton:(id)arg0 ;


@end


#endif