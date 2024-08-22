// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAGGREGATEASSETDOWNLOADTASK_H
#define AVAGGREGATEASSETDOWNLOADTASK_H

@class NSURLSessionTask, NSURLRequest, NSURLResponse;


#import "AVURLAsset.h"

@interface AVAggregateAssetDownloadTask : NSURLSessionTask

@property (readonly, nonatomic) AVURLAsset *URLAsset;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLResponse *response;




@end


#endif