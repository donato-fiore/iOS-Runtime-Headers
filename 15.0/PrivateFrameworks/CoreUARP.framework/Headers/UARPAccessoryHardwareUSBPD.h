// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPACCESSORYHARDWAREUSBPD_H
#define UARPACCESSORYHARDWAREUSBPD_H



#import "UARPAccessoryHardwareID.h"

@interface UARPAccessoryHardwareUSBPD : UARPAccessoryHardwareID

@property (readonly) NSInteger location; // ivar: _location
@property (readonly) unsigned short productID; // ivar: _productID
@property (readonly) unsigned short vendorID; // ivar: _vendorID


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithVendorID:(unsigned short)arg0 productID:(unsigned short)arg1 ;
-(id)initWithVendorID:(unsigned short)arg0 productID:(unsigned short)arg1 usbpdClass:(NSInteger)arg2 locationType:(NSInteger)arg3 ;


@end


#endif