// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11EMOJIPOSTER17EMOJISPIRALLAYOUT_H
#define _TTC11EMOJIPOSTER17EMOJISPIRALLAYOUT_H

@class UICollectionViewLayout;



@interface _TtC11EmojiPoster17EmojiSpiralLayout : UICollectionViewLayout {
    ? radius;
    ? startingAngle;
}


@property (nonatomic, readonly) CGSize collectionViewContentSize;


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)prepareLayout;


@end


#endif