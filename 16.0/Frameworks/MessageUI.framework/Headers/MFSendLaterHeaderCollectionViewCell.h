// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSENDLATERHEADERCOLLECTIONVIEWCELL_H
#define MFSENDLATERHEADERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIDatePicker, NSString;
@protocol _UIDatePickerCompactStyleDelegate, MFSendLaterHeaderCollectionViewCellDelegate;



@interface MFSendLaterHeaderCollectionViewCell : UICollectionViewCell <_UIDatePickerCompactStyleDelegate>



@property (nonatomic) NSInteger currentVisibleComponent; // ivar: _currentVisibleComponent
@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFSendLaterHeaderCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_datePicker:(id)arg0 didSelectComponent:(NSInteger)arg1 ;
-(void)updateActiveComponent:(NSInteger)arg0 ;
-(void)updateWithDate:(id)arg0 timeZone:(id)arg1 ;


@end


#endif