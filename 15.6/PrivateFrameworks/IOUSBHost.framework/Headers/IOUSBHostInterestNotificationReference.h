// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOUSBHOSTINTERESTNOTIFICATIONREFERENCE_H
#define IOUSBHOSTINTERESTNOTIFICATIONREFERENCE_H

@class NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "IOUSBHostObject.h"

@interface IOUSBHostInterestNotificationReference : NSObject

@property (weak) IOUSBHostObject *hostObject; // ivar: _hostObject
@property (retain) NSRecursiveLock *interestNotificationLock; // ivar: _interestNotificationLock
@property BOOL interestNotificationPortDestroyed; // ivar: _interestNotificationPortDestroyed


-(id)initWithHostObject:(id)arg0 ;


@end


#endif