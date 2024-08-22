// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIMPLECONTROLCELL_H
#define HUSIMPLECONTROLCELL_H

@class UIView<HUControlView>, NSArray;


#import "HUControlPanelCell.h"

@interface HUSimpleControlCell : HUControlPanelCell

@property (retain, nonatomic) UIView<HUControlView> *controlView; // ivar: _controlView
@property (copy, nonatomic) NSArray *controlViewConstraints; // ivar: _controlViewConstraints


-(id)allControlViews;
-(void)_updateSliderConstraints;
-(void)prepareForReuse;


@end


#endif