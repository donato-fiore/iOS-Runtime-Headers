// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUI28TIMEPICKERCOLLECTIONVIEWCELL_H
#define _TTC13SLEEPHEALTHUI28TIMEPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, NSString;
@protocol UIPickerViewDelegate;



@interface _TtC13SleepHealthUI28TimePickerCollectionViewCell : UICollectionViewListCell <UIPickerViewDelegate>

 {
    ? item;
    ? $__lazy_storage_$_timePicker;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)prepareForReuse;


@end


#endif