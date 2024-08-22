// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSNOPLANFORTRANSFERVIEWCONTROLLER_H
#define TSNOPLANFORTRANSFERVIEWCONTROLLER_H

@class NSString;
@protocol UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSNoPlanForTransferViewController : TSOBTableWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>

 {
    NSString *_deviceName;
    NSString *_phoneNumber;
    BOOL _showOtherOptions;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSUInteger entryPoint; // ivar: _entryPoint
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isStartOverRequiredOnBackButtonTapped;
-(id)initWithCarrier:(id)arg0 transferCapability:(NSUInteger)arg1 showOtherOptions:(BOOL)arg2 entryPoint:(NSUInteger)arg3 ;
-(void)_cancelButtonTapped;
-(void)_scanButtonTapped;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif