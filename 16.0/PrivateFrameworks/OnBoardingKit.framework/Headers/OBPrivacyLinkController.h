// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBPRIVACYLINKCONTROLLER_H
#define OBPRIVACYLINKCONTROLLER_H

@class UIViewController, NSArray, UIColor, NSString;


#import "OBBundle.h"
#import "OBPrivacyFlow.h"

@interface OBPrivacyLinkController : UIViewController {
    NSArray *_bundles;
    NSArray *_bundleIdentifiers;
    BOOL _didOverrideShowUnifiedAbout;
}


@property BOOL allowsOpeningSafari; // ivar: _allowsOpeningSafari
@property (readonly) OBBundle *bundle;
@property (readonly) NSArray *bundles;
@property (retain, nonatomic) UIColor *customTintColor; // ivar: _customTintColor
@property BOOL displayCaptionText; // ivar: _displayCaptionText
@property NSUInteger displayDeviceType; // ivar: _displayDeviceType
@property BOOL displayIcon; // ivar: _displayIcon
@property (retain) NSString *displayLanguage; // ivar: _displayLanguage
@property BOOL displayLargeIcon; // ivar: _displayLargeIcon
@property (readonly) OBPrivacyFlow *flow;
@property (nonatomic) BOOL presentedViewControllerShouldUseDarkMode; // ivar: _presentedViewControllerShouldUseDarkMode
@property (nonatomic) BOOL showsLinkToUnifiedAbout; // ivar: _showsLinkToUnifiedAbout
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


+(Class)_platformSpecificClass;
+(id)linkWithBundleAtPath:(id)arg0 ;
+(id)linkWithBundleIdentifier:(id)arg0 ;
+(id)linkWithBundleIdentifiers:(id)arg0 ;
-(id)_privacyPresenter;
-(id)initWithBundleIdentifiers:(id)arg0 ;
-(id)initWithPrivacyBundle:(id)arg0 ;
-(void)linkPressed;
-(void)setLinkEnabled:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif