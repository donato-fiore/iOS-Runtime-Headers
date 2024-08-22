// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTTEXTFIELDNATIVEOBJECTUITEXTFIELD_H
#define SUSCRIPTTEXTFIELDNATIVEOBJECTUITEXTFIELD_H



#import "SUScriptTextFieldNativeObject.h"

@interface SUScriptTextFieldNativeObjectUITextField : SUScriptTextFieldNativeObject



-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(CGFloat)width;
-(NSInteger)autocapitalizationType;
-(NSInteger)autocorrectionType;
-(NSInteger)keyboardType;
-(id)_nativeObjectDelegate;
-(id)value;
-(void)_setNativeObjectDelegate:(id)arg0 ;
-(void)destroyNativeObject;
-(void)setAutocapitalizationType:(NSInteger)arg0 ;
-(void)setAutocorrectionType:(NSInteger)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)setWidth:(CGFloat)arg0 ;
-(void)setupNativeObject;


@end


#endif