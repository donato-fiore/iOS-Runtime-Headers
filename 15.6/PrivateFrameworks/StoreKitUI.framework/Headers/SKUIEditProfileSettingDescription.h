// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEDITPROFILESETTINGDESCRIPTION_H
#define SKUIEDITPROFILESETTINGDESCRIPTION_H

@class NSOperationQueue, NSRegularExpression, NSString, UIImage;
@protocol SKUIProfileImagePickerDelegate, SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;


#import "SKUISettingDescription.h"
#import "SKUISettingValueStore.h"

@interface SKUIEditProfileSettingDescription : SKUISettingDescription <SKUIProfileImagePickerDelegate, SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>

 {
    id *_commitBlock;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_handleValidation;
    BOOL _suggestedHandlesDisplayed;
    SKUISettingValueStore *_valueStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic, getter=isHandleValid) BOOL handleValid; // ivar: _handleValid
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *photo;
@property (readonly) Class superclass;


+(BOOL)allowsEdit;
+(Class)_viewClassForSettingDescription:(id)arg0 ;
-(BOOL)_validateHandle:(id)arg0 ;
-(BOOL)_validateName:(id)arg0 ;
-(BOOL)allowsSelection;
-(BOOL)commitEdits:(id)arg0 ;
-(id)_valueStore;
-(id)initWithViewElement:(id)arg0 parent:(id)arg1 ;
-(void)_authenticateOnCompletion:(id)arg0 ;
-(void)_displayFooter:(id)arg0 ;
-(void)_displayRules:(BOOL)arg0 ;
-(void)_displaySuggestedHandles:(id)arg0 ;
-(void)_enterEditMode;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
-(void)_fetchSuggestedHandles;
-(void)_finalizeCommitWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_hideFooter;
-(void)_hideSuggestedHandles;
-(void)_leaveEditMode;
-(void)_reloadData;
-(void)_updateAccountInfo;
-(void)_updateValidity;
-(void)_uploadProfileImage:(id)arg0 ;
-(void)beginEditing;
-(void)cancelEdits;
-(void)chooseNewProfilePhoto;
-(void)dealloc;
-(void)discardEdits;
-(void)profileImagePicker:(id)arg0 didPickProfileImage:(id)arg1 withCropRect:(id)arg2 ;
-(void)profileImagePickerDidCancel:(id)arg0 ;
-(void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg0 didSelectSuggestedHandle:(id)arg1 ;


@end


#endif