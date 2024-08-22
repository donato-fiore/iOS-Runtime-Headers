// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXTEXTEFFECT_H
#define JFXTEXTEFFECT_H

@class UIColor;


#import "JFXEffect.h"

@interface JFXTextEffect : JFXEffect

@property (readonly, nonatomic) UIColor *customTextEditTintColor;
@property (readonly, nonatomic) BOOL textBakedIn;


-(BOOL)isAppearanceEqual:(id)arg0 forPurpose:(NSUInteger)arg1 ;
-(BOOL)textBounds:(struct CGRect *)arg0 atIndex:(NSUInteger)arg1 time:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 includeMasks:(BOOL)arg5 ;
-(NSInteger)textHitTest:(struct CGPoint )arg0 time:(struct ? )arg1 relativeTo:(struct CGRect )arg2 basisOrigin:(int)arg3 ;
-(NSUInteger)indexOfTextObjectUsedForEditViewTransform;
-(NSUInteger)maxCharacters;
-(id)contentProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customTextEditColor;
-(id)defaultAttributedString:(NSUInteger)arg0 ;
-(id)defaultTypingAttributes:(NSUInteger)arg0 ;
-(id)editUIProperties;
-(id)localizedDefaultFontName;
-(id)localizedDefaultText;
-(id)strings;
-(id)textBoundsAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 includeMasks:(BOOL)arg3 ;
-(id)textEffectContentDataSource;
-(id)textFrameAtIndex:(NSUInteger)arg0 time:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 relativeTo:(struct CGRect )arg4 basisOrigin:(int)arg5 ;
-(id)textFramesAtTime:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 includeDropShadow:(BOOL)arg2 relativeTo:(struct CGRect )arg3 basisOrigin:(int)arg4 ;
-(struct PVCGPointQuad )textCornersAtIndex:(NSUInteger)arg0 time:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 scale:(struct CGPoint )arg4 relativeTo:(struct CGRect )arg5 basisOrigin:(int)arg6 ;
-(void)beginTextEditing;
-(void)enableDynamicLineSpacingForDiacritics:(BOOL)arg0 ;
-(void)endTextEditing;
-(void)setFont:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFontScale:(float)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFontSize:(float)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setupLocalizedText;


@end


#endif