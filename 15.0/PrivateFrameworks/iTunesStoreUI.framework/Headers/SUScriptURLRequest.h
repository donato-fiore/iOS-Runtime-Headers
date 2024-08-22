// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTURLREQUEST_H
#define SUSCRIPTURLREQUEST_H

@class SSMutableURLRequestProperties, NSString, NSNumber;


#import "SUScriptObject.h"

@interface SUScriptURLRequest : SUScriptObject {
    SSMutableURLRequestProperties *_requestProperties;
}


@property (copy) NSString *URLBagKey;
@property (copy) id *URLs;
@property (copy) NSNumber *timeoutInterval;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)copyNativeRequestProperties;
-(id)init;
-(id)initWithNativeRequestProperties:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif