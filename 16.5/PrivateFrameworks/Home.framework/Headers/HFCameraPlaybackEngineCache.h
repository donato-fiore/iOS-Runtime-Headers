// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAPLAYBACKENGINECACHE_H
#define HFCAMERAPLAYBACKENGINECACHE_H

@class NSMutableArray, NSArray, NSMapTable;

#import <Foundation/Foundation.h>


@interface HFCameraPlaybackEngineCache : NSObject

@property (retain, nonatomic) NSMutableArray *allCameraEvents; // ivar: _allCameraEvents
@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (retain, nonatomic) NSMapTable *firstOfTheDayClips; // ivar: _firstOfTheDayClips
@property (retain, nonatomic) NSMapTable *firstOfTheDayEvents; // ivar: _firstOfTheDayEvents


-(BOOL)isEventDisplayable:(id)arg0 ;
-(id)hfCameraRecordingEventsFromArray:(id)arg0 ;
-(id)init;
-(id)timelineEligibleEventsFromEvents:(id)arg0 ;
-(void)_setupDebugHandler;
-(void)dealloc;
-(void)loadEvents:(id)arg0 ;
-(void)prepareAndAddClip:(id)arg0 toSortedEvents:(id)arg1 ;
-(void)removeEventUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)resetFirstOfTheDayContainers;
-(void)resetWithEvents:(id)arg0 ;
-(void)updateContainerForCameraRecordingEvent:(id)arg0 ;
-(void)updateFirstOfTheDayContainersWithEvent:(id)arg0 ;
-(void)updateWithEvents:(id)arg0 completion:(id)arg1 ;


@end


#endif