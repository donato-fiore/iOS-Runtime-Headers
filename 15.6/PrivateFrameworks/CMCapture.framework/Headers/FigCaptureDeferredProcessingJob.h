// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREDEFERREDPROCESSINGJOB_H
#define FIGCAPTUREDEFERREDPROCESSINGJOB_H

@class NSString;
@protocol FigCaptureDeferredProcessingJobDelegate;

#import <Foundation/Foundation.h>

#import "BWDeferredProcessingContainer.h"
#import "FigCaptureDeferredPhotoProcessorRequest.h"

@interface FigCaptureDeferredProcessingJob : NSObject {
    id<FigCaptureDeferredProcessingJobDelegate> *_delegate;
}


@property (readonly, nonatomic) BWDeferredProcessingContainer *container; // ivar: _container
@property (nonatomic) NSInteger durationNS; // ivar: _durationNS
@property (readonly, nonatomic) NSString *masterPortType; // ivar: _masterPortType
@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *processorRequest; // ivar: _processorRequest
@property (nonatomic) NSInteger startNS; // ivar: _startNS


+(BOOL)isPotentiallyRecoverableError:(int)arg0 ;
-(id)initWithProcessorRequest:(id)arg0 delegate:(id)arg1 error:(*int)arg2 ;
-(void)completedWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)failedWithError:(int)arg0 ;
-(void)start;


@end


#endif