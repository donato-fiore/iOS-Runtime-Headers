// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER15OFFSETGRIDSCENE_H
#define _TTC11EMOJIPOSTER15OFFSETGRIDSCENE_H

@class SKScene;



@interface _TtC11EmojiPoster15OffsetGridScene : SKScene {
    ? emoji;
    ? emojiTextures;
    ? reverseTransition;
    ? sizeVariant;
    ? emojiRenderer;
    ? itemSize;
    ? minItemSize;
    ? maxItemSize;
    ? spacingFactor;
    ? minSpacingFactor;
    ? maxSpacingFactor;
    ? numberOfRows;
    ? numberOfItemsInRow;
    ? wakeProgress;
    ? unlockProgress;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(void)didMoveToView:(id)arg0 ;


@end


#endif