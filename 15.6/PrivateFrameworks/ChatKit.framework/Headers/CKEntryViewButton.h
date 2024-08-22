// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKENTRYVIEWBUTTON_H
#define CKENTRYVIEWBUTTON_H

@class UIView, UIButton, NSString, UIVisualEffectView;
@protocol _UICursorInteractionDelegate;



@interface CKEntryViewButton : UIView <_UICursorInteractionDelegate>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) char ckTintColor; // ivar: _ckTintColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger entryViewButtonType; // ivar: _entryViewButtonType
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView; // ivar: _vibrancyView
@property (nonatomic) BOOL wantsVibrancy; // ivar: _wantsVibrancy


+(id)entryViewButtonImageForType:(NSInteger)arg0 ;
+(id)entryViewButtonImageForType:(NSInteger)arg0 color:(char)arg1 ;
+(id)entryViewButtonImageWithName:(id)arg0 tintColor:(char)arg1 shouldSuppressHairline:(BOOL)arg2 ;
+(id)entryViewButtonOfType:(NSInteger)arg0 ;
+(id)entryViewButtonOfType:(NSInteger)arg0 wantsVibrancy:(BOOL)arg1 ;
+(id)imageNameForEntryViewButtonType:(NSInteger)arg0 ;
+(id)overlayImageForImageNamed:(id)arg0 tintColor:(char)arg1 ;
+(void)prewarmEntryViewButtons;
-(BOOL)__im_ff_isNewAudioMessageFlowEnabled;
-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(BOOL)isEnabled;
-(id)cursorInteraction:(id)arg0 regionForLocation:(struct CGPoint )arg1 defaultRegion:(id)arg2 ;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 wantsVibrancy:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDefaultImage;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setTintedImageForButtonType:(NSInteger)arg0 tintColor:(char)arg1 ;


@end


#endif