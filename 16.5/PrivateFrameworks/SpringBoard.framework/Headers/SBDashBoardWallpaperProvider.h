// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDWALLPAPERPROVIDER_H
#define SBDASHBOARDWALLPAPERPROVIDER_H

@class NSString;
@protocol CSWallpaperProviding;

#import <Foundation/Foundation.h>


@interface SBDashBoardWallpaperProvider : NSObject <CSWallpaperProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createCoverSheetWallpaperView;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(NSUInteger)arg0 ;
-(id)createWallpaperFloatingViewForReason:(id)arg0 ignoreReplica:(BOOL)arg1 ;
-(id)setWallpaperFloatingLayerContainerView:(id)arg0 forReason:(id)arg1 withAnimationFactory:(id)arg2 ;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)wallpaperClientWillRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif