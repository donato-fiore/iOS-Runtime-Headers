// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGDEVICENAMEEDITINGCONTROLLER_H
#define PSGDEVICENAMEEDITINGCONTROLLER_H

@class PSListController, NSString;



@interface PSGDeviceNameEditingController : PSListController

@property (retain, nonatomic) id *effectiveSettingsChangedNotificationObserver; // ivar: _effectiveSettingsChangedNotificationObserver
@property (retain, nonatomic) NSString *originalDeviceName; // ivar: _originalDeviceName


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)_editedDeviceName;
-(id)deviceName:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif