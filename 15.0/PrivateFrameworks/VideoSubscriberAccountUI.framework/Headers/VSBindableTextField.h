// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSBINDABLETEXTFIELD_H
#define VSBINDABLETEXTFIELD_H

@class UITextField;



@interface VSBindableTextField : UITextField



-(BOOL)isSecureTextEntry;
-(NSInteger)autocapitalizationType;
-(NSInteger)autocorrectionType;
-(NSInteger)keyboardType;
-(NSInteger)returnKeyType;
-(id)placeholder;
-(id)text;
-(void)setAutocapitalizationType:(NSInteger)arg0 ;
-(void)setAutocorrectionType:(NSInteger)arg0 ;
-(void)setKeyboardType:(NSInteger)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setReturnKeyType:(NSInteger)arg0 ;
-(void)setSecureTextEntry:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif