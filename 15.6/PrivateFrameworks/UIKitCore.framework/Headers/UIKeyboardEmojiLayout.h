// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJILAYOUT_H
#define UIKEYBOARDEMOJILAYOUT_H



#import "UICollectionViewFlowLayout.h"

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {
    *id _attributes;
    *CGFloat _headerWidths;
    NSInteger _arrayLength;
}




+(Class)invalidationContextClass;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg0 withOriginalAttributes:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_setAttributes:(id)arg0 ForSection:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;


@end


#endif