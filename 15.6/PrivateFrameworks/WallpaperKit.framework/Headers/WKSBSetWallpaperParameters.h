// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSBSETWALLPAPERPARAMETERS_H
#define WKSBSETWALLPAPERPARAMETERS_H

@class NSString;
@protocol WKWallpaperRepresenting;

#import <Foundation/Foundation.h>


@interface WKSBSetWallpaperParameters : NSObject

@property (readonly, nonatomic) BOOL isProceduralWallpaper;
@property (readonly, copy, nonatomic) NSString *wallpaperLocation; // ivar: _wallpaperLocation
@property (readonly, nonatomic) NSObject<WKWallpaperRepresenting> *wallpaperRepresenting; // ivar: _wallpaperRepresenting


-(id)_wallpaperPreviewInputForStripeWallpaper:(id)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)_wallpaperPreviewInputsForStripesWallpaperRepresenting;
-(id)initForHomeScreenWithWallpaperRepresenting:(id)arg0 ;
-(id)initForLockScreenWithWallpaperRepresenting:(id)arg0 ;
-(void)_retrieveHomeScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id)arg0 ;
-(void)_retrieveHomeScreenPreviewForAppleSystemValueBasedWallpaperWithCompletion:(id)arg0 ;
-(void)_retrieveHomeScreenPreviewForCustomPhotoWallpaperWithCompletion:(id)arg0 ;
-(void)_retrieveLockScreenPreviewForAppleSystemFileBasedWallpaperWithCompletion:(id)arg0 ;
-(void)_retrieveLockScreenPreviewForCustomPhotoWallpaperWithCompletion:(id)arg0 ;
-(void)_retrievePreviewForAppleSystemDynamicWallpaperWithCompletion:(id)arg0 ;
-(void)_retrievePreviewForAppleSystemStripeWallpaperRepresentingWithCompletion:(id)arg0 ;
-(void)resolveParametersForProceduralWallpaperWithCompletion:(id)arg0 ;
-(void)resolveParametersForWallpaperWithCompletion:(id)arg0 ;


@end


#endif