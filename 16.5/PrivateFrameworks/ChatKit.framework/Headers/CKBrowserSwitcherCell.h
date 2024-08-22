// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERSWITCHERCELL_H
#define CKBROWSERSWITCHERCELL_H

@class UIView, IMBalloonPlugin;


#import "CKSnapshotCacheKey.h"

@interface CKBrowserSwitcherCell : UIView

@property (retain, nonatomic) UIView *browserSnapshotView; // ivar: _browserSnapshotView
@property (retain, nonatomic) UIView *extensionInterruptedView; // ivar: _extensionInterruptedView
@property (retain, nonatomic) IMBalloonPlugin *plugin; // ivar: _plugin
@property (retain, nonatomic) CKSnapshotCacheKey *snapshotCacheKey; // ivar: _snapshotCacheKey
@property (nonatomic, getter=isUsingFallbackSnapshot) BOOL usingFallbackSnapshot; // ivar: _usingFallbackSnapshot


-(id)balloonPluginManager;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleBrowserSnapshotDidChange:(id)arg0 ;
-(void)_updateSnapshotView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showExtensionInterruptedViewWithDisplayName:(id)arg0 ;


@end


#endif