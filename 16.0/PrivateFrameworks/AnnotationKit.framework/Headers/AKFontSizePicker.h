// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFONTSIZEPICKER_H
#define AKFONTSIZEPICKER_H

@class UIControl, NSString, UILabel, UICollectionView, NSArray, UISlider, UIStepper;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;



@interface AKFontSizePicker : UIControl <UICollectionViewDataSource, UICollectionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didEndTrackingUpdates; // ivar: _didEndTrackingUpdates
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UICollectionView *sizeList; // ivar: _sizeList
@property (retain, nonatomic) NSArray *sizeListValues; // ivar: _sizeListValues
@property (retain, nonatomic) UISlider *slider; // ivar: _slider
@property (retain, nonatomic) UIStepper *stepper; // ivar: _stepper
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) CGFloat value; // ivar: _value
@property (copy, nonatomic) id *willBeginTrackingUpdates; // ivar: _willBeginTrackingUpdates


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(struct CGSize )_itemSizeInContainer;
-(void)_decreaseSize:(id)arg0 ;
-(void)_handleValueChanged:(id)arg0 ;
-(void)_increaseSize:(id)arg0 ;
-(void)_selectSizeInList;
-(void)_sliderTouchDown:(id)arg0 ;
-(void)_sliderTouchUp:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;


@end


#endif