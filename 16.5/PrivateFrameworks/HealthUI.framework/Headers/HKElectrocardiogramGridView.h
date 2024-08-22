// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMGRIDVIEW_H
#define HKELECTROCARDIOGRAMGRIDVIEW_H

@class UIView, CAShapeLayer, UIBezierPath, NSMutableArray, NSArray;



@interface HKElectrocardiogramGridView : UIView

@property (retain, nonatomic) CAShapeLayer *controlSignalLayer; // ivar: _controlSignalLayer
@property (retain, nonatomic) UIBezierPath *controlSignalPath; // ivar: _controlSignalPath
@property (retain, nonatomic) NSMutableArray *gridLayers; // ivar: _gridLayers
@property (retain, nonatomic) NSArray *grids; // ivar: _grids
@property (readonly, nonatomic) CGSize majorGridSize;
@property (nonatomic) CGSize unitSize; // ivar: _unitSize


-(id)initWithUnitSize:(struct CGSize )arg0 grids:(id)arg1 ;
-(void)_createLayers;
-(void)layoutSubviews;


@end


#endif