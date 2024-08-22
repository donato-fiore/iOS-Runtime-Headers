// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBSETUPASSISTANTSPINNERCONTROLLER_H
#define OBSETUPASSISTANTSPINNERCONTROLLER_H

@class UIActivityIndicatorView, NSString, UILabel, UIView, UIScrollView;
@protocol OBSetupAssistantSupport;


#import "OBBaseWelcomeController.h"
#import "OBPrivacyLinkController.h"

@interface OBSetupAssistantSpinnerController : OBBaseWelcomeController <OBSetupAssistantSupport>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic, getter=isActivityIndicatorHidden) BOOL activityIndicatorHidden; // ivar: _activityIndicatorHidden
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // ivar: _privacyLinkController
@property (retain, nonatomic) UIView *scrollContentView; // ivar: _scrollContentView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(BOOL)_shouldUseScrollView;
-(id)_textStyle;
-(id)initWithSpinnerText:(id)arg0 ;
-(void)_updateLayout;
-(void)_updateTextColor;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDirectionalLayoutMargins;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif