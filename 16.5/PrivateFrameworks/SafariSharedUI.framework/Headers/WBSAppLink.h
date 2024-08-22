// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAPPLINK_H
#define WBSAPPLINK_H

@class LSAppLink, LSApplicationProxy, NSURL;

#import <Foundation/Foundation.h>


@interface WBSAppLink : NSObject {
    os_unfair_lock_s _ivarLock;
    BOOL _didResolveAppLink;
    LSAppLink *_cachedAppLink;
}


@property (readonly, nonatomic, getter=isAppleNewsLink) BOOL isAppleNewsLink;
@property (readonly, nonatomic) LSApplicationProxy *synchronousTargetApplicationProxy;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(void)clearSavedSettings;
-(BOOL)_isApplicationProxyAppleNews:(id)arg0 ;
-(NSInteger)_openStrategyForAppLink:(id)arg0 ;
-(NSInteger)synchronouslyDecideOpenStrategy;
-(id)_synchronouslyFetchAppLinkWithError:(*id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_appLink:(id)arg0 getAppLinkLabel:(*id)arg1 name:(*id)arg2 icon:(*id)arg3 ;
-(void)_getAppLinkWithCompletionHandler:(id)arg0 ;
-(void)decideOpenStrategyWithCompletionHandler:(id)arg0 ;
-(void)disable;
-(void)disableWithCompletionHandler:(id)arg0 ;
-(void)getAppLinkAttributesWithCompletionHandler:(id)arg0 ;
-(void)getAppLinkLabel:(*id)arg0 name:(*id)arg1 icon:(*id)arg2 ;
-(void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:(id)arg0 ;
-(void)openExternally;
-(void)openExternallyWithWebBrowserState:(id)arg0 referrerURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif