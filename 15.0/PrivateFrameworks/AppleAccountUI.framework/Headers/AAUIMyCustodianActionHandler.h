// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIMYCUSTODIANACTIONHANDLER_H
#define AAUIMYCUSTODIANACTIONHANDLER_H

@class AIDAAccountManager, AALocalContactInfo, NSString;
@protocol AAUITrustedContactDetailsActionHandler;

#import <Foundation/Foundation.h>

#import "AAUISpinnerManager.h"

@interface AAUIMyCustodianActionHandler : NSObject <AAUITrustedContactDetailsActionHandler>

 {
    AAUISpinnerManager *_spinnerManager;
    AIDAAccountManager *_accountManager;
}


@property (readonly, nonatomic) AALocalContactInfo *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountManager:(id)arg0 localContact:(id)arg1 ;
-(void)_doCustodianRemoveWithViewController:(id)arg0 ;
-(void)_stopSpinners;
-(void)doDestructiveAction:(id)arg0 specifier:(id)arg1 ;


@end


#endif