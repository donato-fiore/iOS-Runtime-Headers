// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRVIEWSERVICECONFIGCONTEXT_H
#define TVRVIEWSERVICECONFIGCONTEXT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface TVRViewServiceConfigContext : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, nonatomic) NSInteger deviceIdentifierType; // ivar: _deviceIdentifierType
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (copy, nonatomic) id *dismissalAnimations; // ivar: _dismissalAnimations
@property (nonatomic) NSUInteger dismissalType; // ivar: _dismissalType
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier; // ivar: _lastActiveEndpointIdentifier
@property (readonly, nonatomic) NSInteger launchContext; // ivar: _launchContext
@property (readonly, nonatomic) NSInteger launchMethod; // ivar: _launchMethod
@property (copy, nonatomic) id *presentationAnimations; // ivar: _presentationAnimations
@property (readonly, nonatomic) NSDictionary *userInfo;


-(id)_initWithLaunchContext:(NSInteger)arg0 ;
-(id)_initWithUserInfo:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDeviceIdentifier:(id)arg0 identifierType:(NSInteger)arg1 deviceType:(NSInteger)arg2 launchContext:(NSInteger)arg3 ;
-(id)initWithDeviceIdentifier:(id)arg0 identifierType:(NSInteger)arg1 deviceType:(NSInteger)arg2 launchContext:(NSInteger)arg3 launchMethod:(NSInteger)arg4 ;
-(void)_commonInit;


@end


#endif