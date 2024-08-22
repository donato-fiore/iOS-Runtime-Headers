// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBFORMDELEGATE_H
#define UIWEBFORMDELEGATE_H

@class NSString;
@protocol WebFormDelegate;

#import <Foundation/Foundation.h>

#import "UIWebBrowserView.h"
#import "_UIWebFormDelegateEditedFormsMap.h"

@interface UIWebFormDelegate : NSObject <WebFormDelegate>

 {
    UIWebBrowserView *_webBrowserView;
    _UIWebFormDelegateEditedFormsMap *_editedForms;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldIgnoreFormTextChangesInFrame:(id)arg0 ;
-(BOOL)formWasEdited;
-(BOOL)hasCurrentSuggestions;
-(BOOL)textField:(id)arg0 doCommandBySelector:(SEL)arg1 inFrame:(id)arg2 ;
-(id)initWithWebBrowserView:(id)arg0 ;
-(struct ? )suggestionsForString:(id)arg0 inputIndex:(unsigned int)arg1 ;
-(void)_clearEditedFormsInFrame:(id)arg0 ;
-(void)_didEditFormElement:(id)arg0 inFrame:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg0 ;
-(void)dataSourceHasChangedForFrame:(id)arg0 ;
-(void)dealloc;
-(void)didFocusTextField:(id)arg0 inFrame:(id)arg1 ;
-(void)frame:(id)arg0 sourceFrame:(id)arg1 willSubmitForm:(id)arg2 withValues:(id)arg3 submissionListener:(id)arg4 ;
-(void)textDidChangeInTextArea:(id)arg0 inFrame:(id)arg1 ;
-(void)textDidChangeInTextField:(id)arg0 inFrame:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 inFrame:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 inFrame:(id)arg1 ;
-(void)willSendSubmitEventToForm:(id)arg0 inFrame:(id)arg1 withValues:(id)arg2 ;


@end


#endif