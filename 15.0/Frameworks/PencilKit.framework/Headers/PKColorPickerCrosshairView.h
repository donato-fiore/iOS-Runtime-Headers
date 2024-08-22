// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCOLORPICKERCROSSHAIRVIEW_H
#define PKCOLORPICKERCROSSHAIRVIEW_H

@class UIView;
@protocol PKColorPickerCrosshairViewDelegate;


#import "_PKColorPickerCrosshairCornerMaskView.h"
#import "_PKColorPickerSimpleCrosshairView.h"

@interface PKColorPickerCrosshairView : UIView

@property (retain, nonatomic) _PKColorPickerCrosshairCornerMaskView *baseMaskView; // ivar: _baseMaskView
@property (retain, nonatomic) _PKColorPickerSimpleCrosshairView *baseView; // ivar: _baseView
@property (retain, nonatomic) _PKColorPickerCrosshairCornerMaskView *cornerEdgeMaskView; // ivar: _cornerEdgeMaskView
@property (retain, nonatomic) _PKColorPickerSimpleCrosshairView *cornerEdgeView; // ivar: _cornerEdgeView
@property (nonatomic) NSUInteger cornerPosition; // ivar: _cornerPosition
@property (weak, nonatomic) NSObject<PKColorPickerCrosshairViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)update;


@end


#endif