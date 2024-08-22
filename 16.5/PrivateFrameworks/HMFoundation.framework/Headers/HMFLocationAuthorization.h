// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFLOCATIONAUTHORIZATION_H
#define HMFLOCATIONAUTHORIZATION_H

@class NSMutableSet, NSBundle, NSString, CLLocationManager;
@protocol CLLocationManagerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMFObject.h"
#import "__HMFLocationAuthorizationRequest.h"
#import "__HMFLocationAuthorizationMarkOperation.h"

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging>

 {
    hmf_unfair_data_lock_s _lock;
    int _status;
    NSInteger _state;
    NSMutableSet *_observers;
    __HMFLocationAuthorizationRequest *_request;
    __HMFLocationAuthorizationMarkOperation *_operation;
}


@property (readonly, getter=isAuthorized) BOOL authorized;
@property (readonly) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CLLocationManager *internal; // ivar: _internal
@property (readonly, getter=isMonitoring) BOOL monitoring;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) int status;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
+(id)sharedAuthorization;
+(void)initialize;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)locationOperationCompleted;
-(void)mark;
-(void)registerObserver:(id)arg0 ;
-(void)requestAuthorization:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif