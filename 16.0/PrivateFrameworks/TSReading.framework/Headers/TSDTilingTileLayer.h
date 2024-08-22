// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTILINGTILELAYER_H
#define TSDTILINGTILELAYER_H



#import "TSDNoDefaultImplicitActionLayer.h"

@interface TSDTilingTileLayer : TSDNoDefaultImplicitActionLayer

@property (nonatomic) NSUInteger index; // ivar: mIndex
@property (nonatomic) ? location; // ivar: mLocation
@property (nonatomic) BOOL needsTileDisplay; // ivar: mNeedsTileDisplay


-(id)hitTest:(struct CGPoint )arg0 ;
-(id)tileContentsLayer;
-(void)display;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsDisplayInRectIgnoringBackground:(struct CGRect )arg0 ;
-(void)setNeedsLayoutForTilingLayers;
-(void)updateFrameWithTileSize:(struct CGSize )arg0 tilesWide:(NSUInteger)arg1 tilesHigh:(NSUInteger)arg2 geometryProvider:(id)arg3 ;


@end


#endif