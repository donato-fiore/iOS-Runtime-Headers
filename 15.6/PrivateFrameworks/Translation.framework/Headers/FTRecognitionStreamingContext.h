// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTRECOGNITIONSTREAMINGCONTEXT_H
#define FTRECOGNITIONSTREAMINGCONTEXT_H

@protocol OspreyClientStreamingContext;

#import <Foundation/Foundation.h>


@interface FTRecognitionStreamingContext : NSObject {
    id<OspreyClientStreamingContext> *_grpcContext;
}




-(id)initWithGRPCStreamingCallContext:(id)arg0 ;
-(void)closeStream;
-(void)sendRecognitionStreamingRequest:(id)arg0 ;


@end


#endif