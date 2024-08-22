// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODESCREENRECORDINGFEATURIZER_H
#define ATXMODESCREENRECORDINGFEATURIZER_H

@class BMBiomeScheduler, BPSSink, NSString;
@protocol ATXModeFeaturizer, OS_dispatch_queue, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeScreenRecordingFeaturizer : NSObject <ATXModeFeaturizer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_provideFeaturesWithScreenRecordingEvent:(id)arg0 ;
-(id)provideFeatures;
-(void)_processNewScreenRecordingEvent:(id)arg0 ;
-(void)beginListening;
-(void)stopListening;


@end


#endif