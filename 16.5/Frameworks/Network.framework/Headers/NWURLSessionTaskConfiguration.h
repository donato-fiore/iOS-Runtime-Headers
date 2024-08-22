// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONTASKCONFIGURATION_H
#define NWURLSESSIONTASKCONFIGURATION_H

@class NSURLSessionConfiguration, NSURLRequest;

#import <Foundation/Foundation.h>

#import "NWURLSessionTask.h"

@interface NWURLSessionTaskConfiguration : NSObject {
    NSURLSessionConfiguration *_configuration;
    NWURLSessionTask *_task;
    NSURLRequest *_request;
}






@end


#endif