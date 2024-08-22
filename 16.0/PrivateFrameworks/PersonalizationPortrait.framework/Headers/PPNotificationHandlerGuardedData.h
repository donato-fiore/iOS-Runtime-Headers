// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPNOTIFICATIONHANDLERGUARDEDDATA_H
#define PPNOTIFICATIONHANDLERGUARDEDDATA_H

@class NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PPNotificationHandlerGuardedData : NSObject {
    BOOL _delayedFiringInProgress;
    CGFloat _lastFiringTimeSince1970;
    NSMapTable *_blockMap;
    NSMutableSet *_objects;
}




-(id)init;


@end


#endif