// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVICE_H
#define HMDEVICE_H

@class NSArray, NSString, NSUUID, HMFProductInfo, HMFKey;
@protocol HMFObject, HMObjectMerge, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMDevice : NSObject <HMFObject, HMObjectMerge, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *idsDestination; // ivar: _idsDestination
@property (copy) NSUUID *idsIdentifier; // ivar: _idsIdentifier
@property (copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (copy) HMFProductInfo *productInfo; // ivar: _productInfo
@property (readonly, copy) NSString *propertyDescription;
@property (copy) HMFKey *rapportIRK; // ivar: _rapportIRK
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property BOOL supportsHH2; // ivar: _supportsHH2
@property (readonly, copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)IDSDestinationForIDSService:(id)arg0 ;
-(id)IDSDeviceForIDSService:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 isCurrentDevice:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif