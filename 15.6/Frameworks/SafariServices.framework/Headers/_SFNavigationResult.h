// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFNAVIGATIONRESULT_H
#define _SFNAVIGATIONRESULT_H

@class NSURL, WBSAppLink, LSApplicationProxy;

#import <Foundation/Foundation.h>


@interface _SFNavigationResult : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) WBSAppLink *appLink; // ivar: _appLink
@property (readonly, nonatomic) BOOL appliesOneTimeUserInitiatedActionPolicy;
@property (readonly, nonatomic) LSApplicationProxy *externalApplication; // ivar: _externalApplication
@property (readonly, nonatomic) NSInteger externalApplicationCategory; // ivar: _externalApplicationCategory
@property (readonly, nonatomic) BOOL isRedirectToAppleServices;
@property (nonatomic) BOOL loadWasUserDriven; // ivar: _loadWasUserDriven
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)resultOfLoadingRequest:(id)arg0 isMainFrame:(BOOL)arg1 disallowRedirectToExternalApps:(BOOL)arg2 preferredApplicationBundleIdentifier:(id)arg3 redirectDecisionHandler:(id)arg4 ;
+(id)resultOfType:(NSInteger)arg0 withURL:(id)arg1 ;
+(id)resultWithAppLink:(id)arg0 ;
+(id)resultWithRedirectToExternalURL:(id)arg0 preferredApplicationBundleIdentifier:(id)arg1 ;
// +(void)determineResultOfLoadingRequest:(id)arg0 isMainFrame:(BOOL)arg1 disallowRedirectToExternalApps:(BOOL)arg2 preferredApplicationBundleIdentifier:(id)arg3 redirectDecisionHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(BOOL)shouldPromptWithPolicy:(NSInteger)arg0 telephonyNavigationPolicy:(id)arg1 userAction:(id)arg2 inBackground:(BOOL)arg3 ;
-(id)_initWithType:(NSInteger)arg0 URL:(id)arg1 externalApplication:(id)arg2 appLink:(id)arg3 ;


@end


#endif