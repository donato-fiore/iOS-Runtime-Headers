// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDEVENTDELIVERYOBSERVERSERVICE_H
#define BKHIDEVENTDELIVERYOBSERVERSERVICE_H

@class BSMutableIntegerMap, NSMutableIndexSet, NSString;
@protocol BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver;

#import <Foundation/Foundation.h>

#import "BKHIDEventDeliveryObserverServiceListener.h"

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver>

 {
    BSMutableIntegerMap *_connectionsByPID;
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;
    NSMutableIndexSet *_observerPIDs;
    os_unfair_lock_s _lock;
    BSMutableIntegerMap *_resolutionsByPID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)setObservesDeferringResolutions:(id)arg0 ;
-(void)addConnection:(id)arg0 forPID:(int)arg1 ;
-(void)removeConnectionForPID:(int)arg0 ;
-(void)resolutionsDidChange:(id)arg0 forPID:(int)arg1 ;


@end


#endif