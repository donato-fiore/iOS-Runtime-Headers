// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXWIDGETLOCATIONAUTHORIZATIONTRACKER_H
#define ATXWIDGETLOCATIONAUTHORIZATIONTRACKER_H

@class NSString, CLLocationManager, NSNumber;
@protocol CLLocationManagerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ATXWidgetLocationAuthorizationTracker : NSObject <CLLocationManagerDelegate>

 {
    NSString *_containerBundleIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sem;
    CLLocationManager *_manager;
}


@property (retain) NSNumber *atomicNullableIsAuthorizedForWidgetUpdates; // ivar: _atomicNullableIsAuthorizedForWidgetUpdates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAuthorizedForWidgetUpdates;
-(id)initWithContainerBundleIdentifier:(id)arg0 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif