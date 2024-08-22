// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WAKWINDOW_H
#define WAKWINDOW_H

@class CALayer;


#import "WAKResponder.h"
#import "WAKView.h"

@interface WAKWindow : WAKResponder {
    CALayer *_hostLayer;
    *void _tileCache;
    CGRect _frozenVisibleRect;
    CALayer *_rootLayer;
    CGSize _screenSize;
    CGSize _availableScreenSize;
    CGFloat _screenScale;
    CGRect _frame;
    WAKView *_contentView;
    WAKView *_responderView;
    WAKView *_nextResponder;
    BOOL _visible;
    BOOL _isInSnapshottingPaint;
    BOOL _entireWindowVisibleForTesting;
    Lock _exposedScrollViewRectLock;
    CGRect _exposedScrollViewRect;
}


@property (nonatomic) *CGImage contentReplacementImage;
@property (nonatomic) BOOL useOrientationDependentFontAntialiasing; // ivar: _useOrientationDependentFontAntialiasing


+(BOOL)hasLandscapeOrientation;
+(id)currentEvent;
+(void)setOrientationProvider:(id)arg0 ;
-(*void)tileCache;
-(BOOL)isInSnapshottingPaint;
-(BOOL)isKeyWindow;
-(BOOL)isVisible;
-(BOOL)keepsZoomedOutTiles;
-(BOOL)makeFirstResponder:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)tilesOpaque;
-(CGFloat)screenScale;
-(NSUInteger)keyViewSelectionDirection;
-(float)currentTileScale;
-(float)zoomedOutTileScale;
-(id)_newFirstResponderAfterResigning;
-(id)contentView;
-(id)description;
-(id)firstResponder;
-(id)hostLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(id)recursiveDescription;
-(id)rootLayer;
-(int)tilingDirection;
-(int)tilingMode;
-(struct CGPoint )convertBaseToScreen:(struct CGPoint )arg0 ;
-(struct CGPoint )convertScreenToBase:(struct CGPoint )arg0 ;
-(struct CGRect )_visibleRectRespectingMasksToBounds:(BOOL)arg0 ;
-(struct CGRect )convertRectFromScreen:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToScreen:(struct CGRect )arg0 ;
-(struct CGRect )exposedScrollViewRect;
-(struct CGRect )extendedVisibleRect;
-(struct CGRect )frame;
-(struct CGRect )visibleRect;
-(struct CGSize )availableScreenSize;
-(struct CGSize )screenSize;
-(void)close;
-(void)dealloc;
-(void)didRotate;
-(void)displayRect:(struct CGRect )arg0 ;
-(void)dumpTiles;
-(void)layoutTiles;
-(void)layoutTilesNow;
-(void)layoutTilesNowForRect:(struct CGRect )arg0 ;
-(void)makeKeyWindow;
-(void)removeAllNonVisibleTiles;
-(void)removeAllTiles;
-(void)removeForegroundTiles;
-(void)sendEvent:(id)arg0 ;
-(void)sendEventSynchronously:(id)arg0 ;
-(void)sendMouseMoveEvent:(id)arg0 contentChange:(*int)arg1 ;
-(void)setAvailableScreenSize:(struct CGSize )arg0 ;
-(void)setContentRect:(struct CGRect )arg0 ;
-(void)setContentView:(id)arg0 ;
-(void)setCurrentTileScale:(float)arg0 ;
-(void)setEntireWindowVisibleForTesting:(BOOL)arg0 ;
-(void)setExposedScrollViewRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 display:(BOOL)arg1 ;
-(void)setIsInSnapshottingPaint:(BOOL)arg0 ;
-(void)setKeepsZoomedOutTiles:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setRootLayer:(id)arg0 ;
-(void)setScreenScale:(CGFloat)arg0 ;
-(void)setScreenSize:(struct CGSize )arg0 ;
-(void)setTilesOpaque:(BOOL)arg0 ;
-(void)setTilingDirection:(int)arg0 ;
-(void)setTilingMode:(int)arg0 ;
-(void)setVisible:(BOOL)arg0 ;
-(void)setZoomedOutTileScale:(float)arg0 ;
-(void)willRotate;


@end


#endif