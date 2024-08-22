// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACECOLLECTIONIMAGEDOWNLOADOPERATION_H
#define MKPLACECOLLECTIONIMAGEDOWNLOADOPERATION_H

@class NSOperation, NSString, NSCache, NSURLSessionDataTask, UIImage, NSURL;



@interface MKPlaceCollectionImageDownloadOperation : NSOperation

@property (retain, nonatomic) NSString *cacheId; // ivar: _cacheId
@property (weak, nonatomic) NSCache *downloadCache; // ivar: _downloadCache
@property (retain, nonatomic) NSURLSessionDataTask *downloadTask; // ivar: _downloadTask
@property (retain, nonatomic) UIImage *downloadedImage; // ivar: _downloadedImage
@property (nonatomic) BOOL executing; // ivar: _executing
@property (nonatomic) BOOL finished; // ivar: _finished
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithUrl:(id)arg0 downloadCache:(id)arg1 cacheId:(id)arg2 ;
-(void)cancel;
-(void)main;
-(void)markOperationAsComplete;
-(void)start;


@end


#endif