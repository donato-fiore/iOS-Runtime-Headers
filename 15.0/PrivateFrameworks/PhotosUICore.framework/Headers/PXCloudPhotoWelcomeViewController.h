// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDPHOTOWELCOMEVIEWCONTROLLER_H
#define PXCLOUDPHOTOWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, NSArray, PSCloudStorageOffersManager, AAUIGenericTermsRemoteUI, NSString;
@protocol PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate;



@interface PXCloudPhotoWelcomeViewController : OBWelcomeController <PSCloudStorageOffersManagerDelegate, AAUIGenericTermsRemoteUIDelegate, PXCloudPhotoWelcomeNavigationControllerDismissDelegate>



@property (retain, nonatomic, setter=_setButtons:) NSArray *_buttons; // ivar: __buttons
@property (nonatomic, setter=_setEnableOnAppear:) BOOL _enableOnAppear; // ivar: __enableOnAppear
@property (retain, nonatomic, setter=_setOffersManager:) PSCloudStorageOffersManager *_offersManager; // ivar: __offersManager
@property (nonatomic, setter=_setRequireStorageUpgrade:) BOOL _requireStorageUpgrade; // ivar: __requireStorageUpgrade
@property (retain, nonatomic, setter=_setTermsManager:) AAUIGenericTermsRemoteUI *_termsManager; // ivar: __termsManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDefaultTitle;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_cloudPhotoWelcomeViewGoButtonTapped:(id)arg0 ;
-(void)_cloudPhotoWelcomeViewLearnMoreTapped:(id)arg0 ;
-(void)_cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg0 ;
-(void)_continueWithoutStoragePurchase:(id)arg0 ;
-(void)_enableCloudPhotoLibrary;
-(void)_enableCloudPhotoLibraryWithoutCheck;
-(void)_handleEnableError:(id)arg0 ;
-(void)_setButtonsEnabled:(BOOL)arg0 ;
-(void)_updateCurrentActivity;
-(void)genericTermsRemoteUI:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)manager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;
-(void)navigationControllerDidDismissViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif