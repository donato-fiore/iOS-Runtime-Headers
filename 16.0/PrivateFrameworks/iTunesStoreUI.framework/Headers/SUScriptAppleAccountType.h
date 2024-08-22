// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTAPPLEACCOUNTTYPE_H
#define SUSCRIPTAPPLEACCOUNTTYPE_H

@class NSString, ACAccountType;


#import "SUScriptObject.h"

@interface SUScriptAppleAccountType : SUScriptObject

@property (readonly) id *accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;
@property (readonly, nonatomic) ACAccountType *nativeAccountType; // ivar: _accountType


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithACAccountType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif