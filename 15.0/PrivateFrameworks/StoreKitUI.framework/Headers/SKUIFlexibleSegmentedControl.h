// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIFLEXIBLESEGMENTEDCONTROL_H
#define SKUIFLEXIBLESEGMENTEDCONTROL_H

@class UIView, UISegmentedControl, NSArray, NSString;
@protocol SKUIFlexibleSegmentedControlDelegate;



@interface SKUIFlexibleSegmentedControl : UIView {
    BOOL _isMoreListSelected;
    NSInteger _previousSelectedSegmentIndex;
    UISegmentedControl *_segmentedControl;
}


@property (weak, nonatomic) NSObject<SKUIFlexibleSegmentedControlDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat desiredSegmentWidth; // ivar: _desiredSegmentWidth
@property (copy, nonatomic) NSArray *itemTitles; // ivar: _itemTitles
@property (nonatomic) NSInteger maximumNumberOfVisibleItems; // ivar: _maximumNumberOfVisibleItems
@property (readonly, nonatomic) NSInteger moreListIndex;
@property (copy, nonatomic) NSString *moreListTitle; // ivar: _moreListTitle
@property (nonatomic) NSInteger selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (nonatomic) BOOL sizesSegmentsToFitWidth; // ivar: _sizesSegmentsToFitWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForSegmentWithIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureSegmentedControl:(id)arg0 withTitles:(id)arg1 boundingSize:(struct CGSize )arg2 ;
-(void)_setTitles:(id)arg0 forSegmentedControl:(id)arg1 ;
-(void)_valueChangeAction:(id)arg0 ;
-(void)cancelMoreList;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif