// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTEVENTRECORDER_H
#define MTEVENTRECORDER_H

@class NSMutableArray;
@protocol MTEventRecorderDelegate;


#import "MTObject.h"

@interface MTEventRecorder : MTObject

@property (weak, nonatomic) NSObject<MTEventRecorderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *eventListeners; // ivar: _eventListeners
@property (nonatomic) BOOL monitorsLifecycleEvents;


+(id)_compositePromiseWithPromises:(id)arg0 resolvingResultFromPromise:(id)arg1 ;
+(id)_metricsDataApplyingAllowlisting:(id)arg0 usingRecorder:(id)arg1 ;
-(id)_amsDelegate;
-(id)_flushUnreportedEventsUsingRecorder:(id)arg0 ;
-(id)_recordEvent:(id)arg0 toTopic:(id)arg1 usingRecorder:(id)arg2 ;
-(id)_recordEvent:(id)arg0 usingRecorder:(id)arg1 ;
-(id)flushUnreportedEvents;
-(id)init;
-(id)initWithMetricsKit:(id)arg0 ;
-(id)recordEvent:(id)arg0 ;
-(id)recordEvent:(id)arg0 shouldSkipValidation:(BOOL)arg1 ;
-(id)recordEvent:(id)arg0 toTopic:(id)arg1 ;
-(id)sendMethod;
-(void)addEventListener:(id)arg0 ;
-(void)dealloc;
-(void)maybeSubscribeToFlushNotification;
-(void)removeEventListener:(id)arg0 ;


@end


#endif