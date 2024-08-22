// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPACCESSORYHARDWAREUSB_H
#define UARPACCESSORYHARDWAREUSB_H



#import "UARPAccessoryHardwareID.h"

@interface UARPAccessoryHardwareUSB : UARPAccessoryHardwareID

@property (readonly) unsigned short productID; // ivar: _productID
@property (readonly) unsigned short vendorID; // ivar: _vendorID


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithVendorID:(unsigned short)arg0 productID:(unsigned short)arg1 ;


@end


#endif