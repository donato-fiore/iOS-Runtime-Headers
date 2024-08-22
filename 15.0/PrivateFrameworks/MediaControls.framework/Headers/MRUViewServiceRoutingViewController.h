// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVIEWSERVICEROUTINGVIEWCONTROLLER_H
#define MRUVIEWSERVICEROUTINGVIEWCONTROLLER_H

@class UIViewController, MPMediaControlsConfiguration, NSMutableDictionary, UITableViewDiffableDataSource, NSString, MPAVOutputDeviceRoutingDataSource;
@protocol MediaControlsEndpointsManagerDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate, MRUViewServiceRoutingViewControllerDelegate;


#import "MediaControlsEndpointsManager.h"
#import "MRURoutingViewController.h"
#import "MRUEndpointMetadataController.h"
#import "MRUVisualStylingProvider.h"
#import "MRUViewServiceRoutingView.h"

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>



@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (nonatomic) BOOL canShowRemoteDevices; // ivar: _canShowRemoteDevices
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSMutableDictionary *controllers; // ivar: _controllers
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUViewServiceRoutingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // ivar: _endpointsManager
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // ivar: _outputDeviceRoutingDataSource
@property (copy, nonatomic) id *replaceRoutes; // ivar: _replaceRoutes
@property (retain, nonatomic) MRURoutingViewController *routingViewController; // ivar: _routingViewController
@property (retain, nonatomic) MRUEndpointMetadataController *selectedController; // ivar: _selectedController
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsQueueHandoff; // ivar: _supportsQueueHandoff
@property (retain, nonatomic) MRUViewServiceRoutingView *view;
@property (retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)canShowMoreButton;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(id)init;
-(id)selectedIdentifier;
-(void)didSelectListState:(id)arg0 ;
-(void)didSelectQuickActionButton:(id)arg0 ;
-(void)endpointsManager:(id)arg0 activeSystemRouteDidChange:(id)arg1 ;
-(void)endpointsManager:(id)arg0 defersRoutesReplacement:(id)arg1 ;
-(void)loadView;
-(void)metadataController:(id)arg0 didLoadNewResponse:(id)arg1 ;
-(void)metadataController:(id)arg0 didUpdateApplicationIcon:(id)arg1 ;
-(void)metadataControllerDidChangeState:(id)arg0 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg0 ;
-(void)metadataControllerRouteDidUpdate:(id)arg0 ;
-(void)routingViewController:(id)arg0 didSelectRoutingViewItem:(id)arg1 ;
-(void)routingViewControllerDidUpdateItems:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateCellForIdentifier:(id)arg0 ;
-(void)updateControllers;
-(void)updateDiscoveryMode;
-(void)updateHeader;
-(void)updateMoreButtonVisibility;
-(void)updateRoutingViewController;
-(void)updateRoutingViewControllerContentEdgeInsets;
-(void)updateSelectedViewController;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif