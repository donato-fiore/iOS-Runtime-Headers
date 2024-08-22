// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSUBTITLEDBUTTON_H
#define SUSUBTITLEDBUTTON_H

@class UIButton, UILabel, NSString, UIColor;



@interface SUSubtitledButton : UIButton {
    *__CFDictionary _subtitleContentLookup;
    UILabel *_subtitleView;
}


@property (readonly, retain, nonatomic) NSString *currentSubtitle;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleColor;
@property (readonly, retain, nonatomic) UIColor *currentSubtitleShadowColor;
@property (readonly, retain, nonatomic) UILabel *subtitleLabel;


-(NSInteger)_subtitleLineBreakMode;
-(id)_subtitleFont;
-(id)_subtitledContentForState:(NSUInteger)arg0 ;
-(id)subtitleColorForState:(NSUInteger)arg0 ;
-(id)subtitleForState:(NSUInteger)arg0 ;
-(id)subtitleShadowColorForState:(NSUInteger)arg0 ;
-(struct CGRect )subtitleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupSubtitleView;
-(void)configureFromScriptButton:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSubtitleColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSubtitleShadowColor:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif