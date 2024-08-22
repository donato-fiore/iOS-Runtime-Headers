// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPHOTOSPICKEROPTIONS_H
#define PHPHOTOSPICKEROPTIONS_H

@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

#import <Foundation/Foundation.h>


@interface PHPhotosPickerOptions : NSObject

@property (copy, nonatomic) NSArray *excludedContentModes; // ivar: _excludedContentModes
@property (nonatomic) BOOL hideTabBar; // ivar: _hideTabBar
@property (copy, nonatomic) NSDictionary *initialAssetsToSelect; // ivar: _initialAssetsToSelect
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) PHAssetCollection *keyAssetCollection; // ivar: _keyAssetCollection




@end


#endif