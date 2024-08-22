// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRINSIGHTS_H
#define CRINSIGHTS_H

@class NSMutableDictionary;
@protocol CRInsightsDelegate;

#import <Foundation/Foundation.h>


@interface CRInsights : NSObject

@property (weak) NSObject<CRInsightsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *threadsToContexts; // ivar: _threadsToContexts


+(id)sharedInsights;
+(void)dispatchAsyncOnQueue:(id)arg0 block:(id)arg1 ;
-(id)allowOverrideWithKey:(id)arg0 forResultFromBlock:(id)arg1 ;
-(id)allowOverrideWithKey:(id)arg0 forValue:(id)arg1 ;
-(id)cameraReaderForCurrentThread;
-(id)currentContext;
-(id)enterSection:(id)arg0 withDescription:(id)arg1 ;
-(id)init;
-(id)takeContextSnapshot;
-(void)attachContextCopyToCurrentThread:(id)arg0 ;
-(void)attachContextToCurrentThread:(id)arg0 ;
-(void)attachNewContextToCurrentThreadWithCameraReader:(id)arg0 ;
-(void)leaveSection:(id)arg0 ;
-(void)notifySampleBufferProcessingEnd:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)notifySampleBufferProcessingStart:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)provideInsightValue:(id)arg0 forKey:(id)arg1 ;
-(void)resetContextForCurrentThread;
-(void)setContextValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif