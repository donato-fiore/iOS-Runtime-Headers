// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPZOOMPROCESSORINPUT_H
#define BWDEEPZOOMPROCESSORINPUT_H

@protocol BWDeepZoomProcessorInputDelegate;


#import "BWStillImageProcessorInput.h"

@interface BWDeepZoomProcessorInput : BWStillImageProcessorInput {
    *opaqueCMSampleBuffer _sampleBuffer;
    NSUInteger _bufferType;
}


@property (readonly, nonatomic) NSUInteger bufferType;
@property (retain, nonatomic) NSObject<BWDeepZoomProcessorInputDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) *opaqueCMSampleBuffer sampleBuffer;
@property (nonatomic) BOOL sampleBufferSet; // ivar: _sampleBufferSet


-(id)description;
-(void)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 bufferType:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif