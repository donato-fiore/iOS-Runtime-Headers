// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VOLUMEGRAPHVIEW_H
#define VOLUMEGRAPHVIEW_H

@class UIView, UIImage;


#import "TintedView.h"
#import "StockGraphImageSet.h"

@interface VolumeGraphView : UIView {
    BOOL _showingTintedRegion;
    TintedView *_tintedVolumeView;
    UIView *_tintedRegionClipView;
    UIImage *_volumeImage;
}


@property (retain, nonatomic) StockGraphImageSet *graphImageSet; // ivar: _graphImageSet


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)resizeSelectedVolumeClipViewWithLeftX:(CGFloat)arg0 rightX:(CGFloat)arg1 ;
-(void)setShowingSelectedRegion:(BOOL)arg0 ;


@end


#endif