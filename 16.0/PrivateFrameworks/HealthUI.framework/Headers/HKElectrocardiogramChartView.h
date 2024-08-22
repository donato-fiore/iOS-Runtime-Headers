// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKELECTROCARDIOGRAMCHARTVIEW_H
#define HKELECTROCARDIOGRAMCHARTVIEW_H

@class UIView, NSArray, UIColor, HKElectrocardiogram;


#import "HKElectrocardiogramGridView.h"
#import "HKElectrocardiogramWaveformView.h"

@interface HKElectrocardiogramChartView : UIView

@property (nonatomic) BOOL allowsScrolling; // ivar: _allowsScrolling
@property (readonly, nonatomic) CGFloat controlSignalDuration;
@property (nonatomic, getter=isDisplayingControlSignal) BOOL displayControlSignal;
@property (nonatomic, getter=isEdgeMaskEnabled) BOOL edgeMaskEnabled; // ivar: _edgeMaskEnabled
@property (readonly, copy, nonatomic) NSArray *gridOptions;
@property (readonly, nonatomic) CGSize gridSize;
@property (retain, nonatomic) HKElectrocardiogramGridView *gridView; // ivar: _gridView
@property (nonatomic) CGSize lastSize; // ivar: _lastSize
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) CGFloat lineWidth;
@property (readonly, nonatomic) CGFloat pointsPerMillivolt;
@property (readonly, nonatomic) CGFloat pointsPerSecond;
@property (retain, nonatomic) HKElectrocardiogram *sample; // ivar: _sample
@property (retain, nonatomic) UIView *waveformContainerView; // ivar: _waveformContainerView
@property (retain, nonatomic) HKElectrocardiogramWaveformView *waveformView; // ivar: _waveformView


+(id)defaultGridOptions;
+(id)printedGridOptions;
-(id)initWithGridSize:(struct CGSize )arg0 ;
-(id)initWithGridSize:(struct CGSize )arg0 gridOptions:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setUpUI;
-(void)_updateChartForSizeChange;
-(void)displayElectrocardiogram:(id)arg0 allowsScrolling:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setWaveformPath:(id)arg0 ;
-(void)setWaveformPaths:(id)arg0 ;


@end


#endif