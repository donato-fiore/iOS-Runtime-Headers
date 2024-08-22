// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFDOWNLOADDISPATCHER_H
#define _SFDOWNLOADDISPATCHER_H

@class NSMapTable, NSString;
@protocol _WKDownloadDelegate;

#import <Foundation/Foundation.h>


@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate>

 {
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDownloadDispatcher;
-(id)downloadFromWKDownload:(id)arg0 userInitiatedAction:(id)arg1 ;
-(id)init;
-(id)prepareForDownloadFromWebView:(id)arg0 request:(id)arg1 MIMEType:(id)arg2 uti:(id)arg3 userInitiatedAction:(id)arg4 ;
-(id)startDownloadForCurrentURLFromWebView:(id)arg0 ;
-(id)startDownloadFromWebView:(id)arg0 URL:(id)arg1 ;
-(void)_download:(id)arg0 decideDestinationWithSuggestedFilename:(id)arg1 completionHandler:(id)arg2 ;
-(void)_download:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_download:(id)arg0 didReceiveData:(NSUInteger)arg1 ;
-(void)_download:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)_downloadDidCancel:(id)arg0 ;
-(void)_downloadDidFinish:(id)arg0 ;
-(void)_downloadDidStart:(id)arg0 ;
-(void)_downloadProcessDidCrash:(id)arg0 ;
-(void)registerResumedDownload:(id)arg0 ;
-(void)setPendingDownload:(id)arg0 forWebView:(id)arg1 ;


@end


#endif