// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTRANSFORMEDSTREAM_H
#define FCTRANSFORMEDSTREAM_H

@class NSString;
@protocol FCStreaming;

#import <Foundation/Foundation.h>


@interface FCTransformedStream : NSObject <FCStreaming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<FCStreaming> *stream; // ivar: _stream
@property (readonly) Class superclass;
@property (copy, nonatomic) id *transformBlock; // ivar: _transformBlock


-(id)fetchMoreResultsWithLimit:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;
-(id)initWithStream:(id)arg0 transformBlock:(id)arg1 ;


@end


#endif