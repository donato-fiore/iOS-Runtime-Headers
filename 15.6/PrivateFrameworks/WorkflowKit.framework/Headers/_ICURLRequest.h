// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ICURLREQUEST_H
#define _ICURLREQUEST_H

@class NSURL, NSString, NSDictionary, NSUUID;
@protocol WFUserInterfaceHost;

#import <Foundation/Foundation.h>

#import "ICScheme.h"

@interface _ICURLRequest : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic, getter=isCallbackRequest) BOOL callbackRequest; // ivar: _callbackRequest
@property (nonatomic) BOOL deferCompletionUntilReturn; // ivar: _deferCompletionUntilReturn
@property (copy, nonatomic) id *failureHandler; // ivar: _failureHandler
@property (copy, nonatomic) NSURL *generatedCallbackURL; // ivar: _generatedCallbackURL
@property (nonatomic, getter=isInternalCallbackRequest) BOOL internalCallbackRequest; // ivar: _internalCallbackRequest
@property (readonly, copy, nonatomic) id *opener;
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) NSInteger retries; // ivar: _retries
@property (readonly, nonatomic) ICScheme *scheme; // ivar: _scheme
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (readonly, nonatomic) NSString *subAction; // ivar: _subAction
@property (copy, nonatomic) id *successHandler; // ivar: _successHandler
@property (copy, nonatomic) NSString *successURLQueryString; // ivar: _successURLQueryString
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (readonly, weak, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface


+(id)requestWithURL:(id)arg0 ;
+(id)requestWithURL:(id)arg0 fromSourceApplication:(id)arg1 ;
// +(id)requestWithURL:(id)arg0 scheme:(id)arg1 userInterface:(id)arg2 bundleIdentifier:(id)arg3 successHandler:(id)arg4 failureHandler:(unk)arg5  ;
-(id)description;
// -(id)initWithURL:(id)arg0 scheme:(id)arg1 userInterface:(id)arg2 successHandler:(id)arg3 failureHandler:(unk)arg4 bundleIdentifier:(id)arg5  ;
-(void)parseActions;


@end


#endif