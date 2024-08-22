// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLABEL_H
#define GKLABEL_H

@class UILabel, GKTextStyle, NSString;
@protocol GKTextStyleReplay;



@interface GKLabel : UILabel <GKTextStyleReplay>

 {
    GKTextStyle *_baseStyle;
}


@property (nonatomic) CGFloat actualFontShrinkageFactor; // ivar: _actualFontShrinkageFactor
@property (retain, nonatomic) GKTextStyle *appliedStyle; // ivar: _appliedStyle
@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldEnforcePreferredWidth; // ivar: _shouldEnforcePreferredWidth
@property (nonatomic) BOOL shouldInhibitReplay; // ivar: _shouldInhibitReplay
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets titleEdgeInsets; // ivar: _titleEdgeInsets
@property (readonly, nonatomic) BOOL usingAttributedText; // ivar: _usingAttributedText


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )shrinkFontToFitSize:(struct CGSize )arg0 ;
-(void)applyTextStyle:(id)arg0 ;
-(void)replayAndApplyStyleUnlessInhibited;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setText:(id)arg0 ;
-(void)shrinkFontToFitWidth;
-(void)updateConstraints;


@end


#endif