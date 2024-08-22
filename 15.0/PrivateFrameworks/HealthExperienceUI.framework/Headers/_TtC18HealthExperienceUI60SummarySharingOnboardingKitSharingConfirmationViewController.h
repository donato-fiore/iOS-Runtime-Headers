// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI60SUMMARYSHARINGONBOARDINGKITSHARINGCONFIRMATIONVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI60SUMMARYSHARINGONBOARDINGKITSHARINGCONFIRMATIONVIEWCONTROLLER_H

@class TtC18HealthExperienceUI37OnBoardingKitCollectionViewController;



@interface _TtC18HealthExperienceUI60SummarySharingOnboardingKitSharingConfirmationViewController : TtC18HealthExperienceUI37OnBoardingKitCollectionViewController {
    ? healthExperienceStore;
    ? selectedContact;
    ? selectedContactPhotoPublisher;
    ? selectionFlowContext;
    ? confirmationVC;
    ? selectedDataTypesContext;
    ? sharingEntryStore;
    ? healthStore;
    ? sendInviteCancellable;
    ? cancellables;
    ? selectedContactICloudIdentifier;
    ? hasCommittedTransaction;
}




-(void)cancelButtonTapped:(id)arg0 ;
-(void)nextButtonTapped:(id)arg0 ;


@end


#endif