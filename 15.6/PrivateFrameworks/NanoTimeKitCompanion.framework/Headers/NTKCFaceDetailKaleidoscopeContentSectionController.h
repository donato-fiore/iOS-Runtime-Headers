// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILKALEIDOSCOPECONTENTSECTIONCONTROLLER_H
#define NTKCFACEDETAILKALEIDOSCOPECONTENTSECTIONCONTROLLER_H

@class UIViewController, NSString;
@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate, NTKCFaceDetailEditOptionSectionDelegate;


#import "NTKCFaceDetailEditOptionHorizontalSectionController.h"
#import "NTKCompanionKaleidoscopeEditor.h"

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate>

 {
    NTKCompanionKaleidoscopeEditor *_editor;
    UIViewController *_presentedPicker;
    NSUInteger _currentAsset;
    BOOL _externalAssetSet;
    id<NTKCFaceDetailEditOptionSectionDelegate> *delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;


+(BOOL)hasSectionForFace:(id)arg0 forEditMode:(NSInteger)arg1 ;
+(BOOL)supressesSectionForExternalAssets:(id)arg0 ;
-(BOOL)_canDisplayActionRowForCustomEditMode:(NSInteger)arg0 andOption:(id)arg1 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg0 ;
-(BOOL)collectionChanged:(id)arg0 withSelectedOptions:(id)arg1 ;
-(Class)actionRowCellClass;
-(Class)editCellClass;
-(id)delegate;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(void)_customizeActionRow:(id)arg0 withEditOption:(id)arg1 ;
-(void)_finalizeEditor;
-(void)_presentPhotoPicker;
-(void)_setPhotoFromAsset:(id)arg0 ;
-(void)_setPhotoFromDictionary:(id)arg0 ;
-(void)_setRawPhoto:(id)arg0 ;
-(void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setExternalAsset:(id)arg0 ;
-(void)setSelectedOptions:(id)arg0 ;


@end


#endif