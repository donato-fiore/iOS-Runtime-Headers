// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDWALLPAPEREFFECTVIEW_H
#define SBDASHBOARDWALLPAPEREFFECTVIEW_H

@class SBUIBackgroundView, NSString;
@protocol CSWallpaperView;


#import "SBWallpaperEffectView.h"

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView>

 {
    SBUIBackgroundView *_backgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWallpaperVariant:(NSInteger)arg0 transformOptions:(NSUInteger)arg1 ;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(NSInteger)arg0 ;
-(void)setCoverSheetWallpaperStyle:(NSInteger)arg0 ;


@end


#endif