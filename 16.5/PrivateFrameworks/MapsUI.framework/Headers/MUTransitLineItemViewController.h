// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUTRANSITLINEITEMVIEWCONTROLLER_H
#define MUTRANSITLINEITEMVIEWCONTROLLER_H

@class UIViewController, NSArray, MUPlaceActionManager, MKETAProvider, NSString, GEOAutomobileOptions, GEOCyclingOptions, NSNumber, UIScrollView, GEOTransitOptions, GEOWalkingOptions;
@protocol MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, MKPlaceActionManagerTransitDelegate, MUInfoCardContentProtocol, MUTransitLineItemViewControllerDelegate, GEOTransitLineItem;


#import "MUScrollableStackView.h"
#import "MUNearestStationProvider.h"
#import "MUNearestStationSectionController.h"
#import "MUPlaceHeaderView.h"
#import "MULoadingOverlayController.h"
#import "MUHeaderButtonsSectionController.h"

@interface MUTransitLineItemViewController : UIViewController <MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, MKPlaceActionManagerTransitDelegate, MUInfoCardContentProtocol>

 {
    NSArray *_sectionControllers;
    MUScrollableStackView *_contentStackView;
    MUPlaceActionManager *_actionManager;
    MKETAProvider *_etaProvider;
    MUNearestStationProvider *_nearbyStationProvider;
    MUNearestStationSectionController *_nearestStationSectionController;
    NSString *_lastNearestRequestErrorMessage;
    MUPlaceHeaderView *_headerView;
    MULoadingOverlayController *_loadingOverlayController;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUTransitLineItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *favorited; // ivar: _favorited
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUHeaderButtonsSectionController *headerButtonsSectionController; // ivar: _headerButtonsSectionController
@property (readonly, nonatomic) CGFloat heightForContentAboveTitle;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *transitLineItem; // ivar: _transitLineItem
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions; // ivar: _walkingOptions


+(CGFloat)headerHeightInMinimalMode;
-(CGFloat)currentHeight;
-(id)_footerSectionController;
-(id)createMenuActions;
-(id)draggableContent;
-(id)draggableHeaderView;
-(id)initWithTransitLineItem:(id)arg0 ;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(void)_attachLoadingOverlayIfNeeded;
-(void)_fetchNearestStation;
-(void)_openAttributionURLStrings:(id)arg0 usingAttribution:(id)arg1 ;
-(void)_removeLoadingOverlayIfNeeded;
-(void)_setupContentView;
-(void)_updateSectionControllers;
-(void)contentAboveTitleScrollPositionChanged:(CGFloat)arg0 ;
-(void)headerButtonsSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)headerButtonsSectionControllerDidUpdateContent:(id)arg0 ;
-(void)hideTitle:(BOOL)arg0 ;
-(void)incidentsSectionController:(id)arg0 didSelectDetailsForIncidents:(id)arg1 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 actionRichProviderId:(id)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 actionRichProviderId:(id)arg7 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)nearestStationSectionController:(id)arg0 didSelectStationAttributionURL:(id)arg1 ;
-(void)nearestStationSectionController:(id)arg0 didTapStationItem:(id)arg1 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)placeActionManagerDidSelectAddToFavorites:(id)arg0 ;
-(void)placeActionManagerDidSelectRemoveFromFavorites:(id)arg0 ;
-(void)placeActionManagerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeActionManagerDidSelectReportAProblem:(id)arg0 isQuickAction:(BOOL)arg1 ;
-(void)placeDescriptionSectionControllerDidTapAttribution:(id)arg0 ;
-(void)resetNearestStation;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif