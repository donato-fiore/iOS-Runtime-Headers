// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLOCKSTATEMONITOR_H
#define MFLOCKSTATEMONITOR_H

@class EFObservable<EFObserver>, EFObservable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    EFObservable<EFObserver> *_observable;
    BOOL _isLocked;
}


@property (readonly, nonatomic) EFObservable *lockStateObservable;
@property (readonly, getter=isLocked) BOOL locked;


+(id)sharedInstance;
-(id)init;
-(void)_receiveLockState:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif