// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKCOLORPICKERCROSSHAIRCORNERMASKVIEW_H
#define _PKCOLORPICKERCROSSHAIRCORNERMASKVIEW_H

@class UIView;



@interface _PKColorPickerCrosshairCornerMaskView : UIView

@property (nonatomic) NSUInteger cornerPosition; // ivar: _cornerPosition
@property (nonatomic) BOOL excludeCorner; // ivar: _excludeCorner


+(Class)layerClass;
-(id)_shapeLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)maskPath;
-(void)_setFillColor:(id)arg0 ;
-(void)_setPath:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif