// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _XREXPIREDPIDCACHE_H
#define _XREXPIREDPIDCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _XRExpiredPidCache : NSObject {
    TFPPidWatcher pidWatcher;
    int enableCount;
    NSMutableDictionary *signatures;
}






@end


#endif