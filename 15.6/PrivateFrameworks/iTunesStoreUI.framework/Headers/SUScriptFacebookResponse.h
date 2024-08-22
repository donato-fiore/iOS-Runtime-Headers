// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTFACEBOOKRESPONSE_H
#define SUSCRIPTFACEBOOKRESPONSE_H

@class NSString;


#import "SUScriptObject.h"
#import "SUScriptError.h"

@interface SUScriptFacebookResponse : SUScriptObject {
    NSString *_bodyData;
    SUScriptError *_error;
    NSInteger _statusCode;
}


@property (readonly) NSInteger HTTPStatusCode;
@property (readonly) NSString *bodyData;
@property (readonly) SUScriptError *error;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif