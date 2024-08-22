// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUIADDVOICESHORTCUTBUTTON_H
#define INUIADDVOICESHORTCUTBUTTON_H

@class UIButton, UILabel, NSLayoutConstraint, UIImageView, NSString, CAFilter, INShortcut, INVoiceShortcut;
@protocol UIDragInteractionDelegate, INUIAddVoiceShortcutButtonDelegate;



@interface INUIAddVoiceShortcutButton : UIButton <UIDragInteractionDelegate>



@property (weak, nonatomic) UILabel *addToSiriLabel; // ivar: _addToSiriLabel
@property (retain, nonatomic) NSLayoutConstraint *addToSiriLeadingConstraint; // ivar: _addToSiriLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *addedToSiriLeadingConstraint; // ivar: _addedToSiriLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *checkmarkHeightConstraint; // ivar: _checkmarkHeightConstraint
@property (weak, nonatomic) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIAddVoiceShortcutButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAFilter *highlightFilter; // ivar: _highlightFilter
@property (weak, nonatomic) UILabel *phraseLabel; // ivar: _phraseLabel
@property (retain, nonatomic) INShortcut *shortcut; // ivar: _shortcut
@property (weak, nonatomic) UIImageView *sphiriImageView; // ivar: _sphiriImageView
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) INVoiceShortcut *voiceShortcut; // ivar: _voiceShortcut


-(BOOL)_shouldUseLargerFont;
-(CGFloat)_strokeWidthForStyle:(NSUInteger)arg0 ;
-(id)_addToSiriFont;
-(id)_addToSiriText;
-(id)_addedToSiriText;
-(id)_backgroundColorForStyle:(NSUInteger)arg0 ;
-(id)_checkmarkImage;
-(id)_darkSphiriImage;
-(id)_dynamicBlackColor;
-(id)_dynamicDarkSphiriImage;
-(id)_dynamicLightSphiriImage;
-(id)_dynamicWhiteColor;
-(id)_lightSphiriImage;
-(id)_phraseFont;
-(id)_phraseText;
-(id)_sphiriImageForStyle:(NSUInteger)arg0 ;
-(id)_strokeColorForStyle:(NSUInteger)arg0 ;
-(id)_textColorForStyle:(NSUInteger)arg0 ;
-(id)accessibilityLabel;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_checkAndUpdateForShortcut;
-(void)_configureWithStyle:(NSUInteger)arg0 ;
-(void)_createHighlightFilterIfNecessary;
-(void)_didTapButton;
-(void)_handleVoiceShortcutUpdateNotification:(id)arg0 ;
-(void)_updateColors;
-(void)_updateContent;
-(void)_updatePhraseVisibility;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForInterfaceBuilder;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif