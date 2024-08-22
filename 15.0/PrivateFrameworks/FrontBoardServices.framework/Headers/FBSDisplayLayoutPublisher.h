// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSDISPLAYLAYOUTPUBLISHER_H
#define FBSDISPLAYLAYOUTPUBLISHER_H

@class BSAtomicSignal, BSServiceConnectionListener, NSMutableSet, NSHashTable, NSMutableOrderedSet, NSString;
@protocol BSServiceConnectionListenerDelegate, BSInvalidatable, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "FBSDisplayLayout.h"
#import "FBSDisplayConfiguration.h"

@interface FBSDisplayLayoutPublisher : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable>

 {
    BSAtomicSignal *_invalidatedSignal;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue>" _queuesByQOS;
    NSObject<OS_xpc_object>" _queues_xLayoutByQOS;
    NSMutableSet" _queues_connectionsByQOS;
    FBSDisplayLayout *_mutableLayout;
    NSMutableSet *_mutableElementKeys;
    NSHashTable *_observers;
    NSObject<OS_xpc_object> *_xLayout;
    FBSDisplayLayout *_currentLayout;
    NSMutableOrderedSet *_transitionReasons;
    NSUInteger _transitionsCount;
    BOOL _dirty;
}


@property (nonatomic) NSInteger backlightLevel;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interfaceOrientation;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


+(id)publisherWithConfiguration:(id)arg0 ;
-(id)_addElement:(id)arg0 forKey:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg0 ;
-(id)addElement:(id)arg0 ;
-(id)init;
-(id)transitionAssertionWithReason:(id)arg0 ;
-(void)activate;
-(void)addObserver:(id)arg0 ;
-(void)flush;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif