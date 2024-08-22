// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTHISTORYVIEWCONTROLLER_H
#define ASSISTANTHISTORYVIEWCONTROLLER_H

@class PSListController, AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;
@protocol AssistantHistoryDelegate;



@interface AssistantHistoryViewController : PSListController {
    AFSettingsConnection *_settingsConnection;
    PSDeleteButtonCell *_deleteButtonCell;
    UIActivityIndicatorView *_indicatorView;
}


@property (weak, nonatomic) NSObject<AssistantHistoryDelegate> *delegate; // ivar: _delegate


-(NSInteger)_getDataSharingOptInStatus;
-(id)_deletionResponseAlertForFailure;
-(id)init;
-(id)specifiers;
-(void)_animateSpinnerIn;
-(void)_deleteSiriHistory;
-(void)_endIndicatorViewSpinning;
-(void)_handleDeleteSiriHistoryButtonPress;
-(void)_presentErrorAlert;
-(void)_presentPrivacySheet;
-(void)_startIndicatorViewSpinning;


@end


#endif