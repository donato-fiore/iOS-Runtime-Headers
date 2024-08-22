// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTTEXTTOSPEECHROUTERSTREAMINGSTREAMINGCONTEXT_H
#define FTTEXTTOSPEECHROUTERSTREAMINGSTREAMINGCONTEXT_H

@protocol OspreyClientStreamingContext;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechRouterStreamingStreamingContext : NSObject {
    id<OspreyClientStreamingContext> *_grpcContext;
}




-(id)initWithGRPCStreamingCallContext:(id)arg0 ;
-(void)closeStream;
-(void)sendTextToSpeechRouterStreamingStreamingRequest:(id)arg0 ;


@end


#endif