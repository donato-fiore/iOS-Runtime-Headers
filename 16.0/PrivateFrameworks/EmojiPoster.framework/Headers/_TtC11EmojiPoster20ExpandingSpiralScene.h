// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11EMOJIPOSTER20EXPANDINGSPIRALSCENE_H
#define _TTC11EMOJIPOSTER20EXPANDINGSPIRALSCENE_H

@class SKScene;



@interface _TtC11EmojiPoster20ExpandingSpiralScene : SKScene {
    ? sizeVariant;
    ? emoji;
    ? emojiRenderer;
    ? emojiTextures;
    ? layoutProvider;
    ? itemPositions;
    ? startingRadius;
    ? radius;
    ? minRadius;
    ? wakeProgress;
    ? unlockProgress;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(void)didMoveToView:(id)arg0 ;


@end


#endif