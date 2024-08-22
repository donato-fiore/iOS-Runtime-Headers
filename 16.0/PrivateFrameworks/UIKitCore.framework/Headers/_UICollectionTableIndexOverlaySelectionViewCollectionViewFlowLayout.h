// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWFLOWLAYOUT_H
#define _UICOLLECTIONTABLEINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWFLOWLAYOUT_H



#import "UICollectionViewFlowLayout.h"

@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout {
    CGRect _frameForDoneButton;
    CGFloat _rightMarginForDoneButton;
}


@property (nonatomic) CGRect frameForDoneButton;
@property (nonatomic) CGFloat rightMarginForDoneButton;


+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif