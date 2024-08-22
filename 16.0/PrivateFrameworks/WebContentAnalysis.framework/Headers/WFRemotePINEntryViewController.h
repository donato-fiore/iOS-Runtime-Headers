// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEPINENTRYVIEWCONTROLLER_H
#define WFREMOTEPINENTRYVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol WFPINEntryViewControllerProtocol;



@interface WFRemotePINEntryViewController : UIRemoteViewController <WFPINEntryViewControllerProtocol>



@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)isNumericPIN;
-(BOOL)requiresKeyboard;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)simplePIN;
-(NSUInteger)supportedInterfaceOrientations;
-(void)dealloc;
-(void)getIsPINPresentWithCompletion:(id)arg0 ;
-(void)permitURLWithCompletion:(id)arg0 ;
-(void)setPageTitle:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)userDidCancel;
-(void)userEnteredCorrectPIN;
-(void)viewDidLoad;


@end


#endif