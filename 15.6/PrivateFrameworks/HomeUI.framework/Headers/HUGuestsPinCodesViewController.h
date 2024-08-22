// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGUESTSPINCODESVIEWCONTROLLER_H
#define HUGUESTSPINCODESVIEWCONTROLLER_H

@class NSString, HFPinCodeManager;
@protocol HUPresentationDelegate, HFPinCodeManagerObserver;


#import "HUItemTableViewController.h"

@interface HUGuestsPinCodesViewController : HUItemTableViewController <HUPresentationDelegate, HFPinCodeManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager
@property (readonly) Class superclass;


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithPinCodeManager:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)hideSpinner;
-(void)showSpinner;


@end


#endif