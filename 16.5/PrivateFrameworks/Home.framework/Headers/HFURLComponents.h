// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFURLCOMPONENTS_H
#define HFURLCOMPONENTS_H

@class NSURL, NAFuture, NSISO8601DateFormatter;

#import <Foundation/Foundation.h>

#import "HFHomeKitDispatcher.h"

@interface HFURLComponents : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger destination;
@property (readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher; // ivar: _homeKitDispatcher
@property (readonly, nonatomic) NAFuture *homeKitObjectFuture;
@property (retain, nonatomic) NSISO8601DateFormatter *isoDateFormatter; // ivar: _isoDateFormatter
@property (readonly, nonatomic) NSUInteger secondaryDestination;


+(BOOL)isHomeAppURL:(id)arg0 ;
+(id)_URLComponentsForDestination:(NSUInteger)arg0 ;
+(id)_privateSettingsURLHostString:(id)arg0 UUID:(id)arg1 forHome:(id)arg2 ;
+(id)_settingsURLHostString:(id)arg0 UUID:(id)arg1 forHome:(id)arg2 ;
+(id)_settingsURLHostString:(id)arg0 forHome:(id)arg1 ;
+(id)_settingsURLHostString:(id)arg0 scheme:(id)arg1 UUID:(id)arg2 forHome:(id)arg3 ;
+(id)accessoryDetailsURLForAccessory:(id)arg0 home:(id)arg1 ;
+(id)bridgeSettingsURLForAccessory:(id)arg0 home:(id)arg1 ;
+(id)cameraProfileDetailsURLForCameraProfile:(id)arg0 home:(id)arg1 ;
+(id)connectedServicesURLForAccessory:(id)arg0 home:(id)arg1 ;
+(id)faceRecognitionSettingsURLForHome:(id)arg0 ;
+(id)fixSymptomURLForAccessory:(id)arg0 symptom:(id)arg1 ;
+(id)fixSymptomURLForAccessoryWithUUID:(id)arg0 symptom:(id)arg1 ;
+(id)homeKitObjectURLForDestination:(NSUInteger)arg0 secondaryDestination:(NSUInteger)arg1 UUID:(id)arg2 ;
+(id)homeKitObjectURLForDestination:(NSUInteger)arg0 secondaryDestination:(NSUInteger)arg1 UUID:(id)arg2 queryItems:(id)arg3 ;
+(id)locksOnboardingURLForHome:(id)arg0 ;
+(id)networkRouterSettingsURLForHome:(id)arg0 ;
+(id)personalRequestsOptInURLForHomeID:(id)arg0 ;
+(id)roomURLForRoom:(id)arg0 ;
+(id)serviceDetailsURLForService:(id)arg0 home:(id)arg1 ;
+(id)symptomFromURL:(id)arg0 accessory:(id)arg1 ;
+(id)userLockSettingsURLForHome:(id)arg0 ;
-(id)_homeKitIdentifier;
-(id)dateForParameter:(id)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 homeKitDispatcher:(id)arg1 ;
-(id)valueForParameter:(id)arg0 ;


@end


#endif