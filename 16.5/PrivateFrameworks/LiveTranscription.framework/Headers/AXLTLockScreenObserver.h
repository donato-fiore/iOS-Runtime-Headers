// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTLOCKSCREENOBSERVER_H
#define AXLTLOCKSCREENOBSERVER_H

@protocol AXLTLockScreenObserverDelegate;

#import <Foundation/Foundation.h>


@interface AXLTLockScreenObserver : NSObject {
    int _notifyLockStateToken;
    BOOL _isScreenLocked;
}


@property (weak, nonatomic) NSObject<AXLTLockScreenObserverDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_registerScreenNotification;
-(void)_updateScreenLock:(int)arg0 ;


@end


#endif