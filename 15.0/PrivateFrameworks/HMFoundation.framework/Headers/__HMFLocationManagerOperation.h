// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __HMFLOCATIONMANAGEROPERATION_H
#define __HMFLOCATIONMANAGEROPERATION_H

@class NSString, CLLocationManager;
@protocol HMFLogging;


#import "HMFOperation.h"
#import "HMFLocationAuthorization.h"

@interface __HMFLocationManagerOperation : HMFOperation <HMFLogging>

 {
    os_unfair_lock_s _lock;
    BOOL _ready;
}


@property (readonly) HMFLocationAuthorization *authorization; // ivar: _authorization
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CLLocationManager *manager; // ivar: _manager
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
+(void)initialize;
-(BOOL)isReady;
-(id)initWithAuthorization:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(void)dealloc;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif