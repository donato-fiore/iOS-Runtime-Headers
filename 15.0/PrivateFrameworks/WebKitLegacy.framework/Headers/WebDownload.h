// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBDOWNLOAD_H
#define WEBDOWNLOAD_H

@class NSURLDownload;


#import "WebDownloadInternal.h"

@interface WebDownload : NSURLDownload {
    WebDownloadInternal *_webInternal;
}




-(id)_initWithLoadingConnection:(id)arg0 request:(id)arg1 response:(id)arg2 delegate:(id)arg3 proxy:(id)arg4 ;
-(id)_initWithRequest:(id)arg0 delegate:(id)arg1 directory:(id)arg2 ;
-(id)init;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(void)_setRealDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif