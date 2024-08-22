// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSAMPLEBUFFERGENERATORBATCH_H
#define AVSAMPLEBUFFERGENERATORBATCH_H


#import <Foundation/Foundation.h>

#import "AVSampleBufferGenerator.h"

@interface AVSampleBufferGeneratorBatch : NSObject {
    AVSampleBufferGenerator *_sampleGenerator;
    *OpaqueFigSampleGeneratorBatch _sampleGeneratorBatch;
    BOOL _openToRequests;
    *OpaqueFigSimpleMutex _stateMutex;
    id *_completionHandler;
}


@property (readonly, nonatomic) AVSampleBufferGenerator *_generator;


+(void)initialize;
-(BOOL)isOpenToRequests;
-(id)_completionHandler:(SEL)arg0 ;
-(id)init;
-(id)initWithGenerator:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)createAndAddSampleBufferForRequest:(id)arg0 error:(*id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)makeDataReadyWithCompletionHandler:(id)arg0 ;


@end


#endif