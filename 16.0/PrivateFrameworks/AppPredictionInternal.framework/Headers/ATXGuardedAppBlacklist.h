// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXGUARDEDAPPBLACKLIST_H
#define ATXGUARDEDAPPBLACKLIST_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXGuardedAppBlacklist : NSObject {
    NSMutableSet *_blacklist;
    NSMutableDictionary *_prefsChangeHandlers;
    int _nextPrefsChangeHandlerToken;
}




-(id)init;


@end


#endif