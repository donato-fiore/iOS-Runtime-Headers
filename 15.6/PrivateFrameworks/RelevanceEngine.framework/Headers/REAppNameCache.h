// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REAPPNAMECACHE_H
#define REAPPNAMECACHE_H

@class NSMutableDictionary, NSLock;


#import "RESingleton.h"

@interface REAppNameCache : RESingleton {
    NSMutableDictionary *_nameCache;
    NSLock *_lock;
}




-(id)_init;
-(id)localizedNameForApplicationWithIdentifier:(id)arg0 ;


@end


#endif