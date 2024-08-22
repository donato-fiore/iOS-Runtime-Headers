// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATILEDLAYER_H
#define CATILEDLAYER_H

@protocol CATiledLayerDelegate><CALayerDelegate;


#import "CALayer.h"

@interface CATiledLayer : CALayer

@property (weak) NSObject<CATiledLayerDelegate><CALayerDelegate> *delegate;
@property (getter=isDrawingEnabled) BOOL drawingEnabled;
@property *CGColor fillColor;
@property NSUInteger levelsOfDetail;
@property NSUInteger levelsOfDetailBias;
@property CGFloat maximumTileScale;
@property CGSize tileSize;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)shouldDrawOnMainThread;
+(CGFloat)fadeDuration;
+(id)defaultValueForKey:(id)arg0 ;
+(unsigned int)prefetchedTiles;
-(BOOL)_canDisplayConcurrently;
-(BOOL)canDrawRect:(struct CGRect )arg0 levelOfDetail:(int)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg0 ;
-(void)_colorSpaceDidChange;
-(void)_dealloc;
-(void)_display;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)displayInRect:(struct CGRect )arg0 levelOfDetail:(int)arg1 options:(id)arg2 ;
-(void)invalidateContents;
-(void)setContents:(id)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 levelOfDetail:(int)arg1 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 levelOfDetail:(int)arg1 options:(id)arg2 ;
-(void)setUnsafeUnretainedDelegate:(id)arg0 ;


@end


#endif