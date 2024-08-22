// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASASSETGUARDEDDATA_H
#define _PASASSETGUARDEDDATA_H

@class NSString, ASAsset, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _PASAssetGuardedData : NSObject {
    NSString *_defaultBundlePath;
    NSUInteger _defaultBundleVersion;
    NSUInteger _bestAvailableVersion;
    NSUInteger _bestAssetVersionObserved;
    ASAsset *_bestAvailableAsset;
    NSMutableDictionary *_overrides;
}






@end


#endif