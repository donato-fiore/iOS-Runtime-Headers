// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _FBSDISPLAYLAYOUTSERVICE_H
#define _FBSDISPLAYLAYOUTSERVICE_H

@class BSServiceConnectionEndpoint, BSServiceConnection, NSMapTable, NSString;
@protocol BSInvalidatable, FBSDisplayLayoutMonitorClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSDisplayLayout.h"

@interface _FBSDisplayLayoutService : NSObject <BSInvalidatable, FBSDisplayLayoutMonitorClientInterface>

 {
    BSServiceConnectionEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BSServiceConnection *_connection;
    os_unfair_lock_s _lock;
    NSMapTable *_lock_keyedObservers;
    FBSDisplayLayout *_lock_layout;
    NSUInteger _lock_layoutGeneration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithEndpoint:(id)arg0 qos:(char)arg1 ;
-(id)currentLayout;
-(id)endpoint;
// -(void)addObserver:(id)arg0 forKey:(unk)arg1  ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserverForKey:(id)arg0 ;
-(void)updateLayout:(id)arg0 withTransition:(id)arg1 ;


@end


#endif