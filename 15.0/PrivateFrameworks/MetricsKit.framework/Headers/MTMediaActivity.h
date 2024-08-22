// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMEDIAACTIVITY_H
#define MTMEDIAACTIVITY_H

@protocol MTMediaPlaylistItem;

#import <Foundation/Foundation.h>

#import "MTPAFKit.h"
#import "MTMetricsData.h"

@interface MTMediaActivity : NSObject

@property (weak, nonatomic) MTPAFKit *pafKit; // ivar: _pafKit
@property (retain, nonatomic) NSObject<MTMediaPlaylistItem> *playlistItem; // ivar: _playlistItem
@property (retain, nonatomic) MTMetricsData *startMetricsData; // ivar: _startMetricsData
@property (retain, nonatomic) MTMetricsData *stopMetricsData; // ivar: _stopMetricsData
@property (nonatomic) NSInteger type; // ivar: _type


+(NSUInteger)startOverallPositionForItem:(id)arg0 ;
-(BOOL)isStopped;
-(NSUInteger)positionFromOverallPosition:(NSUInteger)arg0 ;
-(id)eventDataForTransitioningEvents;
-(id)initWithType:(NSInteger)arg0 playlistItem:(id)arg1 pafKit:(id)arg2 ;
-(id)startEventHandler;
-(id)stopEventHandler;
-(void)startedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)stoppedAtOverallPosition:(NSUInteger)arg0 type:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;


@end


#endif