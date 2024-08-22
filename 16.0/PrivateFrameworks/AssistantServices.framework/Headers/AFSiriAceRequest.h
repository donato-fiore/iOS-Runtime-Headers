// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIACEREQUEST_H
#define AFSIRIACEREQUEST_H

@protocol AFSiriExternalRequest, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest>

 {
    NSObject<OS_xpc_object> *_startRequestData;
    NSObject<OS_xpc_object> *_startLocalRequestData;
    NSUInteger _requestOptions;
}




-(id)initWithStartLocalRequest:(id)arg0 requestOptions:(NSUInteger)arg1 ;
-(id)initWithStartRequest:(id)arg0 ;
-(id)initWithStartRequest:(id)arg0 requestOptions:(NSUInteger)arg1 ;
-(void)performRequestWithCompletion:(id)arg0 ;


@end


#endif