// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREMOTESHARESECUREELEMENTPASSVIEWCONTROLLER_H
#define PKREMOTESHARESECUREELEMENTPASSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKClientShareSecureElementPassViewControllerDelegate, PKRemoteShareSecureElementPassViewControllerProtocol;


#import "PKPassShareInitiationNavigationController.h"

@interface PKRemoteShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate, PKRemoteShareSecureElementPassViewControllerProtocol>

 {
    PKPassShareInitiationNavigationController *_shareNavigationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_setRootViewController:(id)arg0 ;
-(void)didCreateShareURL:(id)arg0 activationCode:(id)arg1 error:(id)arg2 ;
-(void)didFinishShareWithDidUserShare:(BOOL)arg0 error:(id)arg1 ;
-(void)loadView;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)setPass:(id)arg0 environment:(NSUInteger)arg1 isFromPeopleScreen:(BOOL)arg2 completion:(id)arg3 ;
-(void)setShouldPromptUserToShare:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif