// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPICKERVIEWCONTROLLER_H
#define PHPICKERVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSExtension, NSString;
@protocol _UIRemoteViewControllerContaining, _UIAppearanceRestriction, _PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextHostInterface, NSCopying, PHPickerViewControllerDelegate;


#import "PUPickerExtensionHostContext.h"
#import "PUPickerRemoteViewController.h"
#import "PHPickerConfiguration.h"

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _UIAppearanceRestriction, _PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextHostInterface>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // ivar: __extension
@property (retain, nonatomic, setter=_setExtensionContext:) PUPickerExtensionHostContext *_extensionContext; // ivar: __extensionContext
@property (copy, nonatomic, setter=_setExtensionRequestIdentifier:) NSObject<NSCopying> *_extensionRequestIdentifier; // ivar: __extensionRequestIdentifier
@property (retain, nonatomic, setter=_setOverlayStorage:) id *_overlayStorage; // ivar: __overlayStorage
@property (nonatomic, setter=_setProvidedCustomPreferredContentSize:) BOOL _providedCustomPreferredContentSize; // ivar: __providedCustomPreferredContentSize
@property (retain, nonatomic, setter=_setRemoteViewController:) PUPickerRemoteViewController *_remoteViewController; // ivar: __remoteViewController
@property (readonly, copy, nonatomic) PHPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)_popViewController;
-(id)childViewControllerForStatusBarHidden;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addOrReplaceChildUnavailableViewController:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_addOrReplaceChildViewController:(id)arg0 ;
-(void)_cancelExistingExtensionRequestIfPossible;
-(void)_deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)_finishPickingWithItemProviders:(id)arg0 ;
-(void)_handleRemoteViewControllerConnection:(id)arg0 extension:(id)arg1 extensionRequestIdentifier:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)_moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)_pickerDidFinishPicking:(id)arg0 ;
-(void)_pickerDidSetModalInPresentation:(BOOL)arg0 ;
-(void)_pickerUnavailableViewControllerCancelButtonTapped:(id)arg0 ;
-(void)_pickerUnavailableViewControllerRetryButtonTapped:(id)arg0 ;
-(void)_searchWithString:(id)arg0 ;
-(void)_setup:(id)arg0 ;
-(void)_setupExtension:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)moveAssetWithIdentifier:(id)arg0 afterAssetWithIdentifier:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;


@end


#endif