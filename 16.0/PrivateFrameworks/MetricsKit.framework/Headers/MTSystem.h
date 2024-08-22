// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSYSTEM_H
#define MTSYSTEM_H

@protocol MTEventFilter, OS_dispatch_queue;


#import "MTObject.h"
#import "MTEnvironment.h"
#import "MTEventRecorder.h"

@interface MTSystem : MTObject

@property (retain, nonatomic) MTEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) NSObject<MTEventFilter> *eventFilter; // ivar: _eventFilter
@property (retain, nonatomic) MTEventRecorder *eventRecorder; // ivar: _eventRecorder
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<MTEventFilter> *treatmentFilter; // ivar: _treatmentFilter


-(id)initWithMetricsKit:(id)arg0 ;


@end


#endif