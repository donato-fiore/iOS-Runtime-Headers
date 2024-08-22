// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCALENDARCOLLECTIONVIEWCELL_H
#define MFCALENDARCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UIDatePicker;
@protocol MFCalendarCollectionViewCellDelegate;



@interface MFCalendarCollectionViewCell : UICollectionViewListCell

@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (weak, nonatomic) NSObject<MFCalendarCollectionViewCellDelegate> *delegate; // ivar: _delegate


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)datePickerChanged:(id)arg0 ;


@end


#endif