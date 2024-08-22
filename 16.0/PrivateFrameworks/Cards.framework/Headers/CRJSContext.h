// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRJSCONTEXT_H
#define CRJSCONTEXT_H

@class JSContext;



@interface CRJSContext : JSContext



+(id)sharedContext;
-(id)_cardWithTitle:(id)arg0 cardSections:(id)arg1 interaction:(id)arg2 error:(*id)arg3 ;
-(id)initWithVirtualMachine:(id)arg0 ;
-(void)_createCard:(id)arg0 completionHandler:(id)arg1 ;
-(void)evaluateScript:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif