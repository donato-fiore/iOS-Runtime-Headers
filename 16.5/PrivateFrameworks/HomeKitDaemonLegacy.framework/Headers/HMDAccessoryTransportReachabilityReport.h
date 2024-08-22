// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYTRANSPORTREACHABILITYREPORT_H
#define HMDACCESSORYTRANSPORTREACHABILITYREPORT_H

@class HMFObject, NSString, NSDate;



@interface HMDAccessoryTransportReachabilityReport : HMFObject

@property (readonly, nonatomic) BOOL hasAdvertisement; // ivar: _hasAdvertisement
@property (readonly, copy, nonatomic) NSString *linkType; // ivar: _linkType
@property (readonly, copy, nonatomic) NSString *protocol; // ivar: _protocol
@property (readonly, copy, nonatomic) NSString *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic) NSDate *reachableLastChangedTime; // ivar: _reachableLastChangedTime
@property (copy, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithLinkType:(id)arg0 hasAdvertisement:(BOOL)arg1 protocol:(id)arg2 protocolVersion:(id)arg3 reachable:(BOOL)arg4 reachableLastChangedTime:(id)arg5 reason:(id)arg6 ;


@end


#endif