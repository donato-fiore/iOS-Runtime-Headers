// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STHORIZONTALLYSEGMENTEDVIEW_H
#define STHORIZONTALLYSEGMENTEDVIEW_H

@class UIView, NSNumber, NSArray, NSMutableArray;



@interface STHorizontallySegmentedView : UIView

@property (readonly) NSUInteger maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property (retain, nonatomic) NSNumber *numberOfLines; // ivar: _numberOfLines
@property (nonatomic) CGFloat previousWidth; // ivar: _previousWidth
@property (copy, nonatomic) NSArray *segmentConstraints; // ivar: _segmentConstraints
@property (copy, nonatomic) NSArray *segmentItems; // ivar: _segmentItems
@property (readonly, nonatomic) NSMutableArray *segmentViews; // ivar: _segmentViews
@property (readonly) BOOL truncateLabels; // ivar: _truncateLabels
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVibrancy:(BOOL)arg0 maximumNumberOfLines:(NSUInteger)arg1 truncateLabels:(BOOL)arg2 ;
-(void)_setUpConstraints;
-(void)_stHorizontallySegmentedViewCommonInit;
-(void)layoutSubviews;


@end


#endif