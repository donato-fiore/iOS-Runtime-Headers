// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCAMERAPLAYBACKENGINECACHE_H
#define HFCAMERAPLAYBACKENGINECACHE_H

@class NSMutableArray, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFCameraPlaybackEngineCache : NSObject

@property (retain, nonatomic) NSMutableArray *allCameraEvents; // ivar: _allCameraEvents
@property (readonly, copy, nonatomic) NSArray *cameraClips;
@property (readonly, copy, nonatomic) NSArray *cameraEvents;
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayClips; // ivar: _firstOfTheDayClips
@property (retain, nonatomic) NSMutableDictionary *firstOfTheDayEvents; // ivar: _firstOfTheDayEvents


-(BOOL)isEventDisplayable:(id)arg0 ;
-(id)hfCameraRecordingEventsFromArray:(id)arg0 ;
-(id)init;
-(id)timelineEligibleEventsFromEvents:(id)arg0 ;
-(void)_updateFirstOfDayEvents:(id)arg0 withEvent:(id)arg1 previousEvent:(id)arg2 ;
-(void)dealloc;
-(void)loadEvents:(id)arg0 ;
-(void)prepareAndAddClipEvent:(id)arg0 toEvents:(id)arg1 ;
-(void)prepareFirstOfTheDayEvents;
-(void)removeEventUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)resetWithEvents:(id)arg0 ;
-(void)updateContainerForCameraRecordingEvent:(id)arg0 ;
-(void)updateFirstOfTheDayEvents:(id)arg0 firstOfTheDayClips:(id)arg1 withEvent:(id)arg2 previousEvent:(id)arg3 ;
-(void)updateForEvents:(id)arg0 completion:(id)arg1 ;


@end


#endif