// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFAPPSTATEMONITOR_H
#define MFAPPSTATEMONITOR_H

@class BKSApplicationStateMonitor, EFObservable<EFObserver>, EFObservable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFAppStateMonitor : NSObject {
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    EFObservable<EFObserver> *_observable;
}


@property (readonly, nonatomic) EFObservable *appStateObservable;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;


+(id)sharedInstance;
-(id)initWithBundleId:(id)arg0 ;
-(void)_updateApplicationState:(id)arg0 observer:(id)arg1 ;
-(void)dealloc;


@end


#endif