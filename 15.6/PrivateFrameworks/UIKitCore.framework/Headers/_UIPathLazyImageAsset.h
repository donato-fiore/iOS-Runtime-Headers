// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPATHLAZYIMAGEASSET_H
#define _UIPATHLAZYIMAGEASSET_H

@class NSArray;


#import "UIImageAsset.h"

@interface _UIPathLazyImageAsset : UIImageAsset {
    ? _plaFlags;
}


@property (readonly, nonatomic) BOOL haveCGCacheImages; // ivar: _haveCGCacheImages
@property (readonly, copy, nonatomic) NSArray *imagePaths; // ivar: _imagePaths


-(BOOL)_containsImagesInPath:(id)arg0 ;
-(id)_initWithAssetName:(id)arg0 forFilesInBundle:(id)arg1 ;
-(id)_initWithAssetName:(id)arg0 forFilesInBundle:(id)arg1 imagePaths:(id)arg2 haveCGCacheImages:(BOOL)arg3 ;
-(id)_initWithAssetName:(id)arg0 forManager:(id)arg1 ;
-(id)imageWithConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_clearResolvedImageResources;


@end


#endif