// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFOVERLAYPROVIDER_H
#define SFOVERLAYPROVIDER_H

@class CPSInlineCardViewController, UIViewController, _SFPerSitePreferencesVendor, NSString, NSURL;
@protocol CPSInlineCardViewControllerDelegate, SFOverlayProviderDelegate;

#import <Foundation/Foundation.h>


@interface SFOverlayProvider : NSObject <CPSInlineCardViewControllerDelegate>

 {
    CPSInlineCardViewController *_cardViewController;
    UIViewController *_cachedOwningViewController;
}


@property (weak, nonatomic, setter=_setPreferencesVendor:) _SFPerSitePreferencesVendor *_preferencesVendor; // ivar: __preferencesVendor
@property (nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFOverlayProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *overlayViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)alwaysShowOverlayForDebug;
-(id)initWithURL:(id)arg0 ;
-(void)cardViewControllerDidDisappear:(id)arg0 clipDidOpen:(BOOL)arg1 persistUserSettings:(BOOL)arg2 ;
-(void)hideOverlayAnimated:(BOOL)arg0 ;
-(void)showOverlayInScrollView:(id)arg0 viewController:(id)arg1 ;
-(void)webViewBackforwardGestureNavigationDidEnd;
-(void)webViewBackforwardGestureNavigationWillBegin;


@end


#endif