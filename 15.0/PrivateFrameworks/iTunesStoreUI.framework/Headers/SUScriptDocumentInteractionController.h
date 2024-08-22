// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTDOCUMENTINTERACTIONCONTROLLER_H
#define SUSCRIPTDOCUMENTINTERACTIONCONTROLLER_H

@class NSString, WebScriptObject;


#import "SUScriptObject.h"
#import "SUScriptFunction.h"

@interface SUScriptDocumentInteractionController : SUScriptObject {
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_openWithFunction;
}


@property (copy) NSString *UTI;
@property (retain) WebScriptObject *cancelFunction;
@property (retain) WebScriptObject *openWithFunction;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_nativeDocumentInteractionController;
-(id)_nativeObject;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)dismissMenuAnimated:(id)arg0 ;
-(void)showOpenWithMenuFromDOMElement:(id)arg0 ;
-(void)showOpenWithMenuFromNavigationItem:(id)arg0 ;


@end


#endif