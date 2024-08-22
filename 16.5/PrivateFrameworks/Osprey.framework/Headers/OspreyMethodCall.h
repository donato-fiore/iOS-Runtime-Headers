// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYMETHODCALL_H
#define OSPREYMETHODCALL_H

@class NSString;
@protocol OspreyRPC;

#import <Foundation/Foundation.h>


@interface OspreyMethodCall : NSObject {
    NSString *_methodName;
    id<OspreyRPC> *_channel;
    id *_serializeRequest;
    id *_deserializeResponse;
    id *_defaultRequestBuilder;
}




// -(id)callWithMessageReceived:(id)arg0 completion:(unk)arg1  ;
// -(id)callWithRequestBuilder:(id)arg0 messageReceived:(unk)arg1 completion:(id)arg2  ;
// -(id)initWithMethodName:(id)arg0 channel:(id)arg1 serializeRequest:(id)arg2 deserializeResponse:(unk)arg3 defaultRequestBuilder:(id)arg4  ;


@end


#endif