// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJISPLITCHARACTERPICKER_H
#define UIKEYBOARDEMOJISPLITCHARACTERPICKER_H



#import "UIKeyboardEmojiCollectionInputView.h"

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView



+(BOOL)wantsScreenTraits;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(CGFloat)snappedYOffsetForOffset:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateToCategory:(NSInteger)arg0 ;


@end


#endif