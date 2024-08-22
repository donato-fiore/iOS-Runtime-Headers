// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFLOCKDEVICEREQUEST_H
#define DMFLOCKDEVICEREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFLockDeviceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSString *pin; // ivar: _pin


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif