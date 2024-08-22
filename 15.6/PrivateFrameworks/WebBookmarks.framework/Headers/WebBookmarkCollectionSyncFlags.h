// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBBOOKMARKCOLLECTIONSYNCFLAGS_H
#define WEBBOOKMARKCOLLECTIONSYNCFLAGS_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface WebBookmarkCollectionSyncFlags : NSObject

@property (readonly, nonatomic) NSMutableSet *lockSyncHoldRequestorPointers; // ivar: _lockSyncHoldRequestorPointers
@property (nonatomic) BOOL postSyncNotificationWhenUnlocking; // ivar: _postSyncNotificationWhenUnlocking
@property (readonly, nonatomic) BOOL syncAllowed; // ivar: _syncAllowed
@property (nonatomic) int syncLockFileDescriptor; // ivar: _syncLockFileDescriptor
@property (nonatomic) NSInteger syncNotificationType; // ivar: _syncNotificationType
@property (nonatomic) BOOL unlockSyncRequested; // ivar: _unlockSyncRequested


-(id)initWithSyncAllowed:(BOOL)arg0 ;


@end


#endif