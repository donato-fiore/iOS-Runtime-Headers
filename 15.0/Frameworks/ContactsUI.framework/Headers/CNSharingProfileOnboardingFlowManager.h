// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSHARINGPROFILEONBOARDINGFLOWMANAGER_H
#define CNSHARINGPROFILEONBOARDINGFLOWMANAGER_H

@class CNContact, NSString, UINavigationController;
@protocol CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, CNSharingProfileOnboardingAudienceControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate, CNAvatarEditingManagerDelegate, CNSharingProfileOnboardingPosePickerControllerDelegate, CNSharingProfileOnboardingAudienceController, AVTAvatarRecord, CNSharingProfileOnboardingFlowManagerDelegate;

#import <Foundation/Foundation.h>

#import "CNAvatarEditingManager.h"
#import "CNSharingProfileAvatarItemProviderConfiguration.h"
#import "CNSharingProfileLogger.h"
#import "CNSharingProfileOnboardingPhotoSelectionViewController.h"
#import "CNSharingProfileOnboardingPhotoSelectionResult.h"
#import "CNSharingProfileOnboardingPosePickerController.h"
#import "CNPhotoPickerProviderItem.h"
#import "CNSharingProfileOnboardingVariantViewController.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNSharingProfileOnboardingFlowManager : NSObject <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, CNSharingProfileOnboardingAudienceControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate, CNAvatarEditingManagerDelegate, CNSharingProfileOnboardingPosePickerControllerDelegate>



@property (retain, nonatomic) NSObject<CNSharingProfileOnboardingAudienceController> *audienceViewController; // ivar: _audienceViewController
@property (retain, nonatomic) CNAvatarEditingManager *avatarEditingManager; // ivar: _avatarEditingManager
@property (retain, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration; // ivar: _avatarItemProviderConfiguration
@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNSharingProfileOnboardingFlowManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPersistToMeCard; // ivar: _didPersistToMeCard
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRunning; // ivar: _isRunning
@property (retain, nonatomic) CNSharingProfileLogger *logger; // ivar: _logger
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionViewController *photoSelectionController; // ivar: _photoSelectionController
@property (retain, nonatomic) CNSharingProfileOnboardingPhotoSelectionResult *photoSelectionResult; // ivar: _photoSelectionResult
@property (retain, nonatomic) CNSharingProfileOnboardingPosePickerController *posePickerController; // ivar: _posePickerController
@property (retain, nonatomic) CNPhotoPickerProviderItem *selectedVariantItem; // ivar: _selectedVariantItem
@property (nonatomic) BOOL shouldAnimateNavTransitions; // ivar: _shouldAnimateNavTransitions
@property (readonly) Class superclass;
@property (retain, nonatomic) CNSharingProfileOnboardingVariantViewController *variantController; // ivar: _variantController
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


+(id)descriptorForRequiredKeys;
-(NSUInteger)imageTypeForAvatarType:(NSInteger)arg0 ;
-(id)initWithNavigationController:(id)arg0 contact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 ;
-(id)initWithNavigationController:(id)arg0 contact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 logger:(id)arg4 ;
-(id)prepareVariantsControllerForResult:(id)arg0 ;
-(id)providerItemForPhotoResult:(id)arg0 ;
-(void)audienceController:(id)arg0 didFinishWithContact:(id)arg1 sharingAudience:(NSUInteger)arg2 ;
-(void)audienceControllerDidTapSetupLater:(id)arg0 ;
-(void)avatarEditingManager:(id)arg0 didFinishWithProviderItem:(id)arg1 ;
-(void)notifyDelegateOfSetupLaterSelected;
-(void)onboardingVariantControllerDidTapBack:(id)arg0 ;
-(void)onboardingVariantControllerDidTapContinue:(id)arg0 ;
-(void)onboardingVariantControllerDidTapPose:(id)arg0 ;
-(void)onboardingVariantControllerDidTapSetupLater:(id)arg0 ;
-(void)photoSelectionViewControllerDidFinishWithResult:(id)arg0 ;
-(void)photoSelectionViewControllerDidTapSetupLater:(id)arg0 ;
-(void)posePickerController:(id)arg0 didFinishWithProviderItem:(id)arg1 ;
-(void)posePickerControllerDidSelectBack:(id)arg0 ;
-(void)posePickerControllerDidSelectSetupLater:(id)arg0 ;
-(void)presentAnimojiPoseCapture;
-(void)presentMeCardAlertForResult:(id)arg0 ;
-(void)presentMeCardPersistanceAlertWithCompletionBlock:(id)arg0 ;
-(void)presentNameAndAudienceControllerForContact:(id)arg0 ;
-(void)saveCurrentInfoToMeCard;
-(void)startFlow;


@end


#endif