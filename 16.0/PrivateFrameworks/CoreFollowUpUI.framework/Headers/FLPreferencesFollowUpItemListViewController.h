// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLPREFERENCESFOLLOWUPITEMLISTVIEWCONTROLLER_H
#define FLPREFERENCESFOLLOWUPITEMLISTVIEWCONTROLLER_H

@class PSListController, NSString, UIViewController;
@protocol FLSpecifierTapHandlerDelegate, FLViewModel;


#import "FLSpecifierTapHandler.h"

@interface FLPreferencesFollowUpItemListViewController : PSListController <FLSpecifierTapHandlerDelegate>

 {
    id<FLViewModel> *_viewModel;
    FLSpecifierTapHandler *_actionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentationContext; // ivar: _presentationContext
@property (readonly) Class superclass;


-(id)_viewModel;
-(id)detailSpecifiersForFollowUpItem:(id)arg0 ;
-(id)followUpItemSpecifiers;
-(id)specifiers;
-(void)_dismissFlowWithError:(id)arg0 ;
-(void)_showRadarPromptForItem:(id)arg0 action:(id)arg1 ;
-(void)actionTapped:(id)arg0 ;
-(void)handleURL:(id)arg0 ;
-(void)preflightNetworkConnectivityForHandler:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)reloadSpecifiers;
-(void)setSpecifier:(id)arg0 ;
-(void)startPresentingForHandler:(id)arg0 withRemoteController:(id)arg1 ;


@end


#endif