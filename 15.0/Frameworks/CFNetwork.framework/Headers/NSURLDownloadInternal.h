// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLDOWNLOADINTERNAL_H
#define NSURLDOWNLOADINTERNAL_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>

#import "NSURLAuthenticationChallenge.h"

@interface NSURLDownloadInternal : NSObject {
    *_CFURLDownload cfDownload;
    *_CFURLAuthChallenge currCFChallenge;
    NSURLAuthenticationChallenge *currNSChallenge;
    id *delegate;
    BOOL downloadActive;
    NSOperationQueue *_targetQueue;
}




-(void)dealloc;


@end


#endif