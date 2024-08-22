// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTTEXTFIELDNATIVEOBJECT_H
#define SUSCRIPTTEXTFIELDNATIVEOBJECT_H

@class NSString;
@protocol SUScriptTextFieldDelegate;


#import "SUScriptNativeObject.h"
#import "SUScriptTextFieldDelegate.h"

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>

 {
    SUScriptTextFieldDelegate *_textFieldDelegate;
}


@property (nonatomic) NSInteger autocapitalizationType;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) CGFloat width;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)_nativeObjectDelegate;
-(void)_sendScriptDidChange;
-(void)_setNativeObjectDelegate:(id)arg0 ;
-(void)_textDidChange:(id)arg0 ;
-(void)_textDidEndEditingOnExit:(id)arg0 ;
-(void)dealloc;
-(void)destroyNativeObject;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setupNativeObject;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif