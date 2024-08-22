// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACEBUNDLELOADER_H
#define NTKFACEBUNDLELOADER_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "NTKBundleLoader.h"

@interface NTKFaceBundleLoader : NSObject {
    NSArray *_cachedFaceBundles;
    os_unfair_lock_s _cacheLock;
    NTKBundleLoader *_loader;
    os_unfair_lock_s _loaderLock;
    NSSet *_urls;
}




+(id)faceBundleLoaderWithDirectories:(id)arg0 ;
-(id)initWithURLs:(id)arg0 ;
-(id)loadFaceBundleWithIdentifier:(id)arg0 ;
-(id)loadLegacyFaceBundleForStyle:(NSInteger)arg0 ;
-(void)_enumerateBundles:(id)arg0 ;
-(void)_loadClassesUsingBlock:(id)arg0 ;
-(void)enumerateFaceBundleClassesIgnoringCache:(BOOL)arg0 withBlock:(id)arg1 ;


@end


#endif