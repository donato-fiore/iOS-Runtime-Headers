// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPMEDIAASSETFETCHER_H
#define LPMEDIAASSETFETCHER_H

@class AVURLAsset, NSString, NSURLSession, NSMutableData, NSURL;
@protocol NSURLSessionDataDelegate;


#import "LPFetcher.h"

@interface LPMediaAssetFetcher : LPFetcher <NSURLSessionDataDelegate>

 {
    id *_completionHandler;
    AVURLAsset *_asset;
    BOOL _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
    BOOL _loadingIsNonAppInitiated;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldDownloadIfPossible; // ivar: _shouldDownloadIfPossible
@property (readonly) Class superclass;


-(id)audioProperties;
-(id)init;
-(id)videoProperties;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_completedWithAudio:(id)arg0 ;
-(void)_completedWithVideo:(id)arg0 ;
-(void)_resolveVideo;
-(void)cancel;
-(void)fetchWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopLoading;


@end


#endif