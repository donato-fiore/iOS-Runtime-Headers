// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVISIBPCONTROLLER_H
#define BWVISIBPCONTROLLER_H

@class NSString;
@protocol VISProcessorDelegate, BWVISProcessorController, VISProcessor, VISConfiguration, BWVISProcessorDelegate;

#import <Foundation/Foundation.h>

#import "BWVISProcessorControllerConfiguration.h"

@interface BWVISIBPController : NSObject <VISProcessorDelegate, BWVISProcessorController>

 {
    id<VISProcessor> *_visProcessor;
    id<VISConfiguration> *_visConfiguration;
    BOOL _buffersEnqueued;
}


@property (retain, nonatomic) BWVISProcessorControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BWVISProcessorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flipHorizontalOrientationEnabled; // ivar: _flipHorizontalOrientationEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL longPressModeEnabled; // ivar: _longPressModeEnabled
@property (readonly) Class superclass;


+(void)initialize;
-(int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)finishPendingProcessing;
-(int)prepareToProcess;
-(void)dealloc;
-(void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer *)arg0 withStatus:(int)arg1 ;


@end


#endif