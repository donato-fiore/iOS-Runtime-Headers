// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXOVERLAYBADGEUIVIEWTILE_H
#define PXOVERLAYBADGEUIVIEWTILE_H

@class UIView, NSString;
@protocol PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile;


#import "PXUIAssetBadgeView.h"
#import "PXAssetBadgeManager.h"
#import "PXImageRequester.h"

@interface PXOverlayBadgeUIViewTile : UIView <PXChangeObserver, PXReusableObject, PXOverlayBadgeTile, PXUIViewBasicTile>

 {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setBadgeOptions:) NSUInteger _badgeOptions; // ivar: __badgeOptions
@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // ivar: __badgeView
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager; // ivar: _badgeManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(void)preloadResources;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateBadgeView;
-(void)_updateBadgeViewIfNeeded;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;


@end


#endif