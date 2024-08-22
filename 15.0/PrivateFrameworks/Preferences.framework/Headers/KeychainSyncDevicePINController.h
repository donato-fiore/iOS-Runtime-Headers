// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYCHAINSYNCDEVICEPINCONTROLLER_H
#define KEYCHAINSYNCDEVICEPINCONTROLLER_H

@class UIKeyboard, NSString;


#import "PSKeychainSyncTextEntryController.h"
#import "DevicePINController.h"

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {
    DevicePINController *_devicePINController;
    BOOL _showingBlockedMessage;
}


@property (retain, nonatomic) UIKeyboard *disabledKeyboard; // ivar: _disabledKeyboard
@property (retain, nonatomic) NSString *enterPasscodeReason; // ivar: _enterPasscodeReason
@property (retain, nonatomic) NSString *enterPasscodeTitle; // ivar: _enterPasscodeTitle


-(NSInteger)tableView:(id)arg0 titleAlignmentForFooterInSection:(NSInteger)arg1 ;
-(id)init;
-(id)specifiers;
-(void)dealloc;
-(void)didFinishEnteringText:(id)arg0 ;
-(void)updateBlockedState:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif