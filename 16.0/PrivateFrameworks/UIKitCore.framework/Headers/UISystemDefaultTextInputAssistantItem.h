// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISYSTEMDEFAULTTEXTINPUTASSISTANTITEM_H
#define UISYSTEMDEFAULTTEXTINPUTASSISTANTITEM_H

@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;


#import "UITextInputAssistantItem.h"

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups; // ivar: _defaultSystemLeadingBarButtonGroups
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups; // ivar: _defaultSystemTrailingBarButtonGroups
@property (weak, nonatomic) NSObject<UISystemDefaultTextInputAssistantItemDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isKeyboardCameraItem; // ivar: _isKeyboardCameraItem
@property (nonatomic, getter=_isSystemItem) BOOL systemItem; // ivar: _systemItem


-(BOOL)canPerformSystemButtonActionForStyle:(NSInteger)arg0 ;
-(SEL)_responderSelectorForSystemButtonStyle:(NSInteger)arg0 ;
-(id)init;
-(void)_updateIsSystemItem;
-(void)analyticsDispatchWithActionStyle:(NSInteger)arg0 ;
-(void)assistantBold;
-(void)assistantCopy;
-(void)assistantCut;
-(void)assistantDictation;
-(void)assistantDictationMicOn;
-(void)assistantDismiss;
-(void)assistantEmoji;
-(void)assistantExpand;
-(void)assistantItalic;
-(void)assistantPaste:(id)arg0 forEvent:(id)arg1 ;
-(void)assistantRedo;
-(void)assistantReturnKey;
-(void)assistantShowKeyboard;
-(void)assistantUnderline;
-(void)assistantUndo;
-(void)assistantWriteboard;
-(void)performSystemButtonActionForStyle:(NSInteger)arg0 ;
-(void)setLeadingBarButtonGroups:(id)arg0 ;
-(void)setTrailingBarButtonGroups:(id)arg0 ;


@end


#endif