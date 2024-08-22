// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEENRICHMENTSECTIONCONTROLLER_H
#define MUPLACEENRICHMENTSECTIONCONTROLLER_H

@class NSString, GEOEnrichmentData, UIView, UIViewController, NSArray, MKUGCCallToActionViewAppearance;
@protocol MUWebContentViewControllerDelegate, MUPlaceEnrichmentManagerObserver, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceSectionControlling, MUInfoCardAnalyticsDelegate, MUPlaceEnrichmentSectionControllerDelegate;


#import "MUPlaceSectionController.h"
#import "MUWebContentViewController.h"
#import "MUPlaceSectionView.h"
#import "MUPlaceEnrichmentActionManager.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceEnrichmentSectionController : MUPlaceSectionController <MUWebContentViewControllerDelegate, MUPlaceEnrichmentManagerObserver, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceSectionControlling>

 {
    MUWebContentViewController *_webContentViewController;
    MUPlaceSectionView *_sectionView;
    BOOL _shouldRemoveWebContent;
}


@property (retain, nonatomic) MUPlaceEnrichmentActionManager *actionManager; // ivar: _actionManager
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) NSObject<MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOEnrichmentData *enrichmentData; // ivar: _enrichmentData
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (weak, nonatomic) NSObject<MUPlaceEnrichmentSectionControllerDelegate> *placeEnrichmentDelegate; // ivar: _placeEnrichmentDelegate
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) UIViewController *sectionViewController;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (readonly) Class superclass;


-(BOOL)isImpressionable;
-(BOOL)isWebContentViewControllerParentPlacecardLoading:(id)arg0 ;
-(id)draggableContent;
-(id)initWithMapItem:(id)arg0 actionManager:(id)arg1 dataAvailability:(id)arg2 amsResultProvider:(id)arg3 callToActionDelegate:(id)arg4 externalActionHandler:(id)arg5 rapActionHandler:(id)arg6 ;
-(int)analyticSuppressionReasonFrom:(id)arg0 ;
-(int)analyticsModuleType;
-(void)_populateRevealedAnalyticsModule:(id)arg0 ;
-(void)_setupPlaceEnrichmentViewController;
-(void)dealloc;
-(void)didTapAddPhoto;
-(void)didTapRatePlace;
-(void)instrumentExternalActionUsingAnalyticsAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 sharedStateButtonList:(id)arg3 ;
-(void)placeEnrichmentAPIContollerDidFetchEnrichmentData:(id)arg0 forMapItem:(id)arg1 ;
-(void)refreshPlaceEnrichment;
-(void)removeWebContentViewController:(id)arg0 arguments:(id)arg1 ;
-(void)updateActionsOverWebBridge:(id)arg0 ;
// -(void)webContentViewController:(id)arg0 performHeightChangeWithBlock:(id)arg1 animated:(unk)arg2 completion:(BOOL)arg3  ;
-(void)webContentViewControllerDidStopLoading:(id)arg0 ;


@end


#endif