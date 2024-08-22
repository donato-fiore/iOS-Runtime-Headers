// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWIDGETBARLAYOUT_H
#define PXWIDGETBARLAYOUT_H



#import "PXTilingLayout.h"

@interface PXWidgetBarLayout : PXTilingLayout {
    CGRect _contentBounds;
}


@property (nonatomic) CGFloat height; // ivar: _height


+(struct PXTileIdentifier )tileIdentifier;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(struct CGRect )contentBounds;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)prepareLayout;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif