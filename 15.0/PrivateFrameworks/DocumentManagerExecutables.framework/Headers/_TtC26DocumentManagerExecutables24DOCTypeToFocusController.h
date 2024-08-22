// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES24DOCTYPETOFOCUSCONTROLLER_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES24DOCTYPETOFOCUSCONTROLLER_H

@class UIResponder, UITextInputAssistantItem, UIView;
@protocol UIKeyInput;



@interface _TtC26DocumentManagerExecutables24DOCTypeToFocusController : UIResponder <UIKeyInput>

 {
    ? delegate;
    ? typeToFocusInputBuffer;
    ? typeToFocusTimeout;
    ? typeToFocusInputView;
}


@property (nonatomic) NSInteger autocorrectionType;
@property (nonatomic, readonly) BOOL hasText;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) UIView *inputView;


-(id)init;
-(void)deleteBackward;
-(void)insertText:(id)arg0 ;
-(void)typingTimeout;


@end


#endif