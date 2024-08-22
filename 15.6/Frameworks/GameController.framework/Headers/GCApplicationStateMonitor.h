// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCAPPLICATIONSTATEMONITOR_H
#define GCAPPLICATIONSTATEMONITOR_H

@class BKSApplicationStateMonitor, NSMapTable, NSMutableDictionary, NSString;
@protocol GCFrontmostApplicationObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GCApplicationStateMonitor : NSObject <GCFrontmostApplicationObserverDelegate>

 {
    BKSApplicationStateMonitor *_bksStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_pidToObservers;
    NSMapTable *_observerToPIDs;
    NSMutableDictionary *_pidToBundleIdentifier;
    NSMutableDictionary *_pidToCanReceiveEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frontmostApplication; // ivar: _frontmostApplication
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)applicationCanReceiveEvents:(int)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 forProcessIdentifier:(int)arg1 ;
-(void)dealloc;
-(void)initializeForegroundMonitor;
-(void)initializeStateMonitor;
-(void)onFrontmostApplicationChanged:(int)arg0 ;
-(void)removeApplicationFromCanReceiveEventsMonitoring:(int)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forProcessIdentifier:(int)arg1 ;
-(void)setApplicationCanReceiveEvents:(BOOL)arg0 forPID:(int)arg1 ;
-(void)updateInterestedBundleIDs;


@end


#endif