// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSINSTRUMENTCLUSTERCARDVIEWCONTROLLER_H
#define CPSINSTRUMENTCLUSTERCARDVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CPSSafeAreaDelegate, CPSNavigationDisplaying;


#import "CPSManeuversCardView.h"
#import "CPSPausedCardView.h"
#import "CPSDashboardEstimatesViewController.h"
#import "CPSInstrumentClusterCardLayout.h"

@interface CPSInstrumentClusterCardViewController : UIViewController <CPSSafeAreaDelegate, CPSNavigationDisplaying>



@property (nonatomic) UIEdgeInsets currentClientInsets; // ivar: _currentClientInsets
@property (retain, nonatomic) CPSManeuversCardView *currentManeuversCardView; // ivar: _currentManeuversCardView
@property (retain, nonatomic) CPSPausedCardView *currentPausedCardView; // ivar: _currentPausedCardView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSDashboardEstimatesViewController *estimatesViewController; // ivar: _estimatesViewController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMapContentOnly; // ivar: _isMapContentOnly
@property (retain, nonatomic) CPSInstrumentClusterCardLayout *layout; // ivar: _layout
@property (nonatomic) NSUInteger layoutOverride; // ivar: _layoutOverride
@property (retain, nonatomic) UIViewController *platterViewController; // ivar: _platterViewController
@property (weak, nonatomic) NSObject<CPSSafeAreaDelegate> *safeAreaDelegate; // ivar: _safeAreaDelegate
@property (readonly, nonatomic) BOOL shouldUpdateContent; // ivar: _shouldUpdateContent
@property (nonatomic) BOOL showETA; // ivar: _showETA
@property (readonly) Class superclass;


-(id)init;
-(id)initForMapContent;
-(void)_setupConstraintsForETACard;
-(void)_setupConstraintsForPauseCard;
-(void)_setupConstraintsForPlatterView;
-(void)_setupConstraintsForTurnCard;
-(void)_transitionFromViews:(id)arg0 inView:(id)arg1 horizontalSlideAnimation:(BOOL)arg2 ;
-(void)_updateClientSafeArea;
-(void)_updateClientSafeAreaWithInsets:(struct UIEdgeInsets )arg0 ;
-(void)navigator:(id)arg0 didEndTrip:(BOOL)arg1 ;
-(void)navigator:(id)arg0 pausedTripForReason:(NSUInteger)arg1 description:(id)arg2 usingColor:(id)arg3 ;
-(void)showManeuvers:(id)arg0 usingDisplayStyles:(id)arg1 ;
-(void)updateEstimates:(id)arg0 forManeuver:(id)arg1 ;
-(void)updateTripEstimates:(id)arg0 ;
-(void)viewController:(id)arg0 didUpdateSafeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif