// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYGRPCSTREAMINGCONTEXT_H
#define OSPREYGRPCSTREAMINGCONTEXT_H

@class NSInputStream, NSString;
@protocol OspreyClientStreamingContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OspreyMessageReader.h"
#import "OspreyMessageWriter.h"
#import "OspreyBufferedOutputStream.h"

@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id *_completion;
    OspreyMessageReader *_messageReader;
    OspreyMessageWriter *_messageWriter;
    NSInputStream *_inputStream;
    OspreyBufferedOutputStream *_outputStream;
    BOOL _closed;
}


@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled; // ivar: _compressionEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithQueue:(id)arg0 responseHandler:(id)arg1 completion:(unk)arg2  ;
-(void)_writeFrame:(id)arg0 compressed:(BOOL)arg1 error:(*id)arg2 ;
-(void)bindToUrlRequest:(id)arg0 ;
-(void)completeWithError:(id)arg0 ;
-(void)finishWriting;
-(void)handleResponseData:(id)arg0 ;
-(void)writeFrame:(id)arg0 ;
-(void)writeFrame:(id)arg0 compressed:(BOOL)arg1 ;


@end


#endif