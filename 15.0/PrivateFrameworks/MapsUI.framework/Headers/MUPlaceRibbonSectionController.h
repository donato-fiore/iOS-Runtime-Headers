// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACERIBBONSECTIONCONTROLLER_H
#define MUPLACERIBBONSECTIONCONTROLLER_H

@class NSString, GEOPlaceRibbonConfiguration, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceRibbonViewDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceRibbonSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceRibbonView.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceRibbonSectionControllerConfiguration.h"
#import "MUPlaceCallToActionRibbonViewModel.h"
#import "MUPlaceRibbonItemViewModel.h"
#import "MUPlaceDistanceRibbonViewModel.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceRibbonSectionController : MUPlaceSectionController <MUPlaceRibbonViewDelegate, MUPlaceSectionControlling>

 {
    MUPlaceRibbonView *_ribbonView;
    MUPlaceSectionView *_sectionView;
    MUPlaceRibbonSectionControllerConfiguration *_configuration;
    MUPlaceCallToActionRibbonViewModel *_arpViewModel;
    MUPlaceRibbonItemViewModel *_ratingViewModel;
    MUPlaceDistanceRibbonViewModel *_distanceViewModel;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllowedToShowRatingScoreRibbonItem;
@property (readonly, nonatomic) GEOPlaceRibbonConfiguration *ribbonConfig;
@property (weak, nonatomic) NSObject<MUPlaceRibbonSectionControllerDelegate> *ribbonDelegate; // ivar: _ribbonDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) BOOL shouldShowARPCallToAction;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus; // ivar: _submissionStatus
@property (readonly) Class superclass;


-(BOOL)ribbonView:(id)arg0 shouldShowRibbonItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_setupRibbonView;
-(void)_updateAppearanceForSubmissionStatus;
-(void)_updateWithPreviousState:(BOOL)arg0 ;
-(void)buildContent;
-(void)ribbonView:(id)arg0 didTapItemWithViewModel:(id)arg1 withPresentationOptions:(id)arg2 ;


@end


#endif