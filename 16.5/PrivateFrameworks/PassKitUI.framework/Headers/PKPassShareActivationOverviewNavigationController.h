// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREACTIVATIONOVERVIEWNAVIGATIONCONTROLLER_H
#define PKPASSSHAREACTIVATIONOVERVIEWNAVIGATIONCONTROLLER_H

@class NSMutableArray, NSString;
@protocol PKPassShareActivationOverviewViewControllerDelegate, UISheetPresentationControllerDelegate;


#import "PKNavigationController.h"
#import "PKPassShareInitiationContext.h"

@interface PKPassShareActivationOverviewNavigationController : PKNavigationController <PKPassShareActivationOverviewViewControllerDelegate, UISheetPresentationControllerDelegate>

 {
    PKPassShareInitiationContext *_context;
    id<PKPassShareActivationOverviewViewControllerDelegate> *_delegate;
    NSMutableArray *_optionsToShow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_showNextScreen;
-(void)loadView;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)shareActivationOverviewViewControllerDidFinish:(id)arg0 ;
-(void)shareActivationOverviewViewControllerDidSelectShareCode:(id)arg0 ;


@end


#endif