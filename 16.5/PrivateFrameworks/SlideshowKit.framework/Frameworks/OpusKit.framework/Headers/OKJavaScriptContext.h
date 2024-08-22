// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKJAVASCRIPTCONTEXT_H
#define OKJAVASCRIPTCONTEXT_H

@class JSContext;



@interface OKJavaScriptContext : JSContext



-(id)init;
-(id)valueFromJSValue:(id)arg0 ;
-(void)dealloc;
-(void)setupActions;
-(void)setupConsole;
-(void)setupContentFilters;
-(void)setupControllers;
-(void)setupConvenienceMethods;
-(void)setupExceptionHandler;
-(void)setupNativeObjects;
-(void)setupNativeStructs;
-(void)setupOpus;
-(void)setupTransitions;
-(void)setupWidgets;


@end


#endif