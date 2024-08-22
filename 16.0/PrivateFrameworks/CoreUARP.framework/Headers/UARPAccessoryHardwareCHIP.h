// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPACCESSORYHARDWARECHIP_H
#define UARPACCESSORYHARDWARECHIP_H



#import "UARPAccessoryHardwareID.h"
#import "UARPAccessoryMetadata.h"

@interface UARPAccessoryHardwareCHIP : UARPAccessoryHardwareID

@property (readonly) unsigned short hwID; // ivar: _hwID
@property (readonly) UARPAccessoryMetadata *metadata; // ivar: _metadata
@property (readonly) unsigned short productID; // ivar: _productID
@property (readonly) unsigned short vendorID; // ivar: _vendorID


-(id)description;
-(id)initWithVendorID:(unsigned short)arg0 productID:(unsigned short)arg1 hardwareID:(unsigned short)arg2 metadata:(id)arg3 ;


@end


#endif