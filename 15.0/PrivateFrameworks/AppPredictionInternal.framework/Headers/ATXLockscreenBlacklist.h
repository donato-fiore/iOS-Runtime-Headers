// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXLOCKSCREENBLACKLIST_H
#define ATXLOCKSCREENBLACKLIST_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id *_notificationCenterToken;
    int _libnotifyToken;
}




+(id)sharedInstance;
-(BOOL)isPredictionGloballyDisabled;
-(id)blacklist;
-(id)init;
-(void)dealloc;


@end


#endif