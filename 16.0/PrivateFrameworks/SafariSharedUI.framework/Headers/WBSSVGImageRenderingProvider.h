// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSVGIMAGERENDERINGPROVIDER_H
#define WBSSVGIMAGERENDERINGPROVIDER_H

@class NSString;
@protocol WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>


@interface WBSSVGImageRenderingProvider : NSObject <WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


-(BOOL)_requestIsValid:(id)arg0 ;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)webViewMetadataFetchOperation:(id)arg0 didFinishUsingWebView:(id)arg1 ;
-(void)webViewMetadataFetchOperation:(id)arg0 getWebViewOfSize:(struct CGSize )arg1 withConfiguration:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif