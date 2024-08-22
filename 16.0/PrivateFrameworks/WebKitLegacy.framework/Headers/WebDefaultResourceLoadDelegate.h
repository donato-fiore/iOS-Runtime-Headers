// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBDEFAULTRESOURCELOADDELEGATE_H
#define WEBDEFAULTRESOURCELOADDELEGATE_H


#import <Foundation/Foundation.h>


@interface WebDefaultResourceLoadDelegate : NSObject



+(id)sharedResourceLoadDelegate;
-(BOOL)webView:(id)arg0 resource:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 forDataSource:(id)arg3 ;
-(BOOL)webView:(id)arg0 resource:(id)arg1 shouldUseCredentialStorageForDataSource:(id)arg2 ;
-(id)webView:(id)arg0 connectionPropertiesForResource:(id)arg1 dataSource:(id)arg2 ;
-(id)webView:(id)arg0 identifierForInitialRequest:(id)arg1 fromDataSource:(id)arg2 ;
-(id)webView:(id)arg0 resource:(id)arg1 willCacheResponse:(id)arg2 fromDataSource:(id)arg3 ;
-(id)webView:(id)arg0 resource:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg0 didLoadResourceFromMemoryCache:(id)arg1 response:(id)arg2 length:(NSInteger)arg3 fromDataSource:(id)arg4 ;
-(void)webView:(id)arg0 plugInFailedWithError:(id)arg1 dataSource:(id)arg2 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFailLoadingWithError:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didFinishLoadingFromDataSource:(id)arg2 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveContentLength:(NSInteger)arg2 fromDataSource:(id)arg3 ;
-(void)webView:(id)arg0 resource:(id)arg1 didReceiveResponse:(id)arg2 fromDataSource:(id)arg3 ;


@end


#endif