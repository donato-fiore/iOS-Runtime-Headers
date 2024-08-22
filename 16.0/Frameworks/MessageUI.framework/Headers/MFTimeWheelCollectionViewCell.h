// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFTIMEWHEELCOLLECTIONVIEWCELL_H
#define MFTIMEWHEELCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, NSDate, UIDatePicker;
@protocol MFTimeWheelCollectionViewCellDelegate;



@interface MFTimeWheelCollectionViewCell : UICollectionViewListCell

@property (weak, nonatomic) NSObject<MFTimeWheelCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) UIDatePicker *timePicker; // ivar: _timePicker


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)datePickerChanged:(id)arg0 ;


@end


#endif