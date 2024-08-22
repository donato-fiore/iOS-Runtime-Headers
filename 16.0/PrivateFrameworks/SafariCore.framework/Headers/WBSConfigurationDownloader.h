// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCONFIGURATIONDOWNLOADER_H
#define WBSCONFIGURATIONDOWNLOADER_H

@class NSURLSessionDataTask, NSURL, NSString;

#import <Foundation/Foundation.h>

#import "WBSConfigurationDataTransformer.h"

@interface WBSConfigurationDownloader : NSObject {
    WBSConfigurationDataTransformer *_transformer;
    NSURLSessionDataTask *_dataTask;
    NSURL *_baseURL;
    NSString *_fileName;
    BOOL _isCancelled;
}




+(id)new;
-(id)init;
-(id)initWithFileName:(id)arg0 dataTransformer:(id)arg1 ;
-(void)cancel;
-(void)downloadConfigurationWithCompletionHandler:(id)arg0 ;


@end


#endif