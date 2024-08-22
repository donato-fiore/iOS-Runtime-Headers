// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLEBUFFERGENERATOR_H
#define AVSAMPLEBUFFERGENERATOR_H


#import <Foundation/Foundation.h>

#import "AVSampleBufferGeneratorInternal.h"

@interface AVSampleBufferGenerator : NSObject {
    AVSampleBufferGeneratorInternal *_generator;
}




+(void)initialize;
+(void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 completionHandler:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 timebase:(struct OpaqueCMTimebase *)arg1 ;
-(struct opaqueCMSampleBuffer *)createSampleBufferForRequest:(id)arg0 ;
-(void)dealloc;
-(void)generateSampleBuffersForRequests:(id)arg0 sampleHandler:(id)arg1 ;


@end


#endif