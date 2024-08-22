// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERUSERINFOSECTIONCONTROLLER_H
#define PKPAYLATERUSERINFOSECTIONCONTROLLER_H

@class PKPayLaterAccountUserInfo, PKPaymentWebService;
@protocol PKPayLaterUserInfoSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterSubtitleRow.h"

@interface PKPayLaterUserInfoSectionController : PKPayLaterSectionController {
    id<PKPayLaterUserInfoSectionControllerDelegate> *_delegate;
    PKPayLaterAccountUserInfo *_userInfo;
    PKPaymentWebService *_paymentWebService;
    PKPayLaterSubtitleRow *_phoneRow;
    PKPayLaterSubtitleRow *_addressRow;
    PKPayLaterSubtitleRow *_incomeRow;
    BOOL _processingRowTap;
}




-(id)_addressRow;
-(id)_dobRow;
-(id)_legalNameRow;
-(id)_phoneNumberRow;
-(id)_ssnRow;
-(id)_subtitleRowWithTitle:(id)arg0 subtitle:(id)arg1 selectionHandler:(id)arg2 ;
-(id)_yearlyIncomeRow;
-(id)footerContentForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 delegate:(id)arg1 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureEmailAddressSection:(id)arg0 ;
-(void)_configureOtherUserInfoSection:(id)arg0 ;
-(void)_updateUserInfo;
-(void)setPayLaterAccount:(id)arg0 ;


@end


#endif