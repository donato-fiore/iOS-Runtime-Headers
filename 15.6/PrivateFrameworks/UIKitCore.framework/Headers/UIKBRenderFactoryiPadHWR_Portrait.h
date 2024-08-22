// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORYIPADHWR_PORTRAIT_H
#define UIKBRENDERFACTORYIPADHWR_PORTRAIT_H

@class Round;



@interface UIKBRenderFactoryiPadHWR_Portrait : Round



-(BOOL)_anchorControlKeys;
-(BOOL)_displaysAsControlKeyStyle:(id)arg0 ;
-(BOOL)shouldUseRoundCornerForKey:(id)arg0 ;
-(CGFloat)controlColumnWidthFactor;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)dictationKeyFontSize;
-(CGFloat)dismissKeyFontSize;
-(CGFloat)internationalKeyFontSize;
-(CGFloat)keyCornerRadius;
-(CGFloat)moreKeyFontSize;
-(CGFloat)spaceKeyFontSize;
-(NSInteger)assetIdiom;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)lightKeycapsFontName;
-(id)messagesWriteboardKeyImageName;
-(id)thinKeycapsFontName;
-(struct CGPoint )_controlKeyOffset;
-(struct CGPoint )dismissKeyOffset;
-(struct CGPoint )spaceReturnKeyTextOffset;
-(struct UIEdgeInsets )symbolFrameInsets;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;
-(void)setupLayoutSegments;


@end


#endif