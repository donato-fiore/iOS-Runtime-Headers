// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTFACEBOOKREQUEST_H
#define SUSCRIPTFACEBOOKREQUEST_H

@class SLRequest, NSURL;


#import "SUScriptObject.h"
#import "SUScriptAppleAccount.h"

@interface SUScriptFacebookRequest : SUScriptObject {
    SLRequest *_request;
    NSInteger _requestMethod;
    SUScriptAppleAccount *_scriptAccount;
    NSURL *_url;
}


@property (readonly, copy) NSURL *URL;
@property (retain) SUScriptAppleAccount *account;
@property (readonly) NSInteger requestMethod;
@property (readonly) NSInteger requestMethodDelete;
@property (readonly) NSInteger requestMethodGet;
@property (readonly) NSInteger requestMethodPost;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_isRequestAllowed:(*id)arg0 ;
-(id)_className;
-(id)attributeKeys;
-(id)initWithURL:(id)arg0 requestMethod:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)_performRequest:(id)arg0 withScriptFunction:(id)arg1 ;
-(void)addMultiPartData:(id)arg0 withName:(id)arg1 type:(id)arg2 ;
-(void)addParameterWithKey:(id)arg0 value:(id)arg1 ;
-(void)dealloc;
-(void)performRequestWithFunction:(id)arg0 ;
-(void)setParameters:(id)arg0 ;


@end


#endif