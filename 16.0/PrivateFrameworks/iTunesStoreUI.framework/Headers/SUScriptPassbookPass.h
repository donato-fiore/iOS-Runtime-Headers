// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTPASSBOOKPASS_H
#define SUSCRIPTPASSBOOKPASS_H

@class PKPass, NSString;


#import "SUScriptObject.h"

@interface SUScriptPassbookPass : SUScriptObject {
    PKPass *_pass;
}


@property (readonly) NSString *passTypeIdentifier;
@property (readonly) NSString *passURL;
@property (readonly) NSString *serialNumber;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithPass:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif