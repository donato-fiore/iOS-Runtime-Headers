// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPBTLESERVICESIGNATURE_H
#define HAPBTLESERVICESIGNATURE_H

@class HMFObject, NSArray, NSNumber, NSUUID;



@interface HAPBTLEServiceSignature : HMFObject

@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) NSArray *linkedServices; // ivar: _linkedServices
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID; // ivar: _serviceInstanceID
@property (readonly, nonatomic) NSUInteger serviceProperties; // ivar: _serviceProperties
@property (readonly, copy, nonatomic) NSUUID *serviceType; // ivar: _serviceType


-(id)description;
-(id)initWithServiceType:(id)arg0 serviceInstanceID:(id)arg1 serviceProperties:(NSUInteger)arg2 linkedServices:(id)arg3 authenticated:(BOOL)arg4 ;


@end


#endif