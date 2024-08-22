// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILPIGMENTEDITOPTIONCELL_H
#define NTKCFACEDETAILPIGMENTEDITOPTIONCELL_H

@class UIImage, NSString;
@protocol UICollectionViewDelegateFlowLayout, _NTKCFaceDetailPigmentAddCellDelegate, NTKCFaceDetailPigmentEditOptionCellDelegate;


#import "NTKCFaceDetailEditOptionCell.h"
#import "NTKFaceEditColorPickerConfiguration.h"
#import "NTKPigmentEditOptionArray.h"

@interface NTKCFaceDetailPigmentEditOptionCell : NTKCFaceDetailEditOptionCell <UICollectionViewDelegateFlowLayout, _NTKCFaceDetailPigmentAddCellDelegate>

 {
    NTKFaceEditColorPickerConfiguration *_configuration;
    NTKPigmentEditOptionArray *_editingModifiedColors;
    NTKPigmentEditOptionArray *_previouslySelectedColors;
    UIImage *_dividerImage;
    UIImage *_plusImage;
    CGSize _dividerItemSize;
    CGRect _dividerSwatchRect;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailPigmentEditOptionCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isReloadCollectionRequired:(id)arg0 selectedOptions:(id)arg1 ;
-(NSInteger)_editOptionIndexForIndexPath:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_configurationFromCollection:(id)arg0 selectedOptions:(id)arg1 ;
-(id)_dequeueCellForIndexPath:(id)arg0 ;
-(id)_dividerImage;
-(id)_imageForIndexPath:(id)arg0 ;
-(id)_indexPathForEditOptionIndex:(NSInteger)arg0 ;
-(id)_plusImage;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCollection:(id)arg0 forFaceView:(id)arg1 face:(id)arg2 ;
-(id)optionAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_setupFromCollection;
-(void)addCellTapped:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)modifiedColor:(id)arg0 ;
-(void)selectLastColor;


@end


#endif