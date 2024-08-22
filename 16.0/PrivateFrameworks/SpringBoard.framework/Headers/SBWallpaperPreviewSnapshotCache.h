// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWALLPAPERPREVIEWSNAPSHOTCACHE_H
#define SBWALLPAPERPREVIEWSNAPSHOTCACHE_H

@class BSUIMappedImageCache, NSString;
@protocol SBIconIndexNodeObserver, PBUIWallpaperObserver;

#import <Foundation/Foundation.h>

#import "SBWallpaperController.h"
#import "SBIconController.h"
#import "SBIconModel.h"

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver, PBUIWallpaperObserver>

 {
    SBWallpaperController *_wallpaperController;
    BSUIMappedImageCache *_imageCache;
    NSInteger _invalidatedLocations;
    SBIconController *_iconController;
    SBIconModel *_model;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)cacheKeyForVariant:(NSInteger)arg0 options:(NSUInteger)arg1 ;
+(id)cacheKeyForVariant:(NSInteger)arg0 options:(NSUInteger)arg1 scalingWidth:(CGFloat)arg2 ;
+(id)sharedInstance;
-(NSInteger)_orientationForOptions:(NSUInteger)arg0 ;
-(id)_homeScreenSnapshotProviderWithOptions:(NSUInteger)arg0 wallpaperImage:(id)arg1 ;
-(id)_lockScreenSnapshotProviderWithOptions:(NSUInteger)arg0 wallpaperImage:(id)arg1 ;
-(id)init;
-(id)initWithImageCache:(id)arg0 iconController:(id)arg1 wallpaperController:(id)arg2 ;
-(id)mappedWallpaperPreviewForKey:(id)arg0 ;
-(id)mappedWallpaperPreviewForScaledSnapshot:(id)arg0 variant:(NSInteger)arg1 cacheKey:(id)arg2 ;
-(id)snapshotProviderForVariant:(NSInteger)arg0 options:(NSUInteger)arg1 wallpaperImage:(id)arg2 ;
-(void)_backlightFadeFinished;
-(void)_iconControllerDidChangeIconModel:(id)arg0 ;
-(void)_modelDidLayout;
-(void)_modelWillLayout;
-(void)_switchToIconModel:(id)arg0 ;
-(void)dealloc;
-(void)invalidateSnapshotsForLocations:(NSInteger)arg0 ;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;
-(void)regenerateSnapshotsForLocations:(NSInteger)arg0 ;
-(void)wallpaperDidChangeForVariant:(NSInteger)arg0 ;


@end


#endif