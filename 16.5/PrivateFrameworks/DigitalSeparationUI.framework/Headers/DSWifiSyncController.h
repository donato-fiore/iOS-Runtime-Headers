// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSWIFISYNCCONTROLLER_H
#define DSWIFISYNCCONTROLLER_H

@class NSString, NSError, DSRemotePairingWrapper;
@protocol DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSWifiSyncController : DSOBWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfDevices; // ivar: _numberOfDevices
@property (retain, nonatomic) DSRemotePairingWrapper *remotePairing; // ivar: _remotePairing
@property (readonly) Class superclass;


+(void)removeAllPairedDevicesOnQueue:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)localizedDetailText;
-(void)getNumberOfPairedDevices:(id)arg0 ;
-(void)learnMoreWifiSyncPressed;
-(void)presentFetchedErrorAlert;
-(void)reloadDetailText;
-(void)removeAllPairedDevicesAndPushNextPane;
-(void)setUpButtons;
-(void)shouldShowWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif