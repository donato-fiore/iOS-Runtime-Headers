// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCTRANSFORMEDRESULTSSTREAM_H
#define FCTRANSFORMEDRESULTSSTREAM_H

@class NSString;
@protocol FCStreaming;

#import <Foundation/Foundation.h>


@interface FCTransformedResultsStream : NSObject <FCStreaming>



@property (copy, nonatomic) id *asyncTransformBlock; // ivar: _asyncTransformBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FCStreaming> *stream; // ivar: _stream
@property (readonly) Class superclass;


-(id)fetchMoreResultsWithLimit:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithStream:(id)arg0 asyncTransformBlock:(id)arg1 ;


@end


#endif