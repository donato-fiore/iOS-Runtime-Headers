// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIURLSESSION_H
#define SIRIUIURLSESSION_H

@class NSURLSession, NSMapTable, NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface SiriUIURLSession : NSObject <NSURLSessionDataDelegate>

 {
    NSURLSession *_URLSession;
    NSMapTable *_tasksForClient;
    NSMapTable *_imageDownloadForTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedURLSession;
-(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 completionHandler:(id)arg2 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 fitToSize:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 fitToSize:(struct CGSize )arg2 fillColor:(id)arg3 completionHandler:(id)arg4 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 fitToSize:(struct CGSize )arg2 fillColor:(id)arg3 userAgent:(id)arg4 completionHandler:(id)arg5 ;
// -(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 fitToSize:(struct CGSize )arg2 incremental:(BOOL)arg3 progressHandler:(id)arg4 fillColor:(unk)arg5  ;
// -(id)imageTaskWithHTTPGetRequest:(id)arg0 client:(id)arg1 fitToSize:(struct CGSize )arg2 incremental:(BOOL)arg3 progressHandler:(id)arg4 fillColor:(unk)arg5 userAgent:(id)arg6  ;
-(id)init;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)_registerTask:(id)arg0 forClient:(id)arg1 ;
-(void)_unregisterTask:(id)arg0 forClient:(id)arg1 ;
-(void)cancelAllTasksForClient:(id)arg0 ;


@end


#endif