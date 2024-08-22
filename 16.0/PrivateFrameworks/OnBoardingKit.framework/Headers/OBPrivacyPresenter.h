// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBPRIVACYPRESENTER_H
#define OBPRIVACYPRESENTER_H

@class UIColor, NSString, UIViewController, NSArray;
@protocol UIAdaptivePresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "OBPrivacyCombinedController.h"
#import "OBPrivacySplashController.h"

@interface OBPrivacyPresenter : NSObject <UIAdaptivePresentationControllerDelegate>



@property (nonatomic) BOOL animatePresentAndDismiss; // ivar: _animatePresentAndDismiss
@property (retain) OBPrivacyCombinedController *combinedController; // ivar: _combinedController
@property (retain, nonatomic) UIColor *customTintColor; // ivar: _customTintColor
@property (nonatomic) BOOL darkMode; // ivar: _darkMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *dismissHandler; // ivar: _dismissHandler
@property (retain, nonatomic) NSString *displayLanguage; // ivar: _displayLanguage
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger modalPresentationStyle; // ivar: _modalPresentationStyle
@property (copy) id *presentationCompletionHandler; // ivar: _presentationCompletionHandler
@property (retain) UIViewController *presentedController; // ivar: _presentedController
@property (retain) NSArray *presentedIdentifiers; // ivar: _presentedIdentifiers
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain) OBPrivacySplashController *splashController; // ivar: _splashController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks
@property (nonatomic) BOOL usesFullScreenPresentation; // ivar: _usesFullScreenPresentation


+(id)presenterForPrivacySplashWithBundle:(id)arg0 ;
+(id)presenterForPrivacySplashWithBundleAtPath:(id)arg0 ;
+(id)presenterForPrivacySplashWithIdentifer:(id)arg0 ;
+(id)presenterForPrivacySplashWithIdentifier:(id)arg0 ;
+(id)presenterForPrivacyUnifiedAbout;
+(id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg0 ;
-(void)_presenterDidDismiss;
-(void)dismiss;
-(void)present;
-(void)presentInNavigationStack:(id)arg0 ;
-(void)presentInNavigationStack:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif