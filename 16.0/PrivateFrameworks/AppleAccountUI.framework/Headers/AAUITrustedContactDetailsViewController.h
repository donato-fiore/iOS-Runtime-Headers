// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUITRUSTEDCONTACTDETAILSVIEWCONTROLLER_H
#define AAUITRUSTEDCONTACTDETAILSVIEWCONTROLLER_H

@class PSListController, AALocalContactInfo, AATrustedContactDetailsViewModel;
@protocol AAUITrustedContactDetailsActionHandler;



@interface AAUITrustedContactDetailsViewController : PSListController {
    id<AAUITrustedContactDetailsActionHandler> *_actionHandler;
    AALocalContactInfo *_contact;
    AATrustedContactDetailsViewModel *_viewModel;
}




-(id)_bigContactSpecifier;
-(id)_destructiveActionRowSpecifier;
-(id)_detailsRowSpecifier;
-(id)_optionsGroupSpecifier;
-(id)_primaryActionRowSpecifier;
-(id)_secondaryActionRowSpecifier;
-(id)initWithContact:(id)arg0 viewModel:(id)arg1 actionHandler:(id)arg2 ;
-(id)specifiers;
-(void)_doDestructiveAction:(id)arg0 ;
-(void)_doPrimaryAction:(id)arg0 ;
-(void)_doSecondaryAction:(id)arg0 ;
-(void)_showDestructiveAlert:(id)arg0 ;


@end


#endif