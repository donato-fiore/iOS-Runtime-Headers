// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERFLOWLAYOUT_H
#define _UIDOCUMENTPICKERFLOWLAYOUT_H

@class UICollectionViewFlowLayout, NSString;
@protocol _UICollectionViewLayoutCellStyle;



@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout <_UICollectionViewLayoutCellStyle>



@property (nonatomic) NSInteger cellStyle; // ivar: cellStyle
@property (nonatomic) CGFloat contentSizeAdjustment; // ivar: _contentSizeAdjustment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeEdited;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;


@end


#endif