// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTCANVASVIEW_H
#define _UITEXTCANVASVIEW_H

@class NSMutableSet, NSArray, NSString;
@protocol _UITextTiledLayerDelegate, _UITextCanvas, _UITextCanvasContext;


#import "UIView.h"
#import "_UISceneDisplayLink.h"
#import "_UITextTiledLayer.h"

@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UITextCanvas>

 {
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
}


@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (weak, nonatomic) NSObject<_UITextCanvasContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UITextTiledLayer *layer;
@property (nonatomic) CGFloat maxTileHeight;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTilingEnabled) BOOL tilingEnabled;


-(BOOL)_enableAutoConstraining;
-(id)_textTiledLayer:(id)arg0 maskedRectsInVisibleRect:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateTilingViewportBookkeeping;
-(void)_updateTilingViewportLayer;
-(void)_windowDidMoveToScreen;
-(void)addGhostedRange:(struct _NSRange )arg0 ;
-(void)addInvisibleRange:(struct _NSRange )arg0 ;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)removeAllGhostedRanges;
-(void)removeInvisibleRange:(struct _NSRange )arg0 ;
-(void)resumeTiling;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)suspendTiling;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif