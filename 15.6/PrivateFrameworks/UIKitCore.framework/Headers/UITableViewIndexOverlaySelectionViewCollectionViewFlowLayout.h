// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWFLOWLAYOUT_H
#define UITABLEVIEWINDEXOVERLAYSELECTIONVIEWCOLLECTIONVIEWFLOWLAYOUT_H



#import "UICollectionViewFlowLayout.h"

@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout {
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