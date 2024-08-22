// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTROUTERMANAGER_H
#define BKSHIDEVENTROUTERMANAGER_H

@class NSMutableArray, NSString, NSArray;
@protocol _BKSHIDEventRouterDelegate, BSDescriptionProviding, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDeliveryManager.h"

@interface BKSHIDEventRouterManager : NSObject <_BKSHIDEventRouterDelegate, BSDescriptionProviding>

 {
    BKSHIDEventDeliveryManager *_deliveryManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_routers;
    BOOL _queue_needsFlush;
    id<BSInvalidatable> *_queue_dispatchingRulesAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *eventRouters;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_initWithDeliveryManager:(id)arg0 ;
-(id)_queue_succinctDescriptionBuilder;
-(id)_targetForDestination:(NSInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_queue_flush;
-(void)_queue_routerDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif