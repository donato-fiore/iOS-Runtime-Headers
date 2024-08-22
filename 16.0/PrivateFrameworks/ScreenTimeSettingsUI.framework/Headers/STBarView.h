// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STBARVIEW_H
#define STBARVIEW_H

@class UIView, UIColor, NSArray;


#import "STUsageReportGraphDataPoint.h"

@interface STBarView : UIView

@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (getter=isDarkened) BOOL darkened;
@property (readonly) UIView *darkenedView; // ivar: _darkenedView
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint; // ivar: _dataPoint
@property (copy, nonatomic) NSArray *sectionHeightConstraints; // ivar: _sectionHeightConstraints
@property (copy, nonatomic) NSArray *sectionViews; // ivar: _sectionViews
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy


-(id)initWithDataPoint:(id)arg0 useVibrancy:(BOOL)arg1 ;
-(void)setUpSectionHeightConstraints;
-(void)setUpSections;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif