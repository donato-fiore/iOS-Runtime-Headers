// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDEMOTILINGCONTROLLERWIDGETLAYOUT_H
#define PXDEMOTILINGCONTROLLERWIDGETLAYOUT_H



#import "PXAssetsTilingLayout.h"

@interface PXDemoTilingControllerWidgetLayout : PXAssetsTilingLayout



+(struct PXTileIdentifier )backgroundTileIdentifier;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(struct CGRect )contentBounds;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setReferenceSize:(struct CGSize )arg0 ;


@end


#endif