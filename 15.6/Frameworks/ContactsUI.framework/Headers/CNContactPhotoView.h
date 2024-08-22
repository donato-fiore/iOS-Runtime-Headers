// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTPHOTOVIEW_H
#define CNCONTACTPHOTOVIEW_H

@class UIControl, NSArray, PRLikeness, NSString, UIDropInteraction, UIButton, UILongPressGestureRecognizer, CNMutableContact, UITapGestureRecognizer;
@protocol UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNPhotoPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, CNAvatarViewDelegate, CNPresenterDelegate, CNContactPhotoViewDelegate;


#import "CNAvatarView.h"
#import "CNPhotoPickerViewController.h"

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNPhotoPickerViewControllerDelegate, CNVisualIdentityPickerPresenterDelegate, CNAvatarViewDelegate, CNPresenterDelegate>



@property (nonatomic) BOOL acceptsImageDrop; // ivar: _acceptsImageDrop
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) PRLikeness *currentLikeness; // ivar: _currentLikeness
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactPhotoViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (retain, nonatomic) UIButton *editPhotoButton; // ivar: _editPhotoButton
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimatingBounce; // ivar: _isAnimatingBounce
@property (readonly) BOOL isPresentingModalViewController;
@property (nonatomic) CGFloat labelAlpha; // ivar: _labelAlpha
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (nonatomic) BOOL modified; // ivar: _modified
@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) PRLikeness *originalLikeness; // ivar: _originalLikeness
@property (retain, nonatomic) CNMutableContact *pendingEditContact; // ivar: _pendingEditContact
@property (retain, nonatomic) CNPhotoPickerViewController *photoPicker; // ivar: _photoPicker
@property (weak, nonatomic) NSObject<CNPresenterDelegate> *presenterDelegate; // ivar: _presenterDelegate
@property (nonatomic) BOOL prohibitsPersonaFetch; // ivar: _prohibitsPersonaFetch
@property (readonly, nonatomic) BOOL shouldAllowTakePhotoAction; // ivar: _shouldAllowTakePhotoAction
@property (nonatomic) BOOL showEditingLabel; // ivar: _showEditingLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) NSArray *variableConstraints; // ivar: _variableConstraints


+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeys;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg0 ;
+(id)supportedPasteboardTypes;
+(struct CGSize )defaultSize;
-(BOOL)_isUsingCuratedPhoto;
-(BOOL)_isUsingSilhouette;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)hasPhoto;
-(BOOL)isMeContact;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)_createImagePickerForEditingImageData:(id)arg0 withCropRect:(struct CGRect )arg1 ;
-(id)contact;
-(id)currentImageData;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 shouldAllowTakePhotoAction:(BOOL)arg1 threeDTouchEnabled:(BOOL)arg2 contactStore:(id)arg3 allowsImageDrops:(BOOL)arg4 imageRenderer:(id)arg5 ;
-(id)newPendingContactPreservingChangesFrom:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)previewController:(id)arg0 transitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2 ;
-(id)previewController:(id)arg0 transitionViewForPreviewItem:(id)arg1 ;
-(id)previewPath;
-(struct CGRect )previewController:(id)arg0 frameForPreviewItem:(id)arg1 inSourceView:(*id)arg2 ;
-(void)_bounceSmallPhoto;
-(void)_presentFullScreenPhoto:(id)arg0 ;
-(void)_presentPhotoPicker;
-(void)_zoomContactPhoto;
-(void)avatarTapped:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateContentForAvatarView:(id)arg0 ;
-(void)disablePhotoTapGesture;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)longPressGesture:(id)arg0 ;
-(void)menuWillHide:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)photoPicker:(id)arg0 didUpdatePhotoForContact:(id)arg1 withContactImage:(id)arg2 ;
-(void)photoPickerDidCancel:(id)arg0 ;
-(void)presentPhotoPicker;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)reloadData;
-(void)resetPhoto;
-(void)saveChangesFromPendingContact:(id)arg0 toContact:(id)arg1 ;
-(void)saveEdits;
-(void)saveImagePickerMediaFromInfo:(id)arg0 toContact:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 ;
-(void)sender:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(void)sender:(id)arg0 presentViewController:(id)arg1 ;
-(void)setHighlightedFrame:(BOOL)arg0 ;
-(void)updateEditPhotoButton;
-(void)updateFontSizes;
-(void)updatePendingContactWithEditedPropertyItem:(id)arg0 ;
-(void)updatePhoto;
-(void)updateViewsAndNotifyDelegate:(BOOL)arg0 ;
-(void)visualIdentityPicker:(id)arg0 presentationControllerWillDismiss:(id)arg1 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg0 ;


@end


#endif