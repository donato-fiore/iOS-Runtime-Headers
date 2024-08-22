// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHRELATEDFETCHOPTIONS_H
#define PHRELATEDFETCHOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"
#import "PHAsset.h"

@interface PHRelatedFetchOptions : NSObject

@property (nonatomic, getter=isDebugInfoEnabled) BOOL debugInfoEnabled; // ivar: _debugInfoEnabled
@property (nonatomic) BOOL enableDiversity; // ivar: _enableDiversity
@property (retain, nonatomic) NSArray *excludedAssetCollections; // ivar: _excludedAssetCollections
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PHAsset *referenceAsset; // ivar: _referenceAsset




@end


#endif