// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPACCESSORYHARDWAREBLUETOOTH_H
#define UARPACCESSORYHARDWAREBLUETOOTH_H



#import "UARPAccessoryHardwareID.h"

@interface UARPAccessoryHardwareBluetooth : UARPAccessoryHardwareID

@property (readonly) unsigned short productID; // ivar: _productID
@property (readonly) unsigned short productVersion; // ivar: _productVersion
@property (readonly) unsigned short vendorID; // ivar: _vendorID
@property (readonly) NSInteger vendorIDSource; // ivar: _vendorIDSource


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithVendorIDSource:(NSInteger)arg0 vendorID:(unsigned short)arg1 productID:(unsigned short)arg2 productVersion:(unsigned short)arg3 ;


@end


#endif