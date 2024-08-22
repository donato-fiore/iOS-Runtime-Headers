// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPAGEFORMATMENUCONTROLLER_H
#define _SFPAGEFORMATMENUCONTROLLER_H

@class NSArray, NSString, _SFPageFormatMenuUIMenuBuilder, UIViewController;
@protocol _SFPageFormatMenuItemControllerDelegate, SFMenuConfiguring, _SFBrowserContentController;

#import <Foundation/Foundation.h>

#import "_SFSettingsAlertItem.h"

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate, SFMenuConfiguring>

 {
    _SFSettingsAlertItem *_readerAlertItem;
    _SFSettingsAlertItem *_downloadsAlertItem;
    NSArray *_translationAlertItems;
}


@property (readonly, weak, nonatomic) NSObject<_SFBrowserContentController> *browserContentController; // ivar: _browserContentController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _SFSettingsAlertItem *readerAlertItem;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _SFPageFormatMenuUIMenuBuilder *uiMenuBuilder; // ivar: _uiMenuBuilder
@property (readonly, weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_canHideToolbar;
-(BOOL)_canShowChangeSearchFieldPosition;
-(BOOL)_canShowWebsiteSettings;
-(BOOL)_canToggleBetweenDesktopAndMobileSite;
-(BOOL)_canToggleContentBlockers;
-(BOOL)_canTogglePrivateRelay;
-(BOOL)_hasStartedTranslation;
-(BOOL)_shouldEnableDownloadsAlert;
-(BOOL)_shouldShowUnviewedFinishedDownloadsIndicator;
-(id)_changeSearchFieldPositionAlertItem;
-(id)_contentBlockersToggleAlertItem;
-(id)_desktopMobileToggleAlertItemWithOrientation:(NSInteger)arg0 ;
-(id)_downloadsAlertItem;
-(id)_exitTranslationAlertItem;
-(id)_fullScreenAlertItem;
-(id)_internalTapToRadarTranslationAlertItem;
-(id)_localizedStringOfRunningDownloads;
-(id)_manageExtensionsAlertItem;
-(id)_mediaStateAlertItem;
-(id)_pageZoomAlertItem;
-(id)_privateRelayToggleAlertItem;
-(id)_readerFontAlertItem;
-(id)_readerTextSizeAlertItem;
-(id)_readerThemeAlertItem;
-(id)_translateAlertItemForLocaleIdentifier:(id)arg0 ;
-(id)_userFeedbackTranslationAlertItem;
-(id)_websiteSettingsAlertItem;
-(id)initWithBrowserContentController:(id)arg0 ;
-(id)menuForOrientation:(NSInteger)arg0 sourceInfo:(id)arg1 ;
-(id)viewControllerForPresentationForItemController:(id)arg0 ;
-(void)_anchorInWindowCoordinatesForAlert:(id)arg0 ;
-(void)_buildTranslationAlertItemsWithSourceInfo:(id)arg0 ;
-(void)_didFinishLastDownload:(id)arg0 ;
-(void)_hasUnviewedDownloadsDidChange:(id)arg0 ;
-(void)_readerAvailabilityDidChange:(id)arg0 ;
-(void)_totalProgressDidChange:(id)arg0 ;
-(void)_translationAvailabilityDidChange:(id)arg0 ;
-(void)_updateDownloadsAlertItem:(id)arg0 ;
-(void)configureMenuAndAdoptButton:(id)arg0 ;
-(void)dismissMenu;
-(void)presentMenuFromViewController:(id)arg0 withSourceInfo:(id)arg1 ;
-(void)presentModalViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif