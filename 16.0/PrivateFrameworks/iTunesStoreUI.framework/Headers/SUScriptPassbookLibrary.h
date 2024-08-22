// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTPASSBOOKLIBRARY_H
#define SUSCRIPTPASSBOOKLIBRARY_H

@class PKPassLibrary, NSArray;


#import "SUScriptObject.h"

@interface SUScriptPassbookLibrary : SUScriptObject {
    PKPassLibrary *_passLibrary;
}


@property (readonly) NSArray *passes;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithPassLibrary:(id)arg0 ;
-(id)passWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif