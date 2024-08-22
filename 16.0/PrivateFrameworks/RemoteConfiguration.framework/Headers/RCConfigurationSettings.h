// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCCONFIGURATIONSETTINGS_H
#define RCCONFIGURATIONSETTINGS_H

@class NSString, NSURL, NSArray;
@protocol RCSerializable;

#import <Foundation/Foundation.h>

#import "RCDebugOverrides.h"
#import "RCDeviceInfo.h"

@interface RCConfigurationSettings : NSObject <RCSerializable>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RCDebugOverrides *debugOverrides; // ivar: _debugOverrides
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) CGFloat endpointTimeoutDuration; // ivar: _endpointTimeoutDuration
@property (readonly, nonatomic) CGFloat fallbackTimeoutDuration; // ivar: _fallbackTimeoutDuration
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) NSArray *requestInfos; // ivar: _requestInfos
@property (readonly, nonatomic) NSUInteger requestMode; // ivar: _requestMode
@property (readonly, copy, nonatomic) NSString *storefrontID; // ivar: _storefrontID
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useBackgroundRefreshRate; // ivar: _useBackgroundRefreshRate
@property (readonly, copy, nonatomic) NSString *userID; // ivar: _userID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithRequestInfos:(id)arg0 userID:(id)arg1 storefrontID:(id)arg2 bundleID:(id)arg3 deviceInfo:(id)arg4 debugOverrides:(id)arg5 ;
-(id)initWithRequestInfos:(id)arg0 userID:(id)arg1 storefrontID:(id)arg2 bundleID:(id)arg3 deviceInfo:(id)arg4 debugOverrides:(id)arg5 useBackgroundRefreshRate:(BOOL)arg6 ;
-(id)initWithRequestInfos:(id)arg0 userID:(id)arg1 storefrontID:(id)arg2 bundleID:(id)arg3 deviceInfo:(id)arg4 debugOverrides:(id)arg5 useBackgroundRefreshRate:(BOOL)arg6 requestMode:(NSUInteger)arg7 ;
-(id)initWithRequestInfos:(id)arg0 userID:(id)arg1 storefrontID:(id)arg2 bundleID:(id)arg3 deviceInfo:(id)arg4 debugOverrides:(id)arg5 useBackgroundRefreshRate:(BOOL)arg6 requestMode:(NSUInteger)arg7 endpointTimeoutDuration:(CGFloat)arg8 ;
-(id)initWithRequestInfos:(id)arg0 userID:(id)arg1 storefrontID:(id)arg2 bundleID:(id)arg3 deviceInfo:(id)arg4 debugOverrides:(id)arg5 useBackgroundRefreshRate:(BOOL)arg6 requestMode:(NSUInteger)arg7 endpointTimeoutDuration:(CGFloat)arg8 fallbackTimeoutDuration:(CGFloat)arg9 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 requestMode:(NSUInteger)arg8 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 useBackgroundRefreshRate:(BOOL)arg8 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 useBackgroundRefreshRate:(BOOL)arg8 requestMode:(NSUInteger)arg9 endpointTimeoutDuration:(CGFloat)arg10 ;
-(id)initWithRequestKey:(id)arg0 responseKey:(id)arg1 fallbackURL:(id)arg2 userID:(id)arg3 storefrontID:(id)arg4 bundleID:(id)arg5 deviceInfo:(id)arg6 debugOverrides:(id)arg7 useBackgroundRefreshRate:(BOOL)arg8 requestMode:(NSUInteger)arg9 endpointTimeoutDuration:(CGFloat)arg10 fallbackTimeoutDuration:(CGFloat)arg11 ;


@end


#endif