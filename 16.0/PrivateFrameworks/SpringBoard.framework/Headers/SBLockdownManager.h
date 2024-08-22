// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKDOWNMANAGER_H
#define SBLOCKDOWNMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBDismissOnlyAlertItem.h"

@interface SBLockdownManager : NSObject {
    int _state;
    BOOL _settingUpActivationState;
    SBDismissOnlyAlertItem *_activatingAlertItem;
    NSString *_unqiueDeviceIdentifier;
}




+(id)sharedInstance;
-(BOOL)brickedDevice;
-(id)init;
-(int)lockdownState;
-(void)_resetActivationState;
-(void)_setupActivationState;


@end


#endif