// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTNATIVEUIBUTTON_H
#define SUSCRIPTNATIVEUIBUTTON_H



#import "SUScriptButtonNativeObject.h"

@interface SUScriptNativeUIButton : SUScriptButtonNativeObject



+(id)objectWithDefaultButtonForScriptButton:(id)arg0 ;
-(NSInteger)tag;
-(id)image;
-(id)title;
-(struct UIEdgeInsets )imageInsets;
-(void)connectButtonAction;
-(void)destroyNativeObject;
-(void)disconnectButtonAction;
-(void)setImage:(id)arg0 ;
-(void)setImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setTag:(NSInteger)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setupNativeObject;


@end


#endif