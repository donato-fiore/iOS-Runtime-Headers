// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSLIDERCONTROLCELL_H
#define HUSLIDERCONTROLCELL_H

@class NSArray;


#import "HUControlPanelCell.h"
#import "HUSimpleSliderControlView.h"

@interface HUSliderControlCell : HUControlPanelCell

@property (copy, nonatomic) NSArray *sliderConstraints; // ivar: _sliderConstraints
@property (retain, nonatomic) HUSimpleSliderControlView *sliderView; // ivar: _sliderView


-(id)allControlViews;
-(void)_updateSliderConstraints;
-(void)prepareForReuse;


@end


#endif