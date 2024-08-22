// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICUSTODIANFORACTIONHANDLER_H
#define AAUICUSTODIANFORACTIONHANDLER_H

@class AALocalContactInfo, NSString;
@protocol AAUITrustedContactDetailsActionHandler;

#import <Foundation/Foundation.h>

#import "AAUIOBWelcomeController.h"

@interface AAUICustodianForActionHandler : NSObject <AAUITrustedContactDetailsActionHandler>

 {
    AALocalContactInfo *_contact;
    AAUIOBWelcomeController *_recoveryViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLocalContact:(id)arg0 ;
-(void)_dismissRecoveryViewController;
-(void)_showHelpNowViewWithRecoveryCode:(id)arg0 presentingViewController:(id)arg1 ;
-(void)doDestructiveAction:(id)arg0 specifier:(id)arg1 ;
-(void)doPrimaryAction:(id)arg0 specifier:(id)arg1 ;


@end


#endif