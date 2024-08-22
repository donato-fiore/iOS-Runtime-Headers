// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKGRIDROWVIEW_H
#define TLKGRIDROWVIEW_H

@class NSMutableArray;


#import "TLKView.h"
#import "TLKGridLayoutManager.h"
#import "TLKTableRow.h"

@interface TLKGridRowView : TLKView

@property (retain, nonatomic) NSMutableArray *currentListOfViews; // ivar: _currentListOfViews
@property (retain, nonatomic) NSMutableArray *imageViews; // ivar: _imageViews
@property (nonatomic) NSUInteger indexOfFirstCenteredColumnForForcedCentering; // ivar: _indexOfFirstCenteredColumnForForcedCentering
@property (nonatomic) NSUInteger indexOfFirstTrailingColumn; // ivar: _indexOfFirstTrailingColumn
@property (retain, nonatomic) NSMutableArray *labels; // ivar: _labels
@property (retain, nonatomic) TLKGridLayoutManager *manager; // ivar: _manager
@property (nonatomic) BOOL needsSizingPass; // ivar: _needsSizingPass
@property (retain, nonatomic) TLKTableRow *tableRow; // ivar: _tableRow


+(void)updateLabel:(id)arg0 withRichText:(id)arg1 alignment:(NSInteger)arg2 ;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(id)init;
-(id)leadingTextView;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)generateLabelsAndImagesIfNecessary;
-(void)layoutSubviews;
-(void)observedPropertiesChanged;
-(void)resetStateOfAllViews;


@end


#endif