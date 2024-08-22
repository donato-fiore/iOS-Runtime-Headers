// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYTRANSPORTINFORMATION_H
#define HMDACCESSORYTRANSPORTINFORMATION_H

@class HMFObject, HAPAccessory, NSNumber, NSString, NSDate;
@protocol NSSecureCoding;



@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (retain) HAPAccessory *hapAccessory; // ivar: _hapAccessory
@property (readonly, copy, nonatomic) NSNumber *instanceID; // ivar: _instanceID
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (copy) NSString *protocolVersion; // ivar: _protocolVersion
@property (getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, copy) NSDate *reachableLastChangedTime; // ivar: _reachableLastChangedTime
@property (readonly, copy, nonatomic) NSString *serverIdentifier; // ivar: _serverIdentifier


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerIdentifier:(id)arg0 instanceID:(id)arg1 linkType:(NSInteger)arg2 ;
-(id)report;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif