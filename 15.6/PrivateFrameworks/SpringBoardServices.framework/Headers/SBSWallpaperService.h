// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSWALLPAPERSERVICE_H
#define SBSWALLPAPERSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSWallpaperClient.h"

@interface SBSWallpaperService : NSObject {
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _wasInvalidated;
}




-(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forVariants:(NSUInteger)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg0 cropRect:(struct CGRect )arg1 wallpaperMode:(NSInteger)arg2 ;
-(id)init;
-(void)acquireActiveWallpaperSceneAssertionWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchContentCutoutBoundsForVariant:(NSInteger)arg0 orientation:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)fetchOriginalImageForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalVideoURLForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchThumbnailForVariant:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)restoreDefaultWallpaperWithCompletion:(id)arg0 ;


@end


#endif