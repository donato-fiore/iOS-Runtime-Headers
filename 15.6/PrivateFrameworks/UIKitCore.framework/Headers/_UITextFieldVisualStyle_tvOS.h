// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTFIELDVISUALSTYLE_TVOS_H
#define _UITEXTFIELDVISUALSTYLE_TVOS_H

@class UITextFieldVisualStyle, NSString;
@protocol _UITextFieldEditingProcessorDelegate;



@interface _UITextFieldVisualStyle_tvOS : UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)textShouldUseVibrancy;
-(id)_defaultEditingFont;
-(id)_defaultTextColorBlackKeyboard;
-(id)_defaultTextColorDarkKeyboard;
-(id)_defaultTextColorForUserInterfaceStyle;
-(id)_defaultTextColorLightKeyboard;
-(id)_placeholderTextColorBlackKeyboard;
-(id)_placeholderTextColorDarkKeyboard;
-(id)_placeholderTextColorFocused;
-(id)_placeholderTextColorLightKeyboard;
-(id)defaultFocusedTextColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)editingProcessorOverridingEditingAttributes:(id)arg0 ;
-(id)parentViewForTextContentView;
-(id)placeholderColor;
-(void)handleTextVibrancy;


@end


#endif