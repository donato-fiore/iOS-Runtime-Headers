// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFAPPSTATEMONITOR_H
#define MFAPPSTATEMONITOR_H

@class RBSProcessMonitor, EFObservable<EFObserver>, EFObservable;

#import <Foundation/Foundation.h>


@interface MFAppStateMonitor : NSObject {
    uint8_t _isVisible;
    RBSProcessMonitor *_underlyingMonitor;
    EFObservable<EFObserver> *_observable;
}


@property (readonly, nonatomic) EFObservable *appIsVisibleObservable;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


+(id)sharedInstance;
-(id)initWithBundleId:(id)arg0 ;
-(void)dealloc;


@end


#endif