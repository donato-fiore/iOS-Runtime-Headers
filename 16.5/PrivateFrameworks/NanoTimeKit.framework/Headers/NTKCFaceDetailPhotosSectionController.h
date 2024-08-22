// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILPHOTOSSECTIONCONTROLLER_H
#define NTKCFACEDETAILPHOTOSSECTIONCONTROLLER_H

@class NSString, NSArray, UIViewController;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate, NTKCFaceDetailPhotosSectionDelegate;


#import "NTKCFaceDetailEditOptionVerticalSectionController.h"
#import "NTKCompanionCustomPhotosEditor.h"
#import "NTKBasePhotosFaceView.h"
#import "NTKCompanionMemoriesEditor.h"
#import "NTKCompanionSyncedAlbumEditor.h"
#import "NTKCompanionTransientCustomPhotosEditor.h"

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate, NTKCFaceDetailAlbumChooserViewControllerDelegate>

 {
    BOOL _canDeleteCustomPhotos;
    NSUInteger _currentContent;
}


@property (readonly, nonatomic) NSUInteger contentType;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *customPhotosEditor; // ivar: _customPhotosEditor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailPhotosSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *externalAssets; // ivar: _externalAssets
@property (retain, nonatomic) NTKBasePhotosFaceView *faceView;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKCompanionMemoriesEditor *memoriesEditor; // ivar: _memoriesEditor
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor; // ivar: _syncedAlbumEditor
@property (retain, nonatomic) NTKCompanionTransientCustomPhotosEditor *transientEditor; // ivar: _transientEditor


+(BOOL)hasPhotosSectionForFace:(id)arg0 forEditMode:(NSInteger)arg1 ;
-(BOOL)_canDisplayActionRowForCustomEditMode:(NSInteger)arg0 andOption:(id)arg1 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg0 ;
-(BOOL)_handleDidSelectOption:(id)arg0 ;
-(BOOL)canAddFace;
-(Class)actionRowCellClass;
-(id)_actionNameForOption:(id)arg0 ;
-(id)_currentEditor;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 externalAssets:(id)arg5 ;
-(void)_customizeActionRow:(id)arg0 withEditOption:(id)arg1 ;
-(void)_setPhotos:(id)arg0 ;
-(void)_updatePhotosSection;
-(void)albumChooserDidFinish:(id)arg0 ;
-(void)customPhotosControllerDidFinish:(id)arg0 ;
-(void)faceDidChange;
-(void)faceDidChangeResourceDirectory;
-(void)saveChangesWithCompletion:(id)arg0 ;
-(void)setSelectedOptions:(id)arg0 ;


@end


#endif