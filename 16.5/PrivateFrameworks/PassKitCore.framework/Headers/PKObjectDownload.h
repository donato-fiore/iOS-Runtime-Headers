// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKOBJECTDOWNLOAD_H
#define PKOBJECTDOWNLOAD_H

@class NSMutableSet, NSURLSessionDataTask;

#import <Foundation/Foundation.h>


@interface PKObjectDownload : NSObject

@property (retain, nonatomic) NSMutableSet *completionHandlers; // ivar: _completionHandlers
@property (copy, nonatomic) NSURLSessionDataTask *task; // ivar: _task


-(id)init;


@end


#endif