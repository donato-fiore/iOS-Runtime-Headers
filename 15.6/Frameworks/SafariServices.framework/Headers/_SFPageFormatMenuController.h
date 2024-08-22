// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPAGEFORMATMENUCONTROLLER_H
#define _SFPAGEFORMATMENUCONTROLLER_H

@class NSArray, NSString, UIViewController;
@protocol _SFPageFormatMenuItemControllerDelegate, _SFSettingsAlertControllerDelegate, _SFBrowserContentController;

#import <Foundation/Foundation.h>

#import "_SFSettingsAlertItem.h"

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate, _SFSettingsAlertControllerDelegate>

 {
    _SFSettingsAlertItem *_readerAlertItem;
    NSArray *_translationAlertItems;
}


@property (readonly, weak, nonatomic) NSObject<_SFBrowserContentController> *browserContentController; // ivar: _browserContentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFSettingsAlertItem *readerAlertItem;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_canHideToolbar;
-(BOOL)_canShowChangeSearchFieldPosition;
-(BOOL)_canToggleContentBlockers;
-(BOOL)_hasStartedTranslation;
-(id)_changeSearchFieldPositionAlertItem;
-(id)_contentBlockersToggleAlertItem;
-(id)_desktopMobileToggleAlertItemWithOrientation:(NSInteger)arg0 ;
-(id)_downloadsAlertItem;
-(id)_exitTranslationAlertItem;
-(id)_fullScreenAlertItem;
-(id)_internalTapToRadarTranslationAlertItem;
-(id)_manageWebExtensionsAlertItem;
-(id)_mediaStateAlertItem;
-(id)_pageZoomAlertItem;
-(id)_readerFontAlertItem;
-(id)_readerTextSizeAlertItem;
-(id)_readerThemeAlertItem;
-(id)_sitePreferencesAlertItem;
-(id)_translateAlertItemForLocaleIdentifier:(id)arg0 ;
-(id)_userFeedbackTranslationAlertItem;
-(id)initWithBrowserContentController:(id)arg0 ;
-(id)menuForOrientation:(NSInteger)arg0 sourceInfo:(id)arg1 ;
-(id)viewControllerForPresentationForItemController:(id)arg0 ;
-(void)_anchorInWindowCoordinatesForAlert:(id)arg0 ;
-(void)_buildTranslationAlertItemsWithSourceInfo:(id)arg0 ;
-(void)_readerAvailabilityDidChange:(id)arg0 ;
-(void)_translationAvailabilityDidChange:(id)arg0 ;
-(void)alertController:(id)arg0 didAddItem:(id)arg1 ;
-(void)dismissMenu;
-(void)presentMenuFromViewController:(id)arg0 withSourceInfo:(id)arg1 ;
-(void)presentModalViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif