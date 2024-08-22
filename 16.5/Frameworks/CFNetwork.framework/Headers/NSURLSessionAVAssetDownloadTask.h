// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLSESSIONAVASSETDOWNLOADTASK_H
#define NSURLSESSIONAVASSETDOWNLOADTASK_H

@class NSURL;


#import "NSURLSessionTask.h"

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask

@property (readonly) NSUInteger AVAssetDownloadToken; // ivar: _AVAssetDownloadToken
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *destinationURL;




@end


#endif