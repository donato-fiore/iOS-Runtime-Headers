// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICREQUESTCONTEXT_H
#define ICREQUESTCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICURLResponseAuthenticationProvider.h"
#import "ICClientInfo.h"
#import "ICDeviceInfo.h"
#import "ICNetworkConstraints.h"

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _allowsMutation;
}


@property (readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider; // ivar: _authenticationProvider
@property (readonly, copy, nonatomic) ICClientInfo *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) ICDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints; // ivar: _networkConstraints
@property (readonly, copy, nonatomic) NSString *userAgent;


+(BOOL)supportsSecureCoding;
-(BOOL)_allowsMutation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithClientInfo:(id)arg0 ;
-(id)initWithClientInfo:(id)arg0 authenticationProvider:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif