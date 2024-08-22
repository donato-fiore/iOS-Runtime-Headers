// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTAPPLEACCOUNTCREDENTIAL_H
#define SUSCRIPTAPPLEACCOUNTCREDENTIAL_H

@class ACAccountCredential, NSString;


#import "SUScriptObject.h"

@interface SUScriptAppleAccountCredential : SUScriptObject {
    ACAccountCredential *_credential;
}


@property (readonly) NSString *oauthToken;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithACAccountCredential:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif