// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIEMOJISEARCHRESULTCOLLECTIONVIEWCELL_H
#define TUIEMOJISEARCHRESULTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, NSAttributedString;



@interface TUIEmojiSearchResultCollectionViewCell : UICollectionViewCell {
    UILabel *_animationFromLabel;
    UILabel *_animationToLabel;
    NSUInteger _nestedAnimationCount;
}


@property (retain, nonatomic) NSAttributedString *displayedEmojiString; // ivar: _displayedEmojiString
@property (readonly, nonatomic) UILabel *emojiLabel; // ivar: _emojiLabel


+(id)_createEmojiLabel;
+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif