// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLOCATIONAUTHORIZATION_H
#define CALLOCATIONAUTHORIZATION_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CalLocationAuthorizationStatus.h"

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate>

 {
    id *_bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)preciseLocationAuthorizedForBundle:(id)arg0 ;
+(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg0 ;
+(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg0 bundle:(id)arg1 ;
+(NSUInteger)locationPrecisionForBundleIdentifier:(id)arg0 ;
+(NSUInteger)locationPrecisionForBundleIdentifier:(id)arg0 bundle:(id)arg1 ;
+(NSUInteger)ttlLocationStatus;
+(id)_cachedInstanceForBundleID:(id)arg0 bundle:(id)arg1 ;
+(id)_keyForBundleID:(id)arg0 bundle:(id)arg1 ;
+(id)authorizationForBundleIdentifier:(id)arg0 bundle:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)locationAuthorizationAsyncCallersQueue;
+(id)logHandle;
+(int)authorizationStatusForBundle:(id)arg0 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg0 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg0 bundle:(id)arg1 ;
+(void)authorizationStatusForBundle:(id)arg0 completion:(id)arg1 ;
+(void)authorizationStatusForBundleIdentifier:(id)arg0 bundle:(id)arg1 completion:(id)arg2 ;
+(void)authorizationStatusForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)initializeQueueAndInstancesIfNeeded;
+(void)preciseLocationAuthorizedForBundle:(id)arg0 completion:(id)arg1 ;
+(void)preciseLocationAuthorizedForBundleIdentifier:(id)arg0 bundle:(id)arg1 completion:(id)arg2 ;
+(void)preciseLocationAuthorizedForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)ttlLocationStatusWithCompletion:(id)arg0 ;
-(NSUInteger)waitForPrecision;
-(id)authorizationStatus;
-(id)initWithBundleID:(id)arg0 bundle:(id)arg1 queue:(id)arg2 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;


@end


#endif