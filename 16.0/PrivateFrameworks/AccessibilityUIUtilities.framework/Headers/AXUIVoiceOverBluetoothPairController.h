// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUIVOICEOVERBLUETOOTHPAIRCONTROLLER_H
#define AXUIVOICEOVERBLUETOOTHPAIRCONTROLLER_H

@class VOSBluetoothDevice, NSString;
@protocol UITextFieldDelegate;


#import "AXUISettingsSetupCapableListController.h"

@interface AXUIVoiceOverBluetoothPairController : AXUISettingsSetupCapableListController <UITextFieldDelegate>

 {
    VOSBluetoothDevice *_device;
    NSString *_promptFormat;
    BOOL _dismissed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)init;
-(id)internalTableView;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg0 ;
-(void)dealloc;
-(void)deviceUpdated:(id)arg0 ;
-(void)doneButtonClicked:(id)arg0 ;
-(void)emptySetter:(id)arg0 specifier:(id)arg1 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)textDidChange:(id)arg0 ;
-(void)updatePrompt:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif