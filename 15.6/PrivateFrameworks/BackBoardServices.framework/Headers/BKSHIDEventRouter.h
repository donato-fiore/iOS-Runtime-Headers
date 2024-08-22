// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSHIDEVENTROUTER_H
#define BKSHIDEVENTROUTER_H

@class NSMutableSet, NSSet, NSString;
@protocol BSDescriptionProviding, OS_dispatch_queue, _BKSHIDEventRouterDelegate;

#import <Foundation/Foundation.h>


@interface BKSHIDEventRouter : NSObject <BSDescriptionProviding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_hidEventDescriptors;
    id<_BKSHIDEventRouterDelegate> *_queue_delegate;
    NSSet *_queue_cachedHidEventDescriptors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSSet *hidEventDescriptors;
@property (readonly) Class superclass;


+(id)defaultEventRouters;
+(id)defaultFocusedAppEventRouter;
+(id)defaultSystemAppEventRouter;
+(id)routerWithDestination:(NSInteger)arg0 ;
-(BOOL)containsDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)specifiesDescriptor:(id)arg0 ;
-(id)_initWithDestination:(NSInteger)arg0 hidEventDescriptors:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setDelegate:(id)arg0 ;
-(void)addHIDEventDescriptors:(id)arg0 ;
-(void)removeHIDEventDescriptors:(id)arg0 ;


@end


#endif