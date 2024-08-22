// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCFACEDETAILCUSTOMPHOTOSVIEWCONTROLLER_H
#define _NTKCFACEDETAILCUSTOMPHOTOSVIEWCONTROLLER_H

@class UICollectionViewController, UIBarButtonItem, NSArray, NSMutableIndexSet;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;


#import "NTKCompanionCustomPhotosEditor.h"
#import "NTKFace.h"
#import "NTKBasePhotosFaceView.h"

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController {
    UIBarButtonItem *_saveButton;
    UIBarButtonItem *_selectButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_selectAllButton;
    UIBarButtonItem *_deselectAllButton;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_addButton;
    UIBarButtonItem *_spinnerButton;
    NSArray *_defaultToolBarItems;
    NSArray *_editingToolBarItems;
    NSMutableIndexSet *_selectedIndexes;
    BOOL _deleteConfirmed;
}


@property (weak, nonatomic) NSObject<NTKCFaceDetailCustomPhotosViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor; // ivar: _editor
@property (nonatomic) BOOL externalImagesSet; // ivar: _externalImagesSet
@property (retain, nonatomic) NTKFace *face; // ivar: _face
@property (retain, nonatomic) NTKBasePhotosFaceView *faceView; // ivar: _faceView
@property (nonatomic) BOOL inGallery; // ivar: _inGallery


-(BOOL)_allPhotosSelected;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_currentSelectAllButton;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPhotosEditor:(id)arg0 forFace:(id)arg1 inGallery:(BOOL)arg2 faceView:(id)arg3 externalImagesSet:(BOOL)arg4 ;
-(void)_addPressed;
-(void)_deletePressed;
-(void)_donePressed;
-(void)_savePressed;
-(void)_selectAllPhotos;
-(void)_selectAllPressed;
-(void)_selectPressed;
-(void)_updateButtons;
-(void)_updateButtonsForSelectionChanged;
-(void)_updateTitle;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif