// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFOVERLAYPROVIDER_H
#define _SFOVERLAYPROVIDER_H

@class CPSInlineCardViewController, UIViewController, NSString, NSURL;
@protocol CPSInlineCardViewControllerDelegate, _SFOverlayProviderDelegate;

#import <Foundation/Foundation.h>

#import "_SFPerSitePreferencesVendor.h"

@interface _SFOverlayProvider : NSObject <CPSInlineCardViewControllerDelegate>

 {
    CPSInlineCardViewController *_cardViewController;
    UIViewController *_cachedOwningViewController;
    _SFPerSitePreferencesVendor *_preferencesVendor;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFOverlayProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *overlayViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)alwaysShowOverlayForDebug;
-(id)initWithURL:(id)arg0 ;
-(void)cardViewControllerDidDisappear:(id)arg0 clipDidOpen:(BOOL)arg1 persistUserSettings:(BOOL)arg2 ;
-(void)hideOverlayAnimated:(BOOL)arg0 ;
-(void)requestOverlayWithPreferencesVendor:(id)arg0 completion:(id)arg1 ;
-(void)showOverlayInScrollView:(id)arg0 viewController:(id)arg1 ;
-(void)webViewBackforwardGestureNavigationDidEnd;
-(void)webViewBackforwardGestureNavigationWillBegin;


@end


#endif