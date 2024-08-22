// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI42VERIFICATIONSYMPTOMDATEENTRYVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI42VERIFICATIONSYMPTOMDATEENTRYVIEWCONTROLLER_H

@class OBTableWelcomeController;
@protocol UITableViewDelegate;



@interface _TtC28HealthExposureNotificationUI42VerificationSymptomDateEntryViewController : OBTableWelcomeController <UITableViewDelegate>

 {
    ? flow;
    ? healthAgencyModel;
    ? hasSymptoms;
    ? symptomOnsetDate;
    ? isShowingDatePicker;
    ? dataSource;
    ? primaryButton;
    ? secondaryButton;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)datePickerValueChanged:(id)arg0 ;
-(void)didTapCancel;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSymptomsDateCell:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif