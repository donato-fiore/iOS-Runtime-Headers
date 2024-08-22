// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(NSUInteger)locationPrecisionForBundle:(id)arg0 ;
+(NSUInteger)locationPrecisionForBundleIdentifier:(id)arg0 ;
+(NSUInteger)locationPrecisionForBundleIdentifier:(id)arg0 bundle:(id)arg1 ;
+(NSUInteger)ttlLocationStatus;
+(id)authorizationForBundleIdentifier:(id)arg0 bundle:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)logHandle;
+(int)authorizationStatusForBundle:(id)arg0 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg0 ;
+(int)authorizationStatusForBundleIdentifier:(id)arg0 bundle:(id)arg1 ;
-(NSUInteger)waitForPrecision;
-(id)authorizationStatus;
-(id)initWithBundleID:(id)arg0 bundle:(id)arg1 queue:(id)arg2 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;


@end


#endif