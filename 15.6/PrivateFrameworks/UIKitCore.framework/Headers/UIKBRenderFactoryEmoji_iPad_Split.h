// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORYEMOJI_IPAD_SPLIT_H
#define UIKBRENDERFACTORYEMOJI_IPAD_SPLIT_H

@class Emoji;



@interface UIKBRenderFactoryEmoji_iPad_Split : Emoji



-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg0 ;
-(CGFloat)emojiInternationalKeySize;
-(CGFloat)keyCornerRadius;
-(NSInteger)assetIdiom;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)thinKeycapsFontName;
-(struct CGPoint )emojiInternationalKeyOffset;
-(struct CGPoint )emojiPopupTextOffset;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;


@end


#endif