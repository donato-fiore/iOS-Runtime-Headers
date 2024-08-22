// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JEMEDIAACTIVITY_H
#define JEMEDIAACTIVITY_H

@protocol JEMediaPlaylistItem;

#import <Foundation/Foundation.h>


@interface JEMediaActivity : NSObject {
    ? pipelineHandler;
}


@property (nonatomic, readonly) BOOL isStopped;
@property (nonatomic, retain) NSObject<JEMediaPlaylistItem> *playlistItem; // ivar: playlistItem
@property (nonatomic) NSInteger type; // ivar: type


-(NSUInteger)positionWithOverallPosition:(NSUInteger)arg0 ;
-(id)eventDataForTransitioningEvents;
-(id)init;
-(id)initWithType:(NSInteger)arg0 playlistItem:(id)arg1 pipeline:(id)arg2 topic:(id)arg3 ;
-(id)startMetricsFields;
-(id)stopMetricsFields;
-(void)postProcessedStartMetricsFieldsWithCompletion:(id)arg0 ;
-(void)postProcessedStopMetricsFieldsWithCompletion:(id)arg0 ;
-(void)startedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 transitioningEventData:(id)arg4 ;
-(void)stoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 transitioningEventData:(id)arg4 ;


@end


#endif