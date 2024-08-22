// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDEMOJICOLLECTIONVIEW_H
#define UIKEYBOARDEMOJICOLLECTIONVIEW_H



#import "UICollectionView.h"
#import "UIKeyboardEmojiGraphicsTraits.h"
#import "UIResponder.h"

@interface UIKeyboardEmojiCollectionView : UICollectionView

@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // ivar: _emojiGraphicsTraits
@property (nonatomic) UIResponder *hitTestResponder; // ivar: _hitTestResponder
@property (nonatomic) BOOL isInSearchPopover; // ivar: _isInSearchPopover


-(CGFloat)_currentScreenScale;
-(id)backgroundColor;
-(id)closestCellForPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 emojiGraphicsTraits:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif