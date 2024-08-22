// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTDEVICENAMEEDITINGCONTROLLER_H
#define BTDEVICENAMEEDITINGCONTROLLER_H

@class PSListController, NSString;
@protocol UITextFieldDelegate;


#import "BTSDevice.h"

@interface BTDeviceNameEditingController : PSListController <UITextFieldDelegate>

 {
    BTSDevice *_currentDevice;
    NSString *_deviceName;
    NSString *_productName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keyboardShownOnce; // ivar: _keyboardShownOnce
@property (readonly) Class superclass;


-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)getDeviceName:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)keyboardWillShow:(id)arg0 ;
-(void)saveEditedName:(id)arg0 specifier:(id)arg1 ;
-(void)suspend;
-(void)textDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif