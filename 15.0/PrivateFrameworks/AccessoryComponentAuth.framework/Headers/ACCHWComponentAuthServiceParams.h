// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCHWCOMPONENTAUTHSERVICEPARAMS_H
#define ACCHWCOMPONENTAUTHSERVICEPARAMS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ACCHWComponentAuthServiceParams : NSObject

@property (nonatomic) unsigned int authFlags; // ivar: _authFlags
@property (retain, nonatomic) NSData *certificate; // ivar: _certificate
@property (retain, nonatomic) NSData *challenge; // ivar: _challenge
@property (retain, nonatomic) NSData *deviceNonce; // ivar: _deviceNonce
@property (nonatomic) unsigned int moduleAuthService; // ivar: _moduleAuthService
@property (retain, nonatomic) NSData *signature; // ivar: _signature




@end


#endif