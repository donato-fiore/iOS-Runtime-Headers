// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBTILEDVIEW_H
#define UIWEBTILEDVIEW_H

@class WAKWindow;


#import "UIView.h"

@interface UIWebTiledView : UIView {
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}




-(BOOL)allowsPaintingAndScriptsWhilePanning;
-(BOOL)drawsGrid;
-(BOOL)editingTilingModeEnabled;
-(BOOL)isTilingEnabled;
-(BOOL)keepsZoomedOutTiles;
-(BOOL)layoutTilesInMainThread;
-(BOOL)logsTilingChanges;
-(BOOL)tileDrawingEnabled;
-(BOOL)tilesOpaque;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)wakWindow;
-(int)tilingArea;
-(struct CGRect )visibleRect;
-(struct CGSize )tileSize;
-(unsigned int)adjustedMaxTileCount;
-(unsigned int)maxTileCount;
-(void)_didScroll;
-(void)_screenChanged:(id)arg0 ;
-(void)_updateForScreen:(id)arg0 ;
-(void)dealloc;
-(void)drawImageIntoTiles:(struct CGImage *)arg0 ;
-(void)dumpTiles;
-(void)layoutSubviews;
-(void)layoutTilesNow;
-(void)layoutTilesNowForRect:(struct CGRect )arg0 ;
-(void)layoutTilesNowOnWebThread;
-(void)lockTilingMode;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg0 ;
-(void)setDrawsGrid:(BOOL)arg0 ;
-(void)setEditingTilingModeEnabled:(BOOL)arg0 ;
-(void)setInGesture:(int)arg0 ;
-(void)setKeepsZoomedOutTiles:(BOOL)arg0 ;
-(void)setLayoutTilesInMainThread:(BOOL)arg0 ;
-(void)setLogsTilingChanges:(BOOL)arg0 ;
-(void)setMaxTileCount:(unsigned int)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setTileDrawingEnabled:(BOOL)arg0 ;
-(void)setTileSize:(struct CGSize )arg0 ;
-(void)setTilesOpaque:(BOOL)arg0 ;
-(void)setTilingArea:(int)arg0 ;
-(void)setTilingEnabled:(BOOL)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)setWAKWindow:(id)arg0 ;
-(void)unlockTilingMode;
-(void)updateTilingMode;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif