// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIURLIMAGELOADER_H
#define VUIURLIMAGELOADER_H

@class NSString, NSMutableDictionary, NSURLSession;
@protocol NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUIImageLoader, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VUIURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUIImageLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isImageRotationEnabled) BOOL imageRotationEnabled; // ivar: _imageRotationEnabled
@property (readonly, nonatomic) NSMutableDictionary *loadIDsByURL; // ivar: _loadIDsByURL
@property (readonly, nonatomic) NSMutableDictionary *loadOptionsByID; // ivar: _loadOptionsByID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *taskOptionsByURL; // ivar: _taskOptionsByURL


+(id)sharedInstance;
-(id)URLForObject:(id)arg0 ;
-(id)imageKeyForObject:(id)arg0 ;
-(id)init;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_executeOnProcessingQueue:(id)arg0 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif