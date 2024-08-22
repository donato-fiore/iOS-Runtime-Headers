// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPICKERPRINCIPALUIVIEWCONTROLLER_H
#define PUPICKERPRINCIPALUIVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSLayoutConstraint, NSError, NSString, NSFileProviderDomain, PXLoadingStatusManager, NSOrderedSet, NSDate;
@protocol _UIAppearanceRestriction, PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextVendorInterface, NSExtensionRequestHandling;


#import "PUPickerConfiguration.h"
#import "PUAssetPickerCoordinator.h"

@interface PUPickerPrincipalUIViewController : UIViewController <_UIAppearanceRestriction, PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableViewControllerDelegate, _PUPickerExtensionContextVendorInterface, NSExtensionRequestHandling>



@property (retain, nonatomic) NSMutableDictionary *activityIndicatorTrackingIDs; // ivar: _activityIndicatorTrackingIDs
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSError *configurationError; // ivar: _configurationError
@property (retain, nonatomic) PUAssetPickerCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (retain, nonatomic) NSError *domainError; // ivar: _domainError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint; // ivar: _leadingSafeAreaConstraint
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (retain, nonatomic) NSMutableDictionary *progressSubscribers; // ivar: _progressSubscribers
@property (retain, nonatomic) NSOrderedSet *selectedObjectIDs; // ivar: _selectedObjectIDs
@property (retain, nonatomic) NSDate *selectionDate; // ivar: _selectionDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint; // ivar: _trailingSafeAreaConstraint


+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)shouldDebounceDidFinishPicking:(id)arg0 previousSelectedObjectIDs:(id)arg1 previousSelectionDate:(id)arg2 ;
+(void)initialize;
-(BOOL)updatePicker;
-(id)showProgress:(SEL)arg0 forAsset:(id)arg1 progressURL:(id)arg2 ;
-(void)_deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)_moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)_pickerUnavailableViewControllerCancelButtonTapped:(id)arg0 ;
-(void)_popViewControllerWithReply:(id)arg0 ;
-(void)_searchWithString:(id)arg0 ;
-(void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)arg0 ;
-(void)_updateConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)confirmPicking:(id)arg0 completionHandler:(id)arg1 ;
-(void)coordinator:(id)arg0 didFinishPicking:(id)arg1 downscalingTargetDimension:(id)arg2 ;
-(void)finishPicking:(id)arg0 downscalingTargetDimension:(id)arg1 ;
-(void)finishProgress:(id)arg0 progressURL:(id)arg1 trackingID:(id)arg2 observation:(id)arg3 ;
-(void)logExitIfNeeded:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateModalInPresentation;
-(void)updateViewConstraints;


@end


#endif