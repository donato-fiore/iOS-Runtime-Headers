// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHPICKERVIEWCONTROLLER_H
#define PHPICKERVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSExtension, NSString;
@protocol _UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface, NSCopying, PHPickerViewControllerDelegate;


#import "PUPickerRemoteUIViewController.h"
#import "PHPickerConfiguration.h"

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension; // ivar: __extension
@property (copy, nonatomic, setter=_setExtensionRequestIdentifier:) NSObject<NSCopying> *_extensionRequestIdentifier; // ivar: __extensionRequestIdentifier
@property (retain, nonatomic, setter=_setOverlayStorage:) id *_overlayStorage; // ivar: __overlayStorage
@property (retain, nonatomic, setter=_setRemoteUIViewController:) PUPickerRemoteUIViewController *_remoteUIViewController; // ivar: __remoteUIViewController
@property (readonly, copy, nonatomic) PHPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PHPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_addOrReplaceChildUnavailableUIViewController:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_cancelExistingExtensionRequestIfPossible;
-(void)_deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)_handleRemoteViewControllerConnection:(id)arg0 extension:(id)arg1 extensionRequestIdentifier:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)_moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)_pickerDidFinishPicking:(id)arg0 ;
-(void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg0 ;
-(void)_pickerUnavailableUIViewControllerRetryButtonTapped:(id)arg0 ;
-(void)_setup:(id)arg0 ;
-(void)_setupExtension:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setupRemoteViewControllerForExtension:(id)arg0 withExtensionItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif