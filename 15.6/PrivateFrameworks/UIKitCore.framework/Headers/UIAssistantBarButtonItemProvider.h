// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIASSISTANTBARBUTTONITEMPROVIDER_H
#define UIASSISTANTBARBUTTONITEMPROVIDER_H


#import <Foundation/Foundation.h>


@interface UIAssistantBarButtonItemProvider : NSObject



+(BOOL)_isDictationButtonVisible;
+(BOOL)_isDismissButtonVisible;
+(BOOL)_isEmojiButtonVisible;
+(BOOL)_isInputModeVisible:(id)arg0 ;
+(BOOL)_isKeyboardGroupVisible;
+(BOOL)_isKeyboardItemEnabled;
+(BOOL)_isMinimizeAssistantBarButtonVisible;
+(BOOL)_isShowKeyboardButtonVisible;
+(id)actionForInputMode:(id)arg0 ;
+(id)barButtonItemForAssistantItemStyle:(NSInteger)arg0 target:(id)arg1 ;
+(id)barButtonItemForAssistantItemStyle:(NSInteger)arg0 target:(id)arg1 forcePlainButton:(BOOL)arg2 ;
+(id)compactSystemAssistantItem;
+(id)configuredSymbolImageWithName:(id)arg0 size:(CGFloat)arg1 ;
+(id)defaultSystemLeadingBarButtonGroupsForItem:(id)arg0 ;
+(id)defaultSystemTrailingBarButtonGroupsForItem:(id)arg0 ;
+(id)dictationActionForInputMode:(id)arg0 inCurrentInputMode:(id)arg1 ;
+(id)dictationMenu;
+(id)imageSymbolConfigurationForAssistantBarWithPointSize:(CGFloat)arg0 ;
+(id)languageIndicatorItem:(BOOL)arg0 ;
+(id)languageIndicatorMenu:(BOOL)arg0 ;
+(id)systemDefaultAssistantItem;
+(id)unmodifiableSystemAssistantItem:(NSInteger)arg0 ;
+(void)setAssistantBarCompact:(BOOL)arg0 ;


@end


#endif