// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPAYMENTAPPLEIDAUTHORIZATIONREQUEST_H
#define SKPAYMENTAPPLEIDAUTHORIZATIONREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKPaymentAppleIDAuthorizationRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 teamIdentifier:(id)arg1 ;


@end


#endif