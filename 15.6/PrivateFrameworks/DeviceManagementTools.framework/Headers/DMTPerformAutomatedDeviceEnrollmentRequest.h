// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTPERFORMAUTOMATEDDEVICEENROLLMENTREQUEST_H
#define DMTPERFORMAUTOMATEDDEVICEENROLLMENTREQUEST_H

@class CATTaskRequest, NSData, NSString;


#import "DMTNetworkCredential.h"

@interface DMTPerformAutomatedDeviceEnrollmentRequest : CATTaskRequest

@property (nonatomic) NSInteger automationBehavior; // ivar: _automationBehavior
@property (copy, nonatomic) DMTNetworkCredential *networkCredential; // ivar: _networkCredential
@property (retain, nonatomic) NSData *networkPayload; // ivar: _networkPayload
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (nonatomic) NSInteger organizationType; // ivar: _organizationType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif