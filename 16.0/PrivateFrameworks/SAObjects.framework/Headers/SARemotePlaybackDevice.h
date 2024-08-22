// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMOTEPLAYBACKDEVICE_H
#define SAREMOTEPLAYBACKDEVICE_H

@class NSString, NSDictionary;
@protocol SABackgroundContextObject;


#import "SARemoteDevice.h"

@interface SARemotePlaybackDevice : SARemoteDevice <SABackgroundContextObject>



@property (copy, nonatomic) NSString *airPlayRouteId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *entitlementKey;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *storefront;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs;


+(id)remotePlaybackDevice;
+(id)remotePlaybackDeviceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif