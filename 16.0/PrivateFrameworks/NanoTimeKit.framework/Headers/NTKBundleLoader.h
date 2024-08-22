// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKBUNDLELOADER_H
#define NTKBUNDLELOADER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NTKBundleLoader : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *bundlesByPath; // ivar: _bundlesByPath


+(id)rootDirectory;
-(id)bundlesFromDirectoryURL:(id)arg0 ;
-(id)init;
-(id)loadBundlesFromDirectoryURL:(id)arg0 enumerator:(id)arg1 ;
-(void)enumerateBundlesFromDirectoryURL:(id)arg0 enumerator:(id)arg1 ;
-(void)resetCacheForDirectoryURL:(id)arg0 ;


@end


#endif