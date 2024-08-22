// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLSESSIONREADREQUEST_H
#define NWURLSESSIONREADREQUEST_H

@class NSError;
@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWURLSessionReadRequest : NSObject {
    BOOL _complete;
    NSUInteger _minimumLength;
    NSUInteger _maximumLength;
    id *_awaitingData;
    NSObject<OS_dispatch_data> *_data;
    NSError *_error;
}






@end


#endif