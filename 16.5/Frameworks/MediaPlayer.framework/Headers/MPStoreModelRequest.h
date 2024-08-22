// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREMODELREQUEST_H
#define MPSTOREMODELREQUEST_H

@class NSString;


#import "MPModelRequest.h"

@interface MPStoreModelRequest : MPModelRequest {
    BOOL _didSetTimeoutInterval;
}


@property (nonatomic) NSUInteger authenticationOptions; // ivar: _authenticationOptions
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *clientPlatformIdentifier; // ivar: _clientPlatformIdentifier
@property (copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(BOOL)requiresNetwork;
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif