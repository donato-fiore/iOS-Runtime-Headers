// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBICONLABELBACKDROPVIEW_H
#define DBICONLABELBACKDROPVIEW_H

@class UIView, CRSUIWallpaperPreferences;


#import "_TtC9DashBoard22DBDashboardPlatterView.h"

@interface DBIconLabelBackdropView : UIView

@property (retain, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardPlatterView *platterView; // ivar: _platterView
@property (retain, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences; // ivar: _wallpaperPreferences


-(id)initWithWallpaperPreferences:(id)arg0 ;
-(void)_updateHighlight;


@end


#endif