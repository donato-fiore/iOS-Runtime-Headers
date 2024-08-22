// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDWALLPAPERVIEWPROVIDER_H
#define SBDASHBOARDWALLPAPERVIEWPROVIDER_H

@class NSString;
@protocol CSWallpaperViewProviding;

#import <Foundation/Foundation.h>


@interface SBDashBoardWallpaperViewProvider : NSObject <CSWallpaperViewProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createCoverSheetWallpaperView;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(NSUInteger)arg0 ;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)wallpaperClientWillRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif