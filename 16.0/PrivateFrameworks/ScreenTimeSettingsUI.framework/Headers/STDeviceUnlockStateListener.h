// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDEVICEUNLOCKSTATELISTENER_H
#define STDEVICEUNLOCKSTATELISTENER_H


#import <Foundation/Foundation.h>


@interface STDeviceUnlockStateListener : NSObject {
    int _notifyToken;
}


@property (readonly, nonatomic) BOOL deviceIsLocked;
@property (copy, nonatomic) id *lockStateChangeHandler; // ivar: _lockStateChangeHandler


-(id)init;
-(void)dealloc;


@end


#endif