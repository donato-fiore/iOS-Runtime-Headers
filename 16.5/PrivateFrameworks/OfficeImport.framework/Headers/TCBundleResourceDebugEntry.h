// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCBUNDLERESOURCEDEBUGENTRY_H
#define TCBUNDLERESOURCEDEBUGENTRY_H


#import <Foundation/Foundation.h>


@interface TCBundleResourceDebugEntry : NSObject {
    NSUInteger mCacheCount;
    NSUInteger mUncachedCount;
}




+(void)addEntry:(id)arg0 ofType:(id)arg1 inPackage:(id)arg2 cacheResult:(BOOL)arg3 ;
+(void)dumpUsage;


@end


#endif