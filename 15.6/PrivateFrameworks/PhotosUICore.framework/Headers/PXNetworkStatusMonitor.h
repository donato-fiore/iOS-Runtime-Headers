// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNETWORKSTATUSMONITOR_H
#define PXNETWORKSTATUSMONITOR_H

@class NSMapTable;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXNetworkStatusMonitor : NSObject {
    NSObject<OS_nw_path_monitor> *_defaultPathMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_observers;
    ? queue_bestAvailableNetworkType;
}


@property (readonly) ? bestAvailableNetworkType;


+(id)sharedInstance;
-(id)init;
-(void)_queue_handlePathUpdate:(id)arg0 ;
-(void)_queue_notifyObserversOfBestAvailableNetworkType:(struct ? )arg0 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;


@end


#endif