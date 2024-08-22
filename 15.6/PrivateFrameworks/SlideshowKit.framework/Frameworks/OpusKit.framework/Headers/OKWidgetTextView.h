// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETTEXTVIEW_H
#define OKWIDGETTEXTVIEW_H

@class UITextView, NSString;
@protocol UITextViewDelegate;


#import "OKWidgetTextViewProxy.h"

@interface OKWidgetTextView : OKWidgetTextViewProxy <UITextViewDelegate>

 {
    UITextView *_textView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)settingOverflowEnabled;
-(BOOL)settingScrollEnabled;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(NSInteger)settingTextAlignment;
-(float)settingFontSize;
-(id)initWithWidget:(id)arg0 ;
-(id)settingAttributedText;
-(id)settingFontName;
-(id)settingText;
-(id)settingTextBackgroundColor;
-(id)settingTextColor;
-(struct UIEdgeInsets )settingContentEdgeInsets;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSettingAttributedText:(id)arg0 ;
-(void)setSettingContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setSettingFontName:(id)arg0 ;
-(void)setSettingFontSize:(float)arg0 ;
-(void)setSettingOverflowEnabled:(BOOL)arg0 ;
-(void)setSettingScrollEnabled:(BOOL)arg0 ;
-(void)setSettingText:(id)arg0 ;
-(void)setSettingTextAlignment:(NSInteger)arg0 ;
-(void)setSettingTextBackgroundColor:(id)arg0 ;
-(void)setSettingTextColor:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif