// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIARASSETREQUEST_H
#define VUIARASSETREQUEST_H

@class NSString, NSURL, NSURLSessionDownloadTask;

#import <Foundation/Foundation.h>


@interface VUIARAssetRequest : NSObject

@property (retain, nonatomic) NSString *cacheKey; // ivar: _cacheKey
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) BOOL isDownloading; // ivar: _isDownloading
@property (retain, nonatomic) NSURL *remoteURL; // ivar: _remoteURL
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (retain, nonatomic) NSURLSessionDownloadTask *task; // ivar: _task


-(id)_prefixForString:(id)arg0 ;
-(id)cacheDownloadedFileFromLocation:(id)arg0 ;
-(id)cachePath;
-(id)initWithRemoteURL:(id)arg0 shareURL:(id)arg1 fileName:(id)arg2 ;
-(void)cancelDownload;
-(void)recordLog:(id)arg0 ;
-(void)startDownloadWithSession:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif