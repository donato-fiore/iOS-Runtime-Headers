// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLPROTOCOLINTERNAL_H
#define NSURLPROTOCOLINTERNAL_H

@protocol NSURLProtocolClient;

#import <Foundation/Foundation.h>

#import "NSURLRequest.h"
#import "NSCachedURLResponse.h"

@interface NSURLProtocolInternal : NSObject {
    id<NSURLProtocolClient> *client;
    NSURLRequest *request;
    NSCachedURLResponse *cachedResponse;
}




-(void)dealloc;


@end


#endif