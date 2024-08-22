// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLSESSIONREQUESTBODYSTREAM_H
#define NWURLSESSIONREQUESTBODYSTREAM_H

@class NSInputStream, NSString;
@protocol NSStreamDelegate, NWURLSessionRequestBodyProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWURLSessionReadRequest.h"

@interface NWURLSessionRequestBodyStream : NSObject <NSStreamDelegate, NWURLSessionRequestBodyProvider>

 {
    BOOL _streamIsSetup;
    NSInputStream *_stream;
    NSUInteger _offset;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionReadRequest *_readRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)readMinimumIncompleteLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif