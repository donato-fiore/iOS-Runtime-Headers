// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCHIDDEVICE_H
#define GCHIDDEVICE_H

@class HIDDevice, NSString, NSNumber;
@protocol GCHIDDeviceAttributes;



@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>



@property (readonly) NSString *manufacturer;
@property (readonly) NSString *product;
@property (readonly) NSNumber *productID;
@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *versionNumber;


-(id)debugDescription;
-(id)init;
-(id)initWithService:(unsigned int)arg0 ;
-(id)valueForHIDDeviceKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;


@end


#endif