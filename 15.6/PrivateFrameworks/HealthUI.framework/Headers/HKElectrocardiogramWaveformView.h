// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMWAVEFORMVIEW_H
#define HKELECTROCARDIOGRAMWAVEFORMVIEW_H

@class UIView, UIColor, NSArray;



@interface HKElectrocardiogramWaveformView : UIView

@property (nonatomic) CGRect lastPathBounds; // ivar: _lastPathBounds
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) CGRect pathBounds; // ivar: _pathBounds
@property (retain, nonatomic) NSArray *shapeLayers; // ivar: _shapeLayers


-(id)createShapeLayerWithPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setPaths:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif