// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTFIELDVISUALSTYLE_H
#define _UITEXTFIELDVISUALSTYLE_H

@protocol _UITextFieldVisualStyleSubject;

#import <Foundation/Foundation.h>


@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) NSObject<_UITextFieldVisualStyleSubject> *styleSubject; // ivar: _styleSubject


+(id)inferredVisualStyleWithStyleSubject:(id)arg0 ;
-(BOOL)textShouldUseVibrancy;
-(id)defaultFocusedTextColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)initWithStyleSubject:(id)arg0 ;
-(id)parentViewForTextContentView;
-(id)placeholderColor;
-(void)handleTextVibrancy;


@end


#endif