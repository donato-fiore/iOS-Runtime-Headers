// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXRNEARBYDEVICESVIEWCONTROLLER_H
#define AXRNEARBYDEVICESVIEWCONTROLLER_H

@class UITableViewController, NSString, NSArray, AXRDeviceDiscoveryManager;
@protocol AXRDeviceDiscoveryObserver, AXRemoteViewServiceInterface;



@interface AXRNearbyDevicesViewController : UITableViewController <AXRDeviceDiscoveryObserver, AXRemoteViewServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *discoveredDevices; // ivar: _discoveredDevices
@property (retain, nonatomic) AXRDeviceDiscoveryManager *discoveryManager; // ivar: _discoveryManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_connectToDevice:(id)arg0 ;
-(void)_dismissPresentedViewController;
-(void)_showActiveDeviceConnectionAlertWithDevice:(id)arg0 ;
-(void)_showFailedToConnectAlert;
-(void)deviceDiscoveryManager:(id)arg0 updatedDevices:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif