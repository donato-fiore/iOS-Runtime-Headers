// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVIEWSERVICEROUTINGVIEWCONTROLLER_H
#define MRUVIEWSERVICEROUTINGVIEWCONTROLLER_H

@class UIViewController, MPMediaControlsConfiguration, UITableViewDiffableDataSource, NSString, NSMutableDictionary, MPAVOutputDeviceRoutingDataSource;
@protocol MediaControlsEndpointsManagerDelegate, MRUNowPlayingControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate, MRUViewServiceRoutingViewControllerDelegate;


#import "MediaControlsEndpointsManager.h"
#import "MRURoutingViewController.h"
#import "MRUNowPlayingController.h"
#import "MRUVisualStylingProvider.h"
#import "MRUVendorSpecificDeviceManager.h"
#import "MRUViewServiceRoutingView.h"

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>



@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (nonatomic) BOOL canShowRemoteDevices; // ivar: _canShowRemoteDevices
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUViewServiceRoutingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // ivar: _endpointsManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingControllers; // ivar: _nowPlayingControllers
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // ivar: _outputDeviceRoutingDataSource
@property (copy, nonatomic) id *replaceRoutes; // ivar: _replaceRoutes
@property (retain, nonatomic) MRURoutingViewController *routingViewController; // ivar: _routingViewController
@property (retain, nonatomic) MRUNowPlayingController *selectedNowPlayingController; // ivar: _selectedNowPlayingController
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsQueueHandoff; // ivar: _supportsQueueHandoff
@property (retain, nonatomic) MRUVendorSpecificDeviceManager *vendorSpecificManager; // ivar: _vendorSpecificManager
@property (retain, nonatomic) MRUViewServiceRoutingView *view;
@property (retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded;


-(BOOL)_canShowWhileLocked;
-(BOOL)canShowMoreButton;
-(BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHaveFullLengthBottomSeparatorForSection:(NSInteger)arg1 ;
-(id)init;
-(id)selectedIdentifier;
-(void)dealloc;
-(void)didSelectListState:(id)arg0 ;
-(void)didSelectQuickControl:(id)arg0 ;
-(void)endpointsManager:(id)arg0 activeSystemRouteDidChange:(id)arg1 ;
-(void)endpointsManager:(id)arg0 defersRoutesReplacement:(id)arg1 ;
-(void)loadView;
-(void)nowPlayingController:(id)arg0 didChangeQuickControlItem:(id)arg1 ;
-(void)nowPlayingController:(id)arg0 endpointController:(id)arg1 didChangeRoute:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeArtwork:(id)arg2 ;
-(void)nowPlayingController:(id)arg0 metadataController:(id)arg1 didChangeNowPlayingInfo:(id)arg2 ;
-(void)routingViewController:(id)arg0 didSelectRoutingViewItem:(id)arg1 ;
-(void)routingViewControllerDidUpdateItems:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateCellForIdentifier:(id)arg0 ;
-(void)updateDiscoveryMode;
-(void)updateMoreButtonVisibility;
-(void)updateNowPlayingControllers;
-(void)updateRoutingViewController;
-(void)updateRoutingViewControllerScrollIndicatorInsets;
-(void)updateSelectedViewController;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif