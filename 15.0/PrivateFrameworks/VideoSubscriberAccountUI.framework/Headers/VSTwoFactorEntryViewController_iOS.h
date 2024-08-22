// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSTWOFACTORENTRYVIEWCONTROLLER_IOS_H
#define VSTWOFACTORENTRYVIEWCONTROLLER_IOS_H

@class UIViewController, NSArray, NSString, UIScrollView, UIBarButtonItem;
@protocol UIScrollViewDelegate, VSTwoFactorDigitViewDelegate, VSTwoFactorEntryViewController, VSAuthenticationViewControllerDelegate;


#import "VSTwoFactorDigitView.h"
#import "VSFontCenter.h"
#import "VSIdentityProviderLogoView.h"
#import "VSTwoFactorEntryViewModel.h"

@interface VSTwoFactorEntryViewController_iOS : UIViewController <UIScrollViewDelegate, VSTwoFactorDigitViewDelegate, VSTwoFactorEntryViewController>



@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSTwoFactorDigitView *digitView; // ivar: _digitView
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView; // ivar: _logoView
@property (readonly, nonatomic) CGSize preferredLogoSize;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIBarButtonItem *verifyButton; // ivar: _verifyButton
@property (retain, nonatomic) VSTwoFactorEntryViewModel *viewModel; // ivar: _viewModel


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)buttonPressed:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)startObservingViewModel:(id)arg0 ;
-(void)stopObservingViewModel:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)twoFactorDigitView:(id)arg0 textDidChange:(id)arg1 ;
-(void)verifyButtonPressed:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif