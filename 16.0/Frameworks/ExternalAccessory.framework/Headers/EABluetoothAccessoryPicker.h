// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EABLUETOOTHACCESSORYPICKER_H
#define EABLUETOOTHACCESSORYPICKER_H

@class BTDevicePicker, NSString;
@protocol BTDevicePickerDelegate, EABluetoothAccessoryPickerDelegate;

#import <Foundation/Foundation.h>


@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate>

 {
    BTDevicePicker *_picker;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<EABluetoothAccessoryPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)wakeSelectedBluetoothAccessories:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)dealloc;
-(void)devicePicker:(id)arg0 didDismissWithResult:(NSInteger)arg1 deviceAddress:(id)arg2 ;
-(void)dismissPicker;
-(void)show;


@end


#endif