// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTEREGISTRATIONREQUEST_H
#define PKREMOTEREGISTRATIONREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>



@property (nonatomic) BOOL registerBroker; // ivar: _registerBroker
@property (nonatomic) BOOL registerPeerPayment; // ivar: _registerPeerPayment


+(BOOL)supportsSecureCoding;
+(id)remoteRegistrationRequestWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteRegistrationRequest:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif