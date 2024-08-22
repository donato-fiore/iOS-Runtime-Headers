// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCURRENTDEVICEPASSCODEVIEWCONTROLLER_H
#define PKCURRENTDEVICEPASSCODEVIEWCONTROLLER_H

@class DevicePINController, NSString;
@protocol DevicePINControllerDelegate;


#import "PKPasscodeUpgradeFlowController.h"

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate>

 {
    PKPasscodeUpgradeFlowController *_flowController;
    BOOL _viewHasAppeared;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresKeyboard;
-(id)initWithPasscodeUpgradeFlowController:(id)arg0 ;
-(id)pinInstructionsPrompt;
-(id)stringsBundle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif