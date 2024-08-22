// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILPIGMENTSECTIONCONTROLLER_H
#define NTKCFACEDETAILPIGMENTSECTIONCONTROLLER_H

@class NSString, UIViewController;
@protocol NTKCFaceDetailPigmentColorSliderCellDelegate, NTKCFaceDetailPigmentEditOptionCellDelegate, NTKCFaceDetailEditOptionModifiedDelegate;


#import "NTKCFaceDetailEditOptionHorizontalSectionController.h"
#import "NTKFaceColorPalette.h"

@interface NTKCFaceDetailPigmentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailPigmentColorSliderCellDelegate, NTKCFaceDetailPigmentEditOptionCellDelegate>

 {
    NTKFaceColorPalette *_palette;
    BOOL _suppressActionRowUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailEditOptionModifiedDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;


+(BOOL)hasSectionForFace:(id)arg0 forEditMode:(NSInteger)arg1 ;
-(BOOL)_handleDidSelectOption:(id)arg0 ;
-(BOOL)_hasActionRow;
-(Class)actionRowCellClass;
-(Class)editCellClass;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(id)optionAtIndex:(NSUInteger)arg0 ;
-(void)_customizeActionRow:(id)arg0 withEditOption:(id)arg1 ;
-(void)_presentPigmentPickerForSlot:(id)arg0 ;
-(void)pigmentColorSliderCell:(id)arg0 colorFractionChanged:(CGFloat)arg1 transiently:(BOOL)arg2 canceled:(BOOL)arg3 ;
-(void)pigmentEditOptionCellDidSelectAddOption:(id)arg0 ;


@end


#endif