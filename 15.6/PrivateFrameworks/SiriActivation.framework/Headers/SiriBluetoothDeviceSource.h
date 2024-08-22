// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIBLUETOOTHDEVICESOURCE_H
#define SIRIBLUETOOTHDEVICESOURCE_H



#import "SiriLongPressButtonSource.h"
#import "SiriBluetoothContext.h"

@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource

@property (nonatomic) NSInteger buttonIdentifier; // ivar: _buttonIdentifier
@property (retain, nonatomic) SiriBluetoothContext *context; // ivar: _context
@property (nonatomic) CGFloat longPressInterval; // ivar: _longPressInterval


+(id)bluetoothDeviceForIdentifier:(NSInteger)arg0 bluetoothDevice:(id)arg1 ;
-(void)activate;
-(void)deactivate;


@end


#endif