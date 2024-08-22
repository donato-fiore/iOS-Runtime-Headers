// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCNOTESTEXTUREBACKGROUNDVIEW_H
#define DCNOTESTEXTUREBACKGROUNDVIEW_H

@class UIView, NSLayoutConstraint;


#import "DCNotesTextureView.h"

@interface DCNotesTextureBackgroundView : UIView

@property BOOL scrollsTexture; // ivar: _scrollsTexture
@property (retain, nonatomic) NSLayoutConstraint *textureHeightConstraint; // ivar: _textureHeightConstraint
@property (readonly, nonatomic) DCNotesTextureView *textureView; // ivar: _textureView
@property (retain, nonatomic) NSLayoutConstraint *textureYConstraint; // ivar: _textureYConstraint


+(id)colorWithPaperTexturePatternImage;
+(id)textureImage;
-(CGFloat)heightByCoveringHeight:(CGFloat)arg0 withImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 scrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2 ;
-(void)commonInitWithScrollingTextures:(BOOL)arg0 hasAlpha:(BOOL)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif