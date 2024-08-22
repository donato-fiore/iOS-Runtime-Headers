// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITLINEITEMVIEWCONTROLLER_H
#define MKTRANSITLINEITEMVIEWCONTROLLER_H

@class NSString, GEOAutomobileOptions, GEOCyclingOptions, NSNumber, GEOTransitOptions;
@protocol MKStackingViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKETAProviderDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKNearestStationViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate, MKLocationManagerOperation, MKMapServiceTicket, MKTransitLineItemViewControllerDelegate, UIScrollViewDelegate, GEOTransitLineItem;


#import "MKStackingViewController.h"
#import "MKPlaceCardHeaderViewController.h"
#import "MKPlaceHeaderButtonsViewController.h"
#import "MKETAProvider.h"
#import "MKInfoCardLoadingView.h"
#import "MKNearestStationViewController.h"
#import "MKMapItem.h"
#import "MKPlaceActionManager.h"
#import "MKPlaceCardActionsViewController.h"
#import "MKPlaceCardActionItem.h"

@interface MKTransitLineItemViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKETAProviderDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKNearestStationViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate>

 {
    MKPlaceCardHeaderViewController *_headerViewController;
    MKPlaceHeaderButtonsViewController *_buttonsHeaderController;
    MKETAProvider *_etaProvider;
    MKInfoCardLoadingView *_loadingView;
    MKNearestStationViewController *_nearestStationViewController;
    id<MKLocationManagerOperation> *_locationOperation;
    id<MKMapServiceTicket> *_nearestStationTicket;
    MKMapItem *_nearestStation;
    NSUInteger _lastRequestedNearestID;
    NSString *_lastNearestRequestErrorMessage;
    MKPlaceActionManager *_actionManager;
    MKPlaceCardActionsViewController *_actionsViewController;
}


@property (retain, nonatomic) MKPlaceCardActionItem *addToFavoritesItem; // ivar: _addToFavoritesItem
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (nonatomic) CGFloat contentAlpha;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions; // ivar: _cyclingOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKTransitLineItemViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *favorited; // ivar: _favorited
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (retain, nonatomic) MKPlaceCardActionItem *removeFromFavoritesItem; // ivar: _removeFromFavoritesItem
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *scrollViewDelegate; // ivar: _scrollViewDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *transitLineItem; // ivar: _transitLineItem
@property (retain, nonatomic) GEOTransitOptions *transitOptions; // ivar: _transitOptions


+(CGFloat)headerHeightInMinimalMode;
-(BOOL)placeCardHeaderViewControllerShouldOverrideCallToAction:(id)arg0 ;
-(CGFloat)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg0 ;
-(CGFloat)stackingViewController:(id)arg0 heightForSeparatorBetweenUpperViewController:(id)arg1 andLowerViewController:(id)arg2 ;
-(id)createMenuActions;
-(id)initWithTransitLineItem:(id)arg0 ;
-(int)mapTypeForETAProvider:(id)arg0 ;
-(void)_fetchNearestStation;
-(void)_updateViewControllers;
-(void)hideTitle:(BOOL)arg0 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 eventValue:(id)arg1 feedbackDelegateSelector:(int)arg2 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 feedbackDelegateSelector:(int)arg5 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 actionURL:(id)arg3 photoID:(id)arg4 moduleMetadata:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg0 target:(int)arg1 eventValue:(id)arg2 moduleMetadata:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg0 resultIndex:(NSInteger)arg1 targetID:(NSUInteger)arg2 transitSystem:(id)arg3 transitDepartureSequence:(id)arg4 transitCardCategory:(int)arg5 transitIncident:(id)arg6 feedbackDelegateSelector:(int)arg7 ;
-(void)nearestStationViewControllerDidSelectStation:(id)arg0 ;
-(void)performAction:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)placeActionManager:(id)arg0 didSelectShareFromView:(id)arg1 ;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg0 ;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg0 ;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg0 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg0 fromView:(id)arg1 isQuickAction:(BOOL)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg0 isQuickAction:(BOOL)arg1 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg0 ;
-(void)placeHeaderButtonsViewController:(id)arg0 didSelectPrimaryType:(NSUInteger)arg1 withView:(id)arg2 ;
-(void)resetNearestStation;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setContentVisibility:(NSInteger)arg0 ;
-(void)transitLineIncidentsViewController:(id)arg0 didSelectDetailsForIncidents:(id)arg1 ;
-(void)updateMaskAlpha:(CGFloat)arg0 onHeight:(CGFloat)arg1 withOffset:(CGFloat)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif