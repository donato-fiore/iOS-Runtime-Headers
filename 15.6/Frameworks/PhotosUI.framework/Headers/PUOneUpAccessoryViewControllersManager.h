// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUONEUPACCESSORYVIEWCONTROLLERSMANAGER_H
#define PUONEUPACCESSORYVIEWCONTROLLERSMANAGER_H

@class NSMapTable, NSString;
@protocol PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate;

#import <Foundation/Foundation.h>

#import "PUOneUpViewControllerSpec.h"
#import "PUBrowsingSession.h"

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate>

 {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) NSMapTable *_accessoryViewControllers; // ivar: __accessoryViewControllers
@property (readonly, nonatomic) PUOneUpViewControllerSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpAccessoryViewControllersManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unlockDeviceHandler; // ivar: _unlockDeviceHandler
@property (copy, nonatomic) id *unlockDeviceStatus; // ivar: _unlockDeviceStatus


-(BOOL)_isPhoneAndLandscape;
-(BOOL)photosDetailsUIViewControllerRequestDismissal:(id)arg0 ;
-(BOOL)shouldHideNavigationBarWhenShowingAccessoryViewControllerForAssetReference:(id)arg0 ;
-(BOOL)shouldHideStatusBarWhenShowingAccessoryViewControllerForAssetReference:(id)arg0 ;
-(BOOL)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg0 ;
-(NSInteger)_accessoryViewTypeForAsset:(id)arg0 ;
-(NSInteger)accessoryViewTypeForAsset:(id)arg0 ;
-(id)_createAccessoryViewControllerForAssetReference:(id)arg0 ;
-(id)accessoryViewControllerForAssetReference:(id)arg0 ;
-(id)accessoryViewControllerForAssetReference:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)assetReferenceForAccessoryViewController:(id)arg0 ;
-(id)createAccessoryViewControllerForAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithBrowsingSession:(id)arg0 spec:(id)arg1 ;
-(void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg0 ;
-(void)photosDetailsUIViewControllerCompositionDidChange:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif