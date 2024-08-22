// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLCOMPOSEVIEWCONTROLLER_H
#define SLCOMPOSEVIEWCONTROLLER_H

@class UIViewController, NSExtension, NSString, NSArray, NSLayoutConstraint, UIView, _UIRemoteViewController;
@protocol SLRemoteComposeViewControllerDelegateProtocol, _UIRemoteViewControllerContaining;



@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol, _UIRemoteViewControllerContaining>

 {
    NSExtension *_extension;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSArray *_extensionItems;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    NSInteger _savedStatusBarStyle;
    BOOL _wasPresented;
    BOOL _hasInstantiatedExtensionUI;
    BOOL _didFailLoadingRemoteViewController;
    BOOL _didCompleteSheet;
    NSInteger _maximumImageCount;
    NSInteger _maximumURLCount;
    NSInteger _maximumVideoCount;
    NSInteger _numVideosAdded;
    NSInteger _numImagesAdded;
    NSInteger _numURLsAdded;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(BOOL)_isAvailableForServiceType:(id)arg0 inHostApplicationBundleID:(id)arg1 ;
+(BOOL)_isMultiUserDevice;
+(BOOL)_isServiceType:(id)arg0 ;
+(BOOL)_legacyBuiltInAvailabilityForService:(id)arg0 inHostApplicationBundleID:(id)arg1 ;
+(BOOL)isAvailableForExtension:(id)arg0 ;
+(BOOL)isAvailableForExtension:(id)arg0 inHostApplicationBundleID:(id)arg1 ;
+(BOOL)isAvailableForExtensionIdentifier:(id)arg0 ;
+(BOOL)isAvailableForServiceType:(id)arg0 ;
+(id)_extensionIdentifierForServiceType:(id)arg0 ;
+(id)_serviceTypeForExtensionIdentifier:(id)arg0 ;
+(id)_shareExtensionWithIdentifier:(id)arg0 ;
+(id)_unsupportedServiceTypes;
+(id)composeViewControllerForExtension:(id)arg0 ;
+(id)composeViewControllerForExtensionIdentifier:(id)arg0 ;
+(id)composeViewControllerForServiceType:(id)arg0 ;
+(id)extensionIdentifierForActivityType:(id)arg0 ;
-(BOOL)_addImageAsset:(id)arg0 preview:(id)arg1 ;
-(BOOL)_addImageJPEGData:(id)arg0 preview:(id)arg1 ;
-(BOOL)_addURL:(id)arg0 type:(NSInteger)arg1 preview:(id)arg2 ;
-(BOOL)_addVideoAsset:(id)arg0 preview:(id)arg1 ;
-(BOOL)_addVideoData:(id)arg0 preview:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_useCustomDimmingView;
-(BOOL)addAttachment:(id)arg0 ;
-(BOOL)addExtensionItem:(id)arg0 ;
-(BOOL)addImage:(id)arg0 ;
-(BOOL)addImageAsset:(id)arg0 ;
-(BOOL)addItemProvider:(id)arg0 ;
-(BOOL)addURL:(id)arg0 ;
-(BOOL)addURL:(id)arg0 withPreviewImage:(id)arg1 ;
-(BOOL)canAddContent;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(BOOL)setInitialText:(id)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)supportsImageAsset:(id)arg0 ;
-(BOOL)supportsVideoAsset:(id)arg0 ;
-(id)_urlForUntypedAsset:(id)arg0 ;
-(id)addDownSampledImageDataByProxyWithPreviewImage:(SEL)arg0 ;
-(id)initWithExtension:(id)arg0 requestedServiceType:(id)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg0 ;
-(id)initWithServiceType:(id)arg0 ;
-(void)_handleRemoteViewFailure;
-(void)_instantiateAndBeginExtensionIfNeeded;
-(void)_instantiateAndBeginExtensionIfNeededWithCompletion:(id)arg0 ;
-(void)completeWithResult:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didLoadSheetViewController;
-(void)remoteController:(id)arg0 didLoadWithError:(id)arg1 ;
-(void)remoteViewController:(id)arg0 didTerminateWithError:(id)arg1 ;
-(void)setLongitude:(CGFloat)arg0 latitude:(CGFloat)arg1 name:(id)arg2 ;
-(void)userDidCancel;
-(void)userDidPost;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif