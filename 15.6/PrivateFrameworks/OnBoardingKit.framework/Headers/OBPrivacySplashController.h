// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBPRIVACYSPLASHCONTROLLER_H
#define OBPRIVACYSPLASHCONTROLLER_H

@class UIColor, NSString, UILabel, UIButton;


#import "OBWelcomeController.h"
#import "OBPrivacyFlow.h"

@interface OBPrivacySplashController : OBWelcomeController {
    OBPrivacyFlow *_flow;
}


@property BOOL allowsOpeningSafari; // ivar: _allowsOpeningSafari
@property (retain, nonatomic) UIColor *customTintColor; // ivar: _customTintColor
@property (copy) id *defaultButtonHandler; // ivar: _defaultButtonHandler
@property NSUInteger displayDeviceType; // ivar: _displayDeviceType
@property (retain) NSString *displayLanguage; // ivar: _displayLanguage
@property BOOL forceLargeMargins; // ivar: _forceLargeMargins
@property (nonatomic) BOOL isCombined; // ivar: _isCombined
@property (retain) UILabel *linkToPrivacyGateway; // ivar: _linkToPrivacyGateway
@property (retain) UIButton *linkToPrivacyGatewayButton; // ivar: _linkToPrivacyGatewayButton
@property (retain) UILabel *privacyGatewayDescription; // ivar: _privacyGatewayDescription
@property (nonatomic) BOOL showLinkToPrivacyGateway; // ivar: _showLinkToPrivacyGateway
@property BOOL showsLinkToUnifiedAbout; // ivar: _showsLinkToUnifiedAbout
@property BOOL suppressPerPageAnalyticsLogging; // ivar: _suppressPerPageAnalyticsLogging
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks
@property (retain) UIButton *unifiedAboutButton; // ivar: _unifiedAboutButton
@property BOOL useModalStyle; // ivar: _useModalStyle


+(id)splashPageWithBundleIdentifier:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)_defaultButtonTitle;
-(id)initWithFlow:(id)arg0 ;
-(id)initWithPrivacyIdentifier:(id)arg0 ;
-(void)_initializeFromBundle;
-(void)defaultButtonPressed:(id)arg0 ;
-(void)loadView;
-(void)setDismissHandlerForDefaultButton:(id)arg0 ;
-(void)showPrivacyGateway:(id)arg0 ;
-(void)showUnifiedAbout:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFontForPrivacyGateway;
-(void)updateFontForUnifiedAboutButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif