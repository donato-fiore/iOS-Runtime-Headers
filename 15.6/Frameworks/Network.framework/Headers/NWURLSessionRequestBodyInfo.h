// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWURLSESSIONREQUESTBODYINFO_H
#define NWURLSESSIONREQUESTBODYINFO_H

@class NSURL, NSInputStream;
@protocol OS_dispatch_data, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWURLSessionRequestBodyInfo : NSObject {
    BOOL _streamUsed;
    NSObject<OS_dispatch_data> *_data;
    NSURL *_fileURL;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _streamOffset;
}






@end


#endif