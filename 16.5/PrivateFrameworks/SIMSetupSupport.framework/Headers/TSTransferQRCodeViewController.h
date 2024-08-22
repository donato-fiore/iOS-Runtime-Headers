// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTRANSFERQRCODEVIEWCONTROLLER_H
#define TSTRANSFERQRCODEVIEWCONTROLLER_H

@class NSString, UIBarButtonItem;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSTransferQRCodeViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

 {
    NSString *_transferCredentials;
    NSString *_carrierName;
    UIBarButtonItem *_cancelButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTransferCredentials:(id)arg0 carrierName:(id)arg1 ;
-(void)_userDidTapCancel;
-(void)viewDidLoad;


@end


#endif