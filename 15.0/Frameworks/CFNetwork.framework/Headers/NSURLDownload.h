// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLDOWNLOAD_H
#define NSURLDOWNLOAD_H

@class NSString, NSData;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>

#import "NSURLDownloadInternal.h"
#import "NSURLRequest.h"

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender>

 {
    NSURLDownloadInternal *_internal;
}


@property (readonly, copy) NSString *debugDescription;
@property BOOL deletesFileUponFailure;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSData *resumeData;
@property (readonly) Class superclass;


+(BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)arg0 ;
+(id)_downloadWithLoadingCFURLConnection:(struct _CFURLConnection *)arg0 request:(struct _CFURLRequest *)arg1 response:(struct _CFURLResponse *)arg2 delegate:(id)arg3 proxy:(id)arg4 ;
+(id)_downloadWithLoadingConnection:(id)arg0 request:(id)arg1 response:(id)arg2 delegate:(id)arg3 proxy:(id)arg4 ;
+(id)_downloadWithRequest:(id)arg0 delegate:(id)arg1 directory:(id)arg2 ;
-(id)_directoryPath;
-(id)_initWithLoadingCFURLConnection:(struct _CFURLConnection *)arg0 request:(struct _CFURLRequest *)arg1 response:(struct _CFURLResponse *)arg2 delegate:(id)arg3 proxy:(id)arg4 ;
-(id)_initWithLoadingConnection:(id)arg0 request:(id)arg1 response:(id)arg2 delegate:(id)arg3 proxy:(id)arg4 ;
-(id)_initWithRequest:(id)arg0 delegate:(id)arg1 directory:(id)arg2 ;
-(id)_initWithResumeInformation:(id)arg0 delegate:(id)arg1 path:(id)arg2 ;
-(id)_resumeInformation;
-(id)init;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)initWithResumeData:(id)arg0 delegate:(id)arg1 path:(id)arg2 ;
-(id)url;
-(void)_setDelegate:(id)arg0 ;
-(void)_setDelegateQueue:(id)arg0 ;
-(void)_setDirectoryPath:(id)arg0 ;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)setDestination:(id)arg0 allowOverwrite:(BOOL)arg1 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;
-(void)withDelegate:(id)arg0 ;


@end


#endif