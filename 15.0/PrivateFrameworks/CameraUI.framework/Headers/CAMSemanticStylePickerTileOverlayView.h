// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSEMANTICSTYLEPICKERTILEOVERLAYVIEW_H
#define CAMSEMANTICSTYLEPICKERTILEOVERLAYVIEW_H

@class UIView, UIImageView, UIColor;



@interface CAMSemanticStylePickerTileOverlayView : UIView

@property (readonly, nonatomic) UIImageView *_bottomLeftCorner; // ivar: __bottomLeftCorner
@property (readonly, nonatomic) UIImageView *_bottomRightCorner; // ivar: __bottomRightCorner
@property (readonly, nonatomic) UIView *_tileOverlay; // ivar: __tileOverlay
@property (readonly, nonatomic) UIImageView *_topLeftCorner; // ivar: __topLeftCorner
@property (readonly, nonatomic) UIImageView *_topRightCorner; // ivar: __topRightCorner
@property (nonatomic) CGFloat cornerTargetAlpha; // ivar: _cornerTargetAlpha
@property (nonatomic) UIColor *materialColor; // ivar: _materialColor
@property (nonatomic) CGFloat tileAlpha; // ivar: _tileAlpha


+(id)_sharedCornerImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateAlphas;
-(void)_updateMaterialColor;
-(void)layoutSubviews;


@end


#endif