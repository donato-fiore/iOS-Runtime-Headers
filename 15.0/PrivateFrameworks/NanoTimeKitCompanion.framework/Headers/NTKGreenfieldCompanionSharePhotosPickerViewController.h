// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDCOMPANIONSHAREPHOTOSPICKERVIEWCONTROLLER_H
#define NTKGREENFIELDCOMPANIONSHAREPHOTOSPICKERVIEWCONTROLLER_H

@class UICollectionViewController, NSMutableIndexSet;
@protocol OS_dispatch_queue, NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate;


#import "NTKPhotosFace.h"
#import "NTKCompanionCustomPhotosEditor.h"

@interface NTKGreenfieldCompanionSharePhotosPickerViewController : UICollectionViewController {
    NTKPhotosFace *_originalFace;
    NTKCompanionCustomPhotosEditor *_editor;
    NSMutableIndexSet *_selectedIndexes;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_queue_fetchAssets;
-(id)_queue_fetchOptions;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPhotosFace:(id)arg0 ;
-(void)_createPhotosEditorWithCompletionBlock:(id)arg0 ;
-(void)_didTapDeselectAll;
-(void)_didTapOnCancelButton;
-(void)_didTapOnDoneButton;
-(void)_handleDidFinishWithNewResourcesDirectory:(id)arg0 ;
-(void)_handleEditorDidCreated;
-(void)_handleSelectionChanged;
-(void)_setupCollectionView;
-(void)_setupNavigationItems;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif