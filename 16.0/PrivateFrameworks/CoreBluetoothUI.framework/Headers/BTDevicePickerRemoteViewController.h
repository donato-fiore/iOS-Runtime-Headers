// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BTDEVICEPICKERREMOTEVIEWCONTROLLER_H
#define BTDEVICEPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol BTDevicePickerRemoteViewControllerHost;



@interface BTDevicePickerRemoteViewController : UIRemoteViewController <BTDevicePickerRemoteViewControllerHost>



@property (weak, nonatomic) NSObject<BTDevicePickerRemoteViewControllerHost> *_delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didDismissWithResult:(NSInteger)arg0 deviceAddress:(id)arg1 ;
-(void)discoveredDevice:(id)arg0 deviceAddress:(id)arg1 ;


@end


#endif