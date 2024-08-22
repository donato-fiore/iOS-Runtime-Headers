// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRESIDENTDEVICEELECTIONPARAMETERS_H
#define HMDRESIDENTDEVICEELECTIONPARAMETERS_H

@class HMFObject, HMFProductInfo, NSSet, NSArray, HMFBoolean;


#import "HMDHomeKitVersion.h"
#import "HMDResidentDevice.h"

@interface HMDResidentDeviceElectionParameters : HMFObject {
    HMFProductInfo *_productInfo;
    HMDHomeKitVersion *_version;
    NSSet *_accessories;
}


@property (readonly, copy) NSArray *accessories;
@property (readonly, copy, getter=isEnabled) HMFBoolean *enabled; // ivar: _enabled
@property (readonly) NSInteger location; // ivar: _location
@property (readonly) HMDResidentDevice *resident; // ivar: _resident


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithResident:(id)arg0 enabled:(id)arg1 location:(NSInteger)arg2 accessories:(id)arg3 ;
-(id)initWithResident:(id)arg0 serializedPayload:(id)arg1 ;
-(id)serializedPayload;


@end


#endif