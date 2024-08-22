// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSAMPLEBUFFERRENDERSYNCHRONIZER_H
#define AVSAMPLEBUFFERRENDERSYNCHRONIZER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVSampleBufferRenderSynchronizerInternal.h"

@interface AVSampleBufferRenderSynchronizer : NSObject {
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}


@property (nonatomic) BOOL delaysRateChangeUntilHasSufficientMediaData;
@property (nonatomic) float rate;
@property (readonly) NSArray *renderers;
@property (readonly, retain) *OpaqueCMTimebase timebase;


+(id)_makeSTSLabel;
+(id)currentFigRenderSynchronizerFactory;
+(void)setFigRenderSynchronizerFactory:(id)arg0 forQueue:(id)arg1 ;
-(BOOL)_addRenderer:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canAddRendererInternal:(id)arg0 error:(*id)arg1 ;
-(BOOL)_multipleAudioRenderersDisallowed;
-(BOOL)_rendererConfigurationIsValid:(*id)arg0 ;
-(BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg0 atTime:(struct ? )arg1 withClientCompletionHandler:(id)arg2 ;
-(NSInteger)_addedAudioRendererCount;
-(NSInteger)_addedAudioRendererCountInternal;
-(id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg0 atTime:(struct ? )arg1 ;
-(id)_getClientCompletionHandlerForRenderer:(SEL)arg0 ;
-(id)_getTimebaseObserverForRenderer:(id)arg0 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)addPeriodicTimeObserverForInterval:(struct ? )arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(int)_initializeTimebase;
-(struct ? )currentTime;
-(void)_performRendererRemoval:(id)arg0 ;
-(void)_removeTimebaseObserverForRenderer:(id)arg0 ;
// -(void)_storeObserver:(id)arg0 clientCompletionHandler:(id)arg1 forRenderer:(unk)arg2  ;
-(void)_updateRateFromTimebase;
-(void)addRenderer:(id)arg0 ;
-(void)dealloc;
-(void)removeRenderer:(id)arg0 atTime:(struct ? )arg1 completionHandler:(id)arg2 ;
-(void)removeRenderer:(id)arg0 atTime:(struct ? )arg1 withCompletionHandler:(id)arg2 ;
-(void)removeTimeObserver:(id)arg0 ;


@end


#endif