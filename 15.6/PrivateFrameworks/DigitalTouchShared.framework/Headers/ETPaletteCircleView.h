// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPALETTECIRCLEVIEW_H
#define ETPALETTECIRCLEVIEW_H

@class UIView;



@interface ETPaletteCircleView : UIView {
    UIView *_selectionMarker;
}


@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly, nonatomic) UIView *selectionMarker;


+(CGFloat)paletteCircleDiameter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSelectionMarkerFrame;
-(void)layoutSubviews;


@end


#endif