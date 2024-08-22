// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNPAIRPLANEMODEVIEWCONTROLLER_H
#define PNPAIRPLANEMODEVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PNPAirplaneModeBluetoothViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController, PNPViewControllerAppearanceDelegate, PNPAirplaneModeBluetoothDelegate, PNPPlatterViewControllerPlatterDelegate;


#import "PNPPlatterTransitioningDelegate.h"
#import "PNPAirplaneModeView.h"
#import "PNPDeviceState.h"

@interface PNPAirplaneModeViewController : UIViewController <PNPAirplaneModeBluetoothViewDelegate, PNPPlatterViewController, PNPDeviceStateConfigurable, PNPViewController>

 {
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    PNPAirplaneModeView *_airplaneModeView;
}


@property (weak, nonatomic) NSObject<PNPViewControllerAppearanceDelegate> *appearanceDelegate; // ivar: appearanceDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PNPAirplaneModeBluetoothDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PNPPlatterViewControllerPlatterDelegate> *platterDelegate; // ivar: platterDelegate
@property (readonly, nonatomic) CGFloat preferredCornerRadius;
@property (readonly, nonatomic) NSUInteger preferredEdge;
@property (readonly) Class superclass;


-(id)_platterContainerView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)didTapOnBluetoothButton;
-(void)dismissPill;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif