// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCFACEDETAILVIEWCONTROLLER_H
#define NTKCFACEDETAILVIEWCONTROLLER_H

@class UIViewController, UIButton, UIActivityIndicatorView, NSMutableArray, NSString, UITableViewCell, NSArray, UILabel, UIView, UITableView, UIBarButtonItem;
@protocol UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailActionSectionDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKCFaceDetailEditOptionModifiedDelegate, NTKCTableViewProviding, NTKCFaceDetailEditOptionSectionDelegate, NTKCFaceDetailViewControllerDelegate;


#import "NTKCFaceDetailDescriptionSectionController.h"
#import "NTKFace.h"
#import "NTKCFaceContainerView.h"
#import "NTKCompanionFaceViewController.h"
#import "_NTKCDetailHeaderView.h"
#import "NTKCFaceDetailKaleidoscopeContentSectionController.h"
#import "NTKCFaceDetailKaleidoscopeStyleSectionController.h"
#import "NTKFaceCollection.h"
#import "NTKCFaceDetailOtherSectionController.h"
#import "NTKCFaceDetailPhotosSectionController.h"
#import "NTKCFaceDetailPigmentSectionController.h"
#import "NTKGreenfieldCompanionShareController.h"

@interface NTKCFaceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailActionSectionDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKCFaceDetailEditOptionModifiedDelegate, NTKCTableViewProviding, NTKCFaceDetailEditOptionSectionDelegate>

 {
    BOOL _isSuppressingFaceDidChange;
}


@property (retain, nonatomic) UIButton *addButton; // ivar: _addButton
@property (retain, nonatomic) UIActivityIndicatorView *addSpinner; // ivar: _addSpinner
@property (retain, nonatomic) NSMutableArray *currentSections; // ivar: _currentSections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NTKCFaceDetailDescriptionSectionController *descriptionSection; // ivar: _descriptionSection
@property (retain, nonatomic) NSMutableArray *dynamicEditOptionSections; // ivar: _dynamicEditOptionSections
@property (retain, nonatomic) NSMutableArray *editOptionSections; // ivar: _editOptionSections
@property (retain, nonatomic) UITableViewCell *editOptionToMakeFullyVisible; // ivar: _editOptionToMakeFullyVisible
@property (copy, nonatomic) NSArray *externalAssets; // ivar: _externalAssets
@property (retain, nonatomic) NTKFace *face; // ivar: _face
@property (retain, nonatomic) NTKCFaceContainerView *faceContainer; // ivar: _faceContainer
@property (readonly, nonatomic) BOOL faceHasBeenEdited; // ivar: _faceHasBeenEdited
@property (retain, nonatomic) UILabel *faceName; // ivar: _faceName
@property (retain, nonatomic) NTKCompanionFaceViewController *faceVC; // ivar: _faceVC
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize headerFaceSize; // ivar: _headerFaceSize
@property (retain, nonatomic) UIView *headerSeparator; // ivar: _headerSeparator
@property (retain, nonatomic) _NTKCDetailHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL inGallery; // ivar: _inGallery
@property (nonatomic) CGFloat intrinsicHeaderHeight; // ivar: _intrinsicHeaderHeight
@property (retain, nonatomic) NTKCFaceDetailKaleidoscopeContentSectionController *kaleidoscopeContentSection; // ivar: _kaleidoscopeContentSection
@property (retain, nonatomic) NTKCFaceDetailKaleidoscopeStyleSectionController *kaleidoscopeStyleSection; // ivar: _kaleidoscopeStyleSection
@property (retain, nonatomic) NTKFaceCollection *library; // ivar: _library
@property (retain, nonatomic) UIViewController *modalViewControllerPresentedByThisViewController; // ivar: _modalViewControllerPresentedByThisViewController
@property (readonly, nonatomic) UITableView *ntk_tableView;
@property (retain, nonatomic) NTKCFaceDetailOtherSectionController *otherSection; // ivar: _otherSection
@property (retain, nonatomic) NTKCFaceDetailPhotosSectionController *photosSection; // ivar: _photosSection
@property (retain, nonatomic) NTKCFaceDetailPigmentSectionController *pigmentSection; // ivar: _pigmentSection
@property (readonly, nonatomic) NSString *reasonFaceCanNotBeAddedToLibrary;
@property (copy, nonatomic) id *selectionFinishedHandler; // ivar: _selectionFinishedHandler
@property (retain, nonatomic) NTKGreenfieldCompanionShareController *shareController; // ivar: _shareController
@property (retain, nonatomic) UIBarButtonItem *shareNavButton; // ivar: _shareNavButton
@property (nonatomic) BOOL shared; // ivar: _shared
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_cellIsHiddenBehindHeader:(id)arg0 ;
-(BOOL)_hasRemovedSystemApp;
-(BOOL)_isEditOptionFullyVisible:(id)arg0 ;
-(BOOL)_isEditable;
-(BOOL)_isShareButtonEnabled;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_errorMessageForErrorCode:(NSInteger)arg0 ;
-(id)_pruneComplicationsNotAvailableOnGizmo:(id)arg0 ;
-(id)_pruneRemovedOrRestrictedComplications:(id)arg0 ;
-(id)_sectionForEditOptionCollection:(id)arg0 ;
-(id)complicationSection:(id)arg0 allowedComplicationsForSlot:(id)arg1 ;
-(id)initWithCandidateFace:(id)arg0 externalAssets:(id)arg1 ;
-(id)initWithFace:(id)arg0 inGallery:(BOOL)arg1 externalAssets:(id)arg2 ;
-(id)initWithLibraryFace:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_addFace;
-(void)_addFaceEndedForFace:(id)arg0 ;
-(void)_addOrRemoveDynamicSectionsWithCollection:(id)arg0 ;
-(void)_addTapped;
-(void)_applySectionIndexKeysToCurrentSectionsFromIndex:(NSUInteger)arg0 ;
-(void)_didTapShareButton;
-(void)_dismissModalViewControllerPresentedByThisViewControllerAnimated:(BOOL)arg0 ;
-(void)_ensureOtherSection;
-(void)_faceChangedOptionsForEditMode:(NSInteger)arg0 ;
-(void)_loadLibrary;
-(void)_reloadEditOptionSectionsDependentOnNTKEditModeComplications;
-(void)_setComplication:(id)arg0 forSlot:(id)arg1 ;
-(void)_setEditOption:(id)arg0 forMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_setEditOption:(id)arg0 forMode:(NSInteger)arg1 slot:(id)arg2 transiently:(BOOL)arg3 ;
-(void)_updateAddButton;
-(void)_updateShareButton;
-(void)actionSectionDidDelete:(id)arg0 ;
-(void)actionSectionDidSelect:(id)arg0 ;
-(void)attemptToAddFace;
-(void)complicationSection:(id)arg0 didChangeToComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)complicationSection:(id)arg0 wantsToPresentPickerForSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(void)dealloc;
-(void)descriptionSection:(id)arg0 didExpand:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)editOptionSection:(id)arg0 didModifyEditOption:(id)arg1 transiently:(BOOL)arg2 canceled:(BOOL)arg3 ;
-(void)editOptionSection:(id)arg0 didSelectActionForOptionAtIndex:(NSInteger)arg1 ;
-(void)editOptionSection:(id)arg0 didSelectOptionAtIndex:(NSInteger)arg1 ;
-(void)face:(id)arg0 didChangeComplicationForSlot:(id)arg1 ;
-(void)face:(id)arg0 didChangeOptionsForEditMode:(NSInteger)arg1 ;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)faceDetailComplicationPickerViewController:(id)arg0 didSelectComplication:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg0 ;
-(void)otherSection:(id)arg0 didChangeShowSeconds:(id)arg1 forMode:(NSInteger)arg2 ;
-(void)otherSection:(id)arg0 didToggleMonogram:(id)arg1 forSlot:(id)arg2 ;
-(void)otherSectionDidSelectMonogramEdit:(id)arg0 ;
-(void)photoSectionDidUpdate:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif