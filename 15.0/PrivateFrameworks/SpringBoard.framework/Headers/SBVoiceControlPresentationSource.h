// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVOICECONTROLPRESENTATIONSOURCE_H
#define SBVOICECONTROLPRESENTATIONSOURCE_H

@class BluetoothDevice;

#import <Foundation/Foundation.h>


@interface SBVoiceControlPresentationSource : NSObject

@property (readonly, nonatomic) BluetoothDevice *bluetoothDevice; // ivar: _bluetoothDevice
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType


+(id)sourceFromBluetoothDevice:(id)arg0 ;
+(id)sourceFromHeadsetButton;
+(id)sourceFromHomeButton;
-(id)_initWithSourceType:(NSInteger)arg0 ;


@end


#endif