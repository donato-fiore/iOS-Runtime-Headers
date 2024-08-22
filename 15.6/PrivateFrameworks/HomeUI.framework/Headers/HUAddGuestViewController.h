// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUADDGUESTVIEWCONTROLLER_H
#define HUADDGUESTVIEWCONTROLLER_H

@class UIBarButtonItem, NSString;
@protocol HUPinCodeDetailsViewDelegate, HUPresentationDelegateHost, HUPresentationDelegate;


#import "HUItemTableOBWelcomeController.h"
#import "HUPinCodeDetailsViewController.h"

@interface HUAddGuestViewController : HUItemTableOBWelcomeController <HUPinCodeDetailsViewDelegate, HUPresentationDelegateHost>



@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUPinCodeDetailsViewController *pinCodeDetailsController; // ivar: _pinCodeDetailsController
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) UIBarButtonItem *saveButtonItem; // ivar: _saveButtonItem
@property (readonly) Class superclass;


-(id)initWithPinCodeManager:(id)arg0 home:(id)arg1 ;
-(void)saveButtonPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif