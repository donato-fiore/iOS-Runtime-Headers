// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSERCONSENTVIEWCONTROLLER_H
#define TSUSERCONSENTVIEWCONTROLLER_H

@class NSString;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBWelcomeController.h"

@interface TSUserConsentViewController : TSOBWelcomeController <TSSetupFlowItem>

 {
    NSUInteger _consentType;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger userConsentResponse; // ivar: _userConsentResponse


+(void)calculateTitleAndDetailsWithName:(id)arg0 consentType:(NSUInteger)arg1 title:(*id)arg2 details:(*id)arg3 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)initWithConsentType:(NSUInteger)arg0 name:(id)arg1 ;
-(void)_acceptButtonTapped;
-(void)_cancelButtonTapped;
-(void)_declineButtonTapped;
-(void)_setNavigationItems;
-(void)viewDidLoad;


@end


#endif