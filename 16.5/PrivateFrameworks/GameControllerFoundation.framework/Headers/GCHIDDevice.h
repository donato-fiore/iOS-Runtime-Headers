// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHIDDEVICE_H
#define GCHIDDEVICE_H

@class HIDDevice, NSArray, NSString, NSNumber;
@protocol GCHIDDeviceAttributes;



@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>



@property (readonly) NSArray *elements;
@property (readonly) NSString *manufacturer;
@property (readonly) NSNumber *maxFeatureReportSize;
@property (readonly) NSNumber *maxInputReportSize;
@property (readonly) NSNumber *maxOutputReportSize;
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