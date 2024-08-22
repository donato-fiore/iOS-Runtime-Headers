// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIMYBENEFICIARYACTIONHANDLER_H
#define AAUIMYBENEFICIARYACTIONHANDLER_H

@class AIDAAccountManager, AALocalContactInfo, NSString;
@protocol AAUITrustedContactDetailsActionHandler;

#import <Foundation/Foundation.h>

#import "AAUISpinnerManager.h"

@interface AAUIMyBeneficiaryActionHandler : NSObject <AAUITrustedContactDetailsActionHandler>

 {
    AIDAAccountManager *_accountManager;
    AALocalContactInfo *_contact;
    AAUISpinnerManager *_spinnerManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountManager:(id)arg0 localContact:(id)arg1 ;
-(void)_doBeneficiaryRemoveWithViewController:(id)arg0 ;
-(void)_navigateToAccessKeyScreenFromViewController:(id)arg0 ;
-(void)_showAuthPromptInViewController:(id)arg0 ;
-(void)_startSpinnerInSpecifier:(id)arg0 ;
-(void)_stopAllSpinners;
-(void)doDestructiveAction:(id)arg0 specifier:(id)arg1 ;
-(void)doPrimaryAction:(id)arg0 specifier:(id)arg1 ;


@end


#endif