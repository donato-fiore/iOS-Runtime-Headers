// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUTRANSITLINEITEMVIEWCONTROLLER_H
#define MUTRANSITLINEITEMVIEWCONTROLLER_H

@class UIViewController, NSArray, MUPlaceActionManager, MKETAProvider, NSString, GEOAutomobileOptions, GEOCyclingOptions, NSNumber, UIScrollView, GEOTransitOptions;
@protocol MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, _MKInfoCardController, MKScrollableStacking, MUTransitLineItemViewControllerDelegate, GEOTransitLineItem;


#import "MUScrollableStackView.h"
#import "MUNearestStationProvider.h"
#import "MUNearestStationSectionController.h"
#import "MUPlaceHeaderView.h"
#import "MULoadingOverlayController.h"
#import "MUHeaderButtonsSectionController.h"

@interface MUTransitLineItemViewController : UIViewController <MKETAProviderDelegate, MUNearestStationSectionControllerDelegate, MUPlaceDescriptionSectionControllerDelegate, MUHeaderButtonsSectionControllerDelegate, MUTransitLineIncidentsSectionControllerDelegate, UIScrollViewDelegate, MUInfoCardAnalyticsDelegate, _MKInfoCardController, MKScrollableStacking>

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
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *transitLineItem; // ivar: _transitLineItem
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions


+(CGFloat)headerHeightInMinimalMode;
-(CGFloat)currentHeight;
-(id)_footerSectionController;
-(id)createMenuActions;
-(id)initWithTransitLineItem:(id)arg0 ;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(void)_attachLoadingOverlayIfNeeded;
-(void)_fetchNearestStation;
-(void)_removeLoadingOverlayIfNeeded;
-(void)_setupContentView;
-(void)_updateSectionControllers;
-(void)headerButtonsSectionController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withPresentationOptions:(id)arg2 ;
-(void)headerButtonsSectionControllerDidUpdateContent:(id)arg0 ;
-(void)hideTitle:(BOOL)arg0 ;
-(void)incidentsSectionController:(id)arg0 didSelectDetailsForIncidents:(id)arg1 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)nearestStationSectionController:(id)arg0 didTapStationItem:(id)arg1 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg0 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeDescriptionSectionControllerDidTapAttribution:(id)arg0 ;
-(void)resetNearestStation;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)updateMaskAlpha:(CGFloat)arg0 onHeight:(CGFloat)arg1 withOffset:(CGFloat)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif