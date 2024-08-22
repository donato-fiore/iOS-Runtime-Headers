// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDATETIMECELL_H
#define EKDATETIMECELL_H

@class UITableViewCell, UILabel, UIDatePicker, NSArray, UITapGestureRecognizer, NSString;
@protocol _UIDatePickerCompactStyleDelegate, EKDateTimeCellDelegate;



@interface EKDateTimeCell : UITableViewCell <_UIDatePickerCompactStyleDelegate>

 {
    UILabel *_titleLabel;
    UIDatePicker *_datePicker;
    NSInteger _currentVisibleComponent;
    BOOL _isEditing;
    NSArray *_currentConstraints;
    UITapGestureRecognizer *_gestureRecognizer;
}


@property (nonatomic) NSObject<EKDateTimeCellDelegate> *dateTimeDelegate; // ivar: _dateTimeDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_datePicker:(id)arg0 didSelectComponent:(NSInteger)arg1 ;
-(void)_updateConstraints;
-(void)contentSizeCategoryChanged;
-(void)datePickerBeganEditing:(id)arg0 ;
-(void)datePickerChanged:(id)arg0 ;
-(void)datePickerEndedEditing:(id)arg0 ;
-(void)handleTap;
-(void)replaceControlsWithPicker:(id)arg0 ;
-(void)resetDatePickerSelection;
-(void)setTitle:(id)arg0 ;
-(void)updateWithDate:(id)arg0 timeZone:(id)arg1 allDay:(BOOL)arg2 needsStrikethrough:(BOOL)arg3 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif