// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSHIDEVENTOBSERVER_H
#define BKSHIDEVENTOBSERVER_H

@class NSMapTable, NSSet, BSServiceConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSHIDEventObserver : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    os_unfair_lock_s _lock;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringResolutions;
    BSServiceConnection *_connection;
}


@property (readonly, nonatomic) NSSet *deferringResolutions;


+(id)sharedInstance;
-(id)_init;
-(id)addDeferringObserver:(id)arg0 ;
-(id)init;
-(void)_lock_disableObservation;
-(void)_lock_enableObservation;
-(void)didUpdateDeferringResolutions:(id)arg0 ;


@end


#endif