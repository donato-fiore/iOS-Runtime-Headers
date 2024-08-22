// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASASSET2GUARDEDDATA_H
#define _PASASSET2GUARDEDDATA_H

@class NSString, MAAsset, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PASAsset2GuardedData : NSObject {
    NSString *_defaultBundlePath;
    NSUInteger _defaultBundleVersion;
    NSUInteger _bestAvailableVersion;
    NSUInteger _bestAssetVersionObserved;
    MAAsset *_bestAvailableAsset;
    BOOL _purgeObsoleteInstalledAssets;
    NSMutableDictionary *_overrides;
}






@end


#endif