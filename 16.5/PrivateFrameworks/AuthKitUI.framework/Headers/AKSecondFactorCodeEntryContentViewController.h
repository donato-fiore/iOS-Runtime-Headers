// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKSECONDFACTORCODEENTRYCONTENTVIEWCONTROLLER_H
#define AKSECONDFACTORCODEENTRYCONTENTVIEWCONTROLLER_H

@class UIViewController, NSArray, AKAppleIDAuthenticationContext, NSString;
@protocol CAAnimationDelegate, AKSecondFactorCodeEntry;


#import "AKCodeEntryView.h"
#import "AKBasicLoginContentViewController.h"

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry>



@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (retain, nonatomic) AKCodeEntryView *codeGeneratorView; // ivar: _codeGeneratorView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *generatedCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason;
@property (readonly) Class superclass;
@property (retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController; // ivar: _titleHeaderViewController


-(void)_configureCodeGenView;
-(void)_configureTitleHeaderView;
-(void)_updateFontContstraints:(id)arg0 ;
-(void)clearSecondFactorEntry;
-(void)dealloc;
-(void)jiggleAView;
-(void)loadView;
-(void)setPasscodeFieldDisabled:(BOOL)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif