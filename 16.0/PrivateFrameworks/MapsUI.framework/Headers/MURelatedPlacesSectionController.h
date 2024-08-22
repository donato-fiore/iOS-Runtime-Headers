// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MURELATEDPLACESSECTIONCONTROLLER_H
#define MURELATEDPLACESSECTIONCONTROLLER_H

@class NSArray, NSString, GEORelatedPlaceModuleConfiguration, GEORelatedPlaceList, UIView, UIViewController, MKUGCCallToActionViewAppearance;
@protocol MUPlaceTilesViewDelegate, MUPlaceTilesListViewDelegate, MUPlaceSectionControlling, MKMapServiceTicket, MUInfoCardAnalyticsDelegate, MURelatedPlacesSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUPlaceSectionView.h"
#import "MURelatedPlaceSectionControllerConfiguration.h"
#import "MUPlaceTilesView.h"
#import "MUPlaceTilesListView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MURelatedPlacesSectionController : MUPlaceSectionController <MUPlaceTilesViewDelegate, MUPlaceTilesListViewDelegate, MUPlaceSectionControlling>

 {
    id<MKMapServiceTicket> *_ticket;
    NSArray *_mapItemList;
    MUPlaceSectionView *_sectionView;
    MURelatedPlaceSectionControllerConfiguration *_configuration;
    MUPlaceTilesView *_tilesView;
    MUPlaceTilesListView *_listView;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfig;
@property (readonly, nonatomic) BOOL needsToPerformRefinement;
@property (readonly, nonatomic) GEORelatedPlaceList *relatedPlaceList;
@property (weak, nonatomic) NSObject<MURelatedPlacesSectionControllerDelegate> *relatedPlacesDelegate; // ivar: _relatedPlacesDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // ivar: _sectionHeaderViewModel
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;


-(BOOL)isImpressionable;
-(id)_moduleTitle;
-(id)initWithMapItem:(id)arg0 configuration:(id)arg1 ;
-(int)analyticsModuleType;
-(void)_buildInitialContent;
-(void)_cancelPlaceRefinementIfNeeded;
-(void)_displayTilesForViewModels:(id)arg0 ;
-(void)_handleViewModel:(id)arg0 ;
-(void)_notifyDelegateForSeeAll;
-(void)_notifyDelegateOfSelectedMapItem:(id)arg0 ;
-(void)_populateAnalyticsModule:(id)arg0 ;
-(void)_refinePlaceAndNotifyDelegate:(id)arg0 ;
-(void)_refineRelatedPlaceListWithCompletion:(id)arg0 ;
-(void)_seeAllTapped;
-(void)_setupSectionView;
-(void)_updateSection;
-(void)placeTileCollectionView:(id)arg0 didTapOnAccessoryViewModel:(id)arg1 ;
-(void)placeTileCollectionView:(id)arg0 didTapOnViewModel:(id)arg1 ;
-(void)placeTileCollectionViewDidScroll:(id)arg0 ;
-(void)placeTilesListView:(id)arg0 didSelectViewModel:(id)arg1 ;


@end


#endif