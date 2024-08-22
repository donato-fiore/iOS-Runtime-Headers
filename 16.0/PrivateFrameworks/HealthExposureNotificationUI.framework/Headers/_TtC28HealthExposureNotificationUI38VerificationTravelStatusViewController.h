// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI38VERIFICATIONTRAVELSTATUSVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI38VERIFICATIONTRAVELSTATUSVIEWCONTROLLER_H

@class OBTableWelcomeController;
@protocol UITableViewDelegate;



@interface _TtC28HealthExposureNotificationUI38VerificationTravelStatusViewController : OBTableWelcomeController <UITableViewDelegate>

 {
    ? flow;
    ? healthAgencyModel;
    ? hasTraveled;
    ? dataSource;
    ? traveledCell;
    ? notTraveledCell;
    ? primaryButton;
    ? secondaryButton;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)didTapCancel;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif