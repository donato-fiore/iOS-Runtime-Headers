// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCROIOHIDELEMENT_H
#define SCROIOHIDELEMENT_H

@class NSString;
@protocol SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol;


#import "SCROIOElement.h"

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol>

 {
    *__IOHIDDevice _hidDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) unsigned int productId;
@property (readonly, nonatomic) NSString *productName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int vendorId;


-(*void)hidDevice;
-(id)bluetoothAddress;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIOObject:(unsigned int)arg0 ;
-(int)transport;
-(void)dealloc;


@end


#endif