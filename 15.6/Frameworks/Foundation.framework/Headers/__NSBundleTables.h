// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSBUNDLETABLES_H
#define __NSBUNDLETABLES_H


#import <Foundation/Foundation.h>

#import "NSLock.h"
#import "NSHashTable.h"
#import "NSMapTable.h"
#import "NSPointerArray.h"

@interface __NSBundleTables : NSObject {
    NSLock *_lock;
    NSHashTable *_staticFrameworks;
    NSHashTable *_loadedBundles;
    NSHashTable *_loadedFrameworks;
    NSMapTable *_resolvedPathToBundles;
    NSMapTable *_bundleForClassMap;
    NSPointerArray *_immortalBundles;
}




-(id)init;
-(void)dealloc;


@end


#endif