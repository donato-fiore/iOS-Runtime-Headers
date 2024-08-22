// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORYEMOJI_IPHONE_H
#define UIKBRENDERFACTORYEMOJI_IPHONE_H

@class Emoji;



@interface UIKBRenderFactoryEmoji_iPhone : Emoji



-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg0 ;
-(CGFloat)emojiInternationalKeySize;
-(NSInteger)assetIdiom;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)traitsHashStringForKey:(id)arg0 withGeometry:(id)arg1 withSymbolStyle:(id)arg2 controlOpacities:(BOOL)arg3 blurBlending:(BOOL)arg4 ;
-(struct CGPoint )emojiInternationalKeyOffset;
-(struct CGPoint )emojiPopupTextOffset;


@end


#endif