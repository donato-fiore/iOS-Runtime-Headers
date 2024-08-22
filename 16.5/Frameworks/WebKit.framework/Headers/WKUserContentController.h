// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKUSERCONTENTCONTROLLER_H
#define WKUSERCONTENTCONTROLLER_H

@class NSArray, NSString;
@protocol WKObject, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WKUserContentController : NSObject <WKObject, NSSecureCoding>

 {
    ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy, nonatomic) NSArray *_userStyleSheets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *userScripts;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_addContentRuleList:(id)arg0 extensionBaseURL:(id)arg1 ;
-(void)_addScriptMessageHandler:(*void)arg0 ;
-(void)_addScriptMessageHandler:(id)arg0 name:(id)arg1 contentWorld:(id)arg2 ;
-(void)_addScriptMessageHandler:(id)arg0 name:(id)arg1 userContentWorld:(id)arg2 ;
-(void)_addUserContentFilter:(id)arg0 ;
-(void)_addUserScriptImmediately:(id)arg0 ;
-(void)_addUserStyleSheet:(id)arg0 ;
-(void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg0 ;
-(void)_removeAllUserContentFilters;
-(void)_removeAllUserScriptsAssociatedWithContentWorld:(id)arg0 ;
-(void)_removeAllUserStyleSheets;
-(void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)arg0 ;
-(void)_removeScriptMessageHandlerForName:(id)arg0 userContentWorld:(id)arg1 ;
-(void)_removeUserContentFilter:(id)arg0 ;
-(void)_removeUserScript:(id)arg0 ;
-(void)_removeUserStyleSheet:(id)arg0 ;
-(void)addContentRuleList:(id)arg0 ;
-(void)addScriptMessageHandler:(id)arg0 contentWorld:(id)arg1 name:(id)arg2 ;
-(void)addScriptMessageHandler:(id)arg0 name:(id)arg1 ;
-(void)addScriptMessageHandlerWithReply:(id)arg0 contentWorld:(id)arg1 name:(id)arg2 ;
-(void)addUserScript:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllContentRuleLists;
-(void)removeAllScriptMessageHandlers;
-(void)removeAllScriptMessageHandlersFromContentWorld:(id)arg0 ;
-(void)removeAllUserScripts;
-(void)removeContentRuleList:(id)arg0 ;
-(void)removeScriptMessageHandlerForName:(id)arg0 ;
-(void)removeScriptMessageHandlerForName:(id)arg0 contentWorld:(id)arg1 ;


@end


#endif