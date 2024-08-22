// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPROCESSMONITOR_H
#define ARPROCESSMONITOR_H

@class RBSProcessMonitor, NSMutableDictionary;
@protocol ARProcessMonitorStateChangeDelegate;

#import <Foundation/Foundation.h>


@interface ARProcessMonitor : NSObject {
    RBSProcessMonitor *_processMonitor;
    NSMutableDictionary *_pidsToObserve;
    os_unfair_lock_s _pidsLock;
}


@property (weak, nonatomic) NSObject<ARProcessMonitorStateChangeDelegate> *delegate; // ivar: _delegate


+(BOOL)processIsDaemon:(int)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleStateUpdate:(id)arg0 ;
-(void)startMonitoringPID:(int)arg0 ;
-(void)stopMonitoringPID:(int)arg0 ;
-(void)updateProcessMonitorConfig:(id)arg0 withPredicates:(id)arg1 ;


@end


#endif