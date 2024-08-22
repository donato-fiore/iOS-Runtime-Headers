// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKNOTIFICATIONCONFLICTCACHEOBJECT_H
#define CUIKNOTIFICATIONCONFLICTCACHEOBJECT_H

@class EKConflictDetails;

#import <Foundation/Foundation.h>


@interface CUIKNotificationConflictCacheObject : NSObject

@property (retain) EKConflictDetails *conflictInfo; // ivar: _conflictInfo
@property NSUInteger state; // ivar: _state


+(id)keyForNotification:(id)arg0 ;


@end


#endif