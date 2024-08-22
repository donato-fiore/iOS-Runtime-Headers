// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVURLSESSIONDOWNLOADTASKWRAPPER_H
#define _TVURLSESSIONDOWNLOADTASKWRAPPER_H

@class NSURL, NSURLSessionDownloadTask;

#import <Foundation/Foundation.h>


@interface _TVURLSessionDownloadTaskWrapper : NSObject {
    NSURL *_url;
    NSURLSessionDownloadTask *_downloadTask;
    NSInteger _downloadTaskID;
    NSInteger _state;
}


@property (readonly, nonatomic) NSInteger state;


-(id)initWithURL:(id)arg0 ;
-(void)cancel;
-(void)resumeWithCompletionHandler:(id)arg0 ;


@end


#endif