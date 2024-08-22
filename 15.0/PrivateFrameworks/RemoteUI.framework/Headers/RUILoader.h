// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUILOADER_H
#define RUILOADER_H

@class NSURL, NSString;
@protocol NSURLSessionTaskDelegate, RUIParserDelegate;


#import "RUIHTTPRequest.h"
#import "RUIParser.h"
#import "_RUILoaderSessionDelegateAdapter.h"
#import "RUIStyle.h"

@interface RUILoader : RUIHTTPRequest <NSURLSessionTaskDelegate>

 {
    RUIParser *_parser;
    NSURL *_url;
    _RUILoaderSessionDelegateAdapter *_sessionDelegateAdapter;
}


@property (nonatomic) BOOL allowNonSecureHTTP; // ivar: _allowNonSecureHTTP
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<RUIParserDelegate> *parserDelegate; // ivar: _parserDelegate
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


-(BOOL)anyWebViewLoading;
-(BOOL)receivedValidResponse:(id)arg0 forRequest:(id)arg1 ;
-(id)URL;
-(id)sessionConfiguration;
-(id)urlSessionDelegate;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_finishLoadWithObjectModel:(id)arg0 actionSignal:(id)arg1 error:(id)arg2 ;
-(void)_handleShouldLoadRequestResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadResources;
-(void)allWebViewsFinishedLoading;
-(void)cancel;
-(void)dealloc;
-(void)didParseData;
-(void)failWithError:(id)arg0 forRequest:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)loadXMLUIWithData:(id)arg0 baseURL:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg0 ;
-(void)loadXMLUIWithURL:(id)arg0 ;
-(void)parseData:(id)arg0 ;
-(void)shouldLoadRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)webViewFinishedLoading;


@end


#endif