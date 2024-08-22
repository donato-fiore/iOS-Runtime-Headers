// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPICKERPRINCIPALUIVIEWCONTROLLER_H
#define PUPICKERPRINCIPALUIVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, NSString, NSFileProviderDomain, NSOrderedSet, NSDate;
@protocol PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling, PUPickerPrincipalUIViewControllerInterface;


#import "PUAssetPickerCoordinator.h"

@interface PUPickerPrincipalUIViewController : UIViewController <PUAssetPickerCoordinatorActionHandler, _PUPickerUnavailableUIViewControllerDelegate, NSExtensionRequestHandling, PUPickerPrincipalUIViewControllerInterface>



@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) PUAssetPickerCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingSafeAreaConstraint; // ivar: _leadingSafeAreaConstraint
@property (retain, nonatomic) NSOrderedSet *selectedObjectIDs; // ivar: _selectedObjectIDs
@property (retain, nonatomic) NSDate *selectionDate; // ivar: _selectionDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingSafeAreaConstraint; // ivar: _trailingSafeAreaConstraint


+(BOOL)shouldDebounceDidFinishPicking:(id)arg0 previousSelectedObjectIDs:(id)arg1 previousSelectionDate:(id)arg2 ;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(void)initialize;
-(BOOL)setImagePickerPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(id)synchronousLoadConfigurationFromExtensionContext:(*id)arg0 ;
-(void)_deselectAssetsWithIdentifiers:(id)arg0 ;
-(void)_moveAssetWithIdentifier:(id)arg0 afterIdentifier:(id)arg1 ;
-(void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)arg0 ;
-(void)confirmPicking:(id)arg0 completionHandler:(id)arg1 ;
-(void)coordinator:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)finishPicking:(id)arg0 ;
-(void)logExitIfNeeded:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif