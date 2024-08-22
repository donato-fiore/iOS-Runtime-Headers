// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEXTINPUTCOMPONENTCONTROLLER_H
#define WFTEXTINPUTCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFTextTokenEditorViewDelegate, UITextViewDelegate;


#import "CKStatefulViewComponentController.h"
#import "WFVariableEditingContext.h"

@interface WFTextInputComponentController : CKStatefulViewComponentController <WFTextTokenEditorViewDelegate, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFVariableEditingContext *editingContext; // ivar: _editingContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextForNewStatefulView:(id)arg0 ;
+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(id)field;
-(void)componentTreeDidDisappear;
-(void)componentTreeWillAppear;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)textDidChange;
-(void)textDidChangeThrottled;
-(void)textTokenEditorTextDidBeginEditing:(id)arg0 ;
-(void)textTokenEditorTextDidChange:(id)arg0 ;
-(void)textTokenEditorTextDidEndEditing:(id)arg0 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif