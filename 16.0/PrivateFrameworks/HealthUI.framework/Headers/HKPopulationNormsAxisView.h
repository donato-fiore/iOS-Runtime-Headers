// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKPOPULATIONNORMSAXISVIEW_H
#define HKPOPULATIONNORMSAXISVIEW_H

@class UIView, NSDictionary, NSArray, NSMutableArray;



@interface HKPopulationNormsAxisView : UIView

@property (retain, nonatomic) NSDictionary *axisLabelAttributes; // ivar: _axisLabelAttributes
@property (retain, nonatomic) NSArray *axisLabelValues; // ivar: _axisLabelValues
@property (retain, nonatomic) NSMutableArray *axisLabelViews; // ivar: _axisLabelViews
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(CGFloat)minorDimensionSize;
-(id)initWithOrientation:(NSInteger)arg0 axisLabels:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif