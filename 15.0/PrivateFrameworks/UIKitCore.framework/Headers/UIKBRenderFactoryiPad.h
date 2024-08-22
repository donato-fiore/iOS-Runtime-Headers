// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERFACTORYIPAD_H
#define UIKBRENDERFACTORYIPAD_H



#import "UIKBRenderFactoryiPhone.h"

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone



-(BOOL)_onLeftSide:(id)arg0 onKeyplane:(id)arg1 ;
-(BOOL)iPadFudgeLayout;
-(BOOL)iPadSansHomeButtonLayout;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg0 ;
-(BOOL)supportsInputTraits:(id)arg0 forKeyplane:(id)arg1 ;
-(CGFloat)_row4ControlSegmentWidthLeft;
-(CGFloat)_row4ControlSegmentWidthRight;
-(CGFloat)bottomRowDefaultFontSize;
-(CGFloat)cornerRadiusForKey:(id)arg0 ;
-(CGFloat)defaultPathWeight;
-(CGFloat)defaultVariantSizeThreshold;
-(CGFloat)deleteKeyFontSize;
-(CGFloat)dictationKeyFontSize;
-(CGFloat)dismissKeyFontSize;
-(CGFloat)dualStringKeyFontSizeAdjustment;
-(CGFloat)emailDotKeyFontSize;
-(CGFloat)facemarkKeyFontSize;
-(CGFloat)fallbackFontSize;
-(CGFloat)fontSizeAdjustmentForNonAlphanumericKeycaps;
-(CGFloat)internationalKeyFontSize;
-(CGFloat)keyCornerRadius;
-(CGFloat)keyInsetBottom;
-(CGFloat)messagesTypeKeyplanSwitchKeyFontSize;
-(CGFloat)moreKeyFontSize;
-(CGFloat)predictiveKeyCornerRadius;
-(CGFloat)returnKeySymbolFrameInset;
-(CGFloat)shiftKeyFontSize;
-(CGFloat)skinnyKeyThreshold;
-(CGFloat)smallKanaKeyFontSize;
-(CGFloat)spaceKeyFontSize;
-(CGFloat)stringKeyFontSize;
-(CGFloat)symbolFrameInset;
-(CGFloat)symbolImageControlKeyFontSize;
-(CGFloat)tinyPunctuationGlyphFontSize;
-(CGFloat)zhuyinFirstToneKeyFontSize;
-(NSInteger)assetIdiom;
-(NSInteger)rowLimitForKey:(id)arg0 ;
-(id)ZWNJKeyImageName;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)capslockKeyImageName;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(id)dictationKeyImageName;
-(id)dismissKeyImageName;
-(id)displayContentsForKey:(id)arg0 ;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)lightKeycapsFontName;
-(id)lowQualityLayeredBackgroundColorName;
-(id)messagesWriteboardKeyImageName;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(id)returnKeyImageName;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(id)tabKeyImageName;
-(id)thinKeycapsFontName;
-(id)variantGeometriesForGeometry:(id)arg0 variantCount:(NSUInteger)arg1 rowLimit:(NSInteger)arg2 annotationIndex:(NSUInteger)arg3 ;
-(struct CGPoint )ZWNJKeyOffset;
-(struct CGPoint )deleteKeyOffset;
-(struct CGPoint )dictationKeyOffset;
-(struct CGPoint )dismissKeyOffset;
-(struct CGPoint )dualStringKeyOffset;
-(struct CGPoint )internationalKeyOffset;
-(struct CGPoint )returnKeyOffset;
-(struct CGPoint )secondaryShiftKeyOffset;
-(struct CGPoint )shiftKeyOffset;
-(struct CGPoint )stringKeyOffset;
-(struct CGPoint )symbolImageControlKeyOffset;
-(struct CGPoint )tinyPunctuationGlyphOffset;
-(struct CGPoint )variantAnnotationTextOffset;
-(struct CGRect )dismissKeySymbolFrame;
-(struct CGRect )insetFrame:(struct CGRect )arg0 forKey:(id)arg1 ;
-(struct CGRect )shiftKeySymbolFrame;
-(struct CGSize )defaultVariantGeometrySize;
-(struct UIEdgeInsets )variantDisplayFrameInsets;
-(struct UIEdgeInsets )variantPaddedFrameInsets;
-(struct UIEdgeInsets )variantSymbolFrameInsets;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizePopupTraits:(id)arg0 forKey:(id)arg1 onKeyplane:(id)arg2 ;
-(void)_customizeSymbolStyle:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;
-(void)_customizeTraits:(id)arg0 forPopupForKey:(id)arg1 withRenderingContext:(id)arg2 keycapsFontName:(id)arg3 ;
-(void)setAllowsPaddles:(BOOL)arg0 ;
-(void)setupLayoutSegments;


@end


#endif