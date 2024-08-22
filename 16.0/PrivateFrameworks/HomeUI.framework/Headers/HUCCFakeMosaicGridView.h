// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCCFAKEMOSAICGRIDVIEW_H
#define HUCCFAKEMOSAICGRIDVIEW_H

@class UIView, NSMutableArray;
@protocol HUProvidesMosaicFrames;


#import "HUMosaicLayoutGeometry.h"

@interface HUCCFakeMosaicGridView : UIView

@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (retain, nonatomic) NSMutableArray *fakeCellLayers; // ivar: _fakeCellLayers
@property (weak, nonatomic) NSObject<HUProvidesMosaicFrames> *frameDelegate; // ivar: _frameDelegate
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry; // ivar: _mosaicLayoutGeometry


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif