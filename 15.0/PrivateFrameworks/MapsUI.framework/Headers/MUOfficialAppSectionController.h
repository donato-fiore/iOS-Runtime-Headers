// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUOFFICIALAPPSECTIONCONTROLLER_H
#define MUOFFICIALAPPSECTIONCONTROLLER_H

@class GEOAppStoreApp, NSString, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceAppLockupView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUOfficialAppSectionController : MUPlaceSectionController <MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling>

 {
    MUPlaceAppLockupView *_officialAppView;
    MUPlaceSectionView *_sectionView;
    GEOAppStoreApp *_appStoreApp;
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
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(id)_sectionHeaderText;
-(id)infoCardChildPossibleActions;
-(id)initWithMapItem:(id)arg0 ;
-(int)analyticsModuleType;
-(void)_hydrateViewWithApp;
-(void)_setupLockupView;
-(void)appLockupViewDidSelectPunchOutButton:(id)arg0 ;


@end


#endif