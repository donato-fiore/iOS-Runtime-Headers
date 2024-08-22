// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEMERGENCYCARDNAMEANDPICTURETABLEITEM_H
#define HKEMERGENCYCARDNAMEANDPICTURETABLEITEM_H

@class NSString;
@protocol HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, HKEmergencyCardRowHeightChangeDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorNameAndPhotoCell.h"

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

 {
    HKMedicalIDEditorNameAndPhotoCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate; // ivar: _rowHeightChangeDelegate
@property (readonly) Class superclass;


-(CGFloat)_cellFittedHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndex:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_cell;
-(id)_makeMedicalIDPhotoMenu;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)_checkOrRequestForCameraAccessIfNeededWithCompletion:(id)arg0 ;
-(void)_editPhotoTapped:(id)arg0 ;
-(void)_updateMedicalIDPhotoMenu;
-(void)commitEditing;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)medicalIDEditorCell:(id)arg0 didChangeHeight:(CGFloat)arg1 keepRectVisible:(struct CGRect )arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)presentCameraAuthorizationStatusDeniedAlert;
-(void)setData:(id)arg0 ;


@end


#endif