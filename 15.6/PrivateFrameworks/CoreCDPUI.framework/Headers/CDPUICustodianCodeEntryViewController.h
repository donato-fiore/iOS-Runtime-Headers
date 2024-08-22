// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPUICUSTODIANCODEENTRYVIEWCONTROLLER_H
#define CDPUICUSTODIANCODEENTRYVIEWCONTROLLER_H

@class DevicePINController, NSString;
@protocol DevicePINControllerDelegate;


#import "CDPUICodeEntryViewModel.h"

@interface CDPUICustodianCodeEntryViewController : DevicePINController <DevicePINControllerDelegate>

 {
    CDPUICodeEntryViewModel *_viewModel;
    NSString *_pinInstructions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)showSimplePINCancelButtonOnLeft;
-(BOOL)simplePIN;
-(BOOL)validatePIN:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)pinInstructionsPrompt;
-(id)stringsBundle;
-(struct CGSize )preferredContentSize;
-(void)_disableUserInteractionAndStartSpinner;
-(void)_enableUserInteractionAndStopSpinner;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)setPane:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif