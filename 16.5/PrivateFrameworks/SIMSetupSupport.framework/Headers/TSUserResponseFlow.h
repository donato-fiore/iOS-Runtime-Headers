// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSERRESPONSEFLOW_H
#define TSUSERRESPONSEFLOW_H

@class NSString, UIBarButtonItem;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSUserResponseFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    BOOL _confirmationCodeRequired;
    NSString *_confirmationCode;
    UIBarButtonItem *_cancelButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property NSUInteger userConsentType; // ivar: _userConsentType


-(id)firstViewController;
-(id)initWithConfirmationCodeRequired:(BOOL)arg0 ;
-(id)nextViewControllerFrom:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;
-(void)setDefaultNavigationItems:(id)arg0 ;
-(void)viewControllerDidComplete:(id)arg0 ;


@end


#endif