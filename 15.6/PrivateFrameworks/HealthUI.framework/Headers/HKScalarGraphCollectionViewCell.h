// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSCALARGRAPHCOLLECTIONVIEWCELL_H
#define HKSCALARGRAPHCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, NSArray, UIView;
@protocol HKGraphViewDelegate;


#import "HKScalarGraphViewController.h"
#import "HKLollipopController.h"

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *graphSeries; // ivar: _graphSeries
@property (weak, nonatomic) HKScalarGraphViewController *graphViewController; // ivar: _graphViewController
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *header; // ivar: _header
@property (weak, nonatomic) HKLollipopController *lollipopController; // ivar: _lollipopController
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg0 ;
-(NSInteger)stackCountForGraphView:(id)arg0 ;
-(id)graphView:(id)arg0 graphSeriesForZoom:(NSInteger)arg1 stackOffset:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)seriesSelectionLineColorForGraphView:(id)arg0 ;
-(void)graphView:(id)arg0 didFinishUserScrollingToValueRange:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateFromDateZoom:(NSInteger)arg1 toDateZoom:(NSInteger)arg2 newVisibleRange:(id)arg3 ;
-(void)graphView:(id)arg0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect )arg1 ;
-(void)graphView:(id)arg0 didUpdateSelectedPoint:(id)arg1 ;
-(void)graphView:(id)arg0 didUpdateSeries:(id)arg1 newDataArrived:(BOOL)arg2 changeContext:(NSInteger)arg3 ;
-(void)graphView:(id)arg0 didUpdateVisibleValueRange:(id)arg1 changeContext:(NSInteger)arg2 ;
-(void)graphView:(id)arg0 didUpdateYAxisWidth:(CGFloat)arg1 toWidth:(CGFloat)arg2 ;
-(void)graphViewDidBeginSelection:(id)arg0 ;
-(void)graphViewDidEndSelection:(id)arg0 ;
-(void)graphViewDidTapYAxis:(id)arg0 ;
-(void)graphViewExternalSelectionEnd:(id)arg0 ;
-(void)graphViewSizeChanged:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif