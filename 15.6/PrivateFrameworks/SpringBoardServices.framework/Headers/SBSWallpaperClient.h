// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSWALLPAPERCLIENT_H
#define SBSWALLPAPERCLIENT_H

@class FBSServiceFacilityClient;



@interface SBSWallpaperClient : FBSServiceFacilityClient



-(BOOL)setWallpaperColor:(id)arg0 darkColor:(id)arg1 forVariants:(NSUInteger)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg0 forVariants:(NSUInteger)arg1 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg0 cropRect:(struct CGRect )arg1 wallpaperMode:(unsigned char)arg2 ;
-(id)initWithCalloutQueue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 calloutQueue:(id)arg1 ;
-(void)acquireActiveWallpaperSceneAssertionWithCompletion:(id)arg0 ;
-(void)fetchContentCutoutBoundsForVariant:(unsigned int)arg0 orientation:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)fetchOriginalImageForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchOriginalVideoURLForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)fetchThumbnailForVariant:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)restoreDefaultWallpaperWithCompletion:(id)arg0 ;


@end


#endif