// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACEBUNDLELOADER_H
#define NTKFACEBUNDLELOADER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NTKFaceBundleLoader : NSObject {
    NSArray *_cachedFaceBundles;
    os_unfair_lock_s _cacheLock;
}




+(id)faceBundleLoaderWithDirectories:(id)arg0 ;
-(id)init;
-(void)_loadClassesUsingBlock:(id)arg0 ;
-(void)enumerateFaceBundleClassesIgnoringCache:(BOOL)arg0 withBlock:(id)arg1 ;


@end


#endif