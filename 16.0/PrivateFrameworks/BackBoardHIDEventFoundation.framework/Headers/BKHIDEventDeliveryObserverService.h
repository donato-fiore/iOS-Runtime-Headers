// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDEVENTDELIVERYOBSERVERSERVICE_H
#define BKHIDEVENTDELIVERYOBSERVERSERVICE_H

@class NSMutableIndexSet, BSMutableIntegerMap, NSString;
@protocol BKSHIDEventObserverServerInterface, BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver;

#import <Foundation/Foundation.h>

#import "BKHIDDomainServiceServer.h"

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver>

 {
    BKHIDDomainServiceServer *_server;
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
-(void)resolutionsDidChange:(id)arg0 forPID:(int)arg1 ;


@end


#endif