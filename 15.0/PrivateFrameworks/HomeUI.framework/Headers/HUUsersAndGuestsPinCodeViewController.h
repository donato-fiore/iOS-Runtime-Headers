// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUUSERSANDGUESTSPINCODEVIEWCONTROLLER_H
#define HUUSERSANDGUESTSPINCODEVIEWCONTROLLER_H

@class NSString, HFPinCodeManager;
@protocol HUPresentationDelegate, HFPinCodeManagerObserver;


#import "HUItemTableViewController.h"

@interface HUUsersAndGuestsPinCodeViewController : HUItemTableViewController <HUPresentationDelegate, HFPinCodeManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (readonly) Class superclass;


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithSourceItem:(id)arg0 pinCodeManager:(id)arg1 home:(id)arg2 forAccessory:(id)arg3 ;
-(void)hideSpinner;
-(void)showSpinner;


@end


#endif