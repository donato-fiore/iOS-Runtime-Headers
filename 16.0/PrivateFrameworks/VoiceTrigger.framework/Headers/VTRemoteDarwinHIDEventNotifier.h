// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTREMOTEDARWINHIDEVENTNOTIFIER_H
#define VTREMOTEDARWINHIDEVENTNOTIFIER_H


#import <Foundation/Foundation.h>


@interface VTRemoteDarwinHIDEventNotifier : NSObject

@property (nonatomic) *__IOHIDManager hidManager; // ivar: _hidManager


-(id)init;
-(void)_registerHIDEventNotification;
-(void)startObserving;


@end


#endif