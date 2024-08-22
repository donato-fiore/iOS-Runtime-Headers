// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSINGLETILELAYOUT_H
#define PXSINGLETILELAYOUT_H



#import "PXTilingLayout.h"

@interface PXSingleTileLayout : PXTilingLayout {
    CGRect _contentBounds;
}


@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (readonly, nonatomic) PXTileIdentifier tileIdentifier; // ivar: _tileIdentifier


-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(id)init;
-(id)initWithTileIdentifier:(struct PXTileIdentifier )arg0 ;
-(struct CGRect )contentBounds;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif