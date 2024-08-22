// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLIENTSPACEGUIDANCECACHE_H
#define CLIENTSPACEGUIDANCECACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ClientSpaceGuidanceCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *lastUpdateTimestamps; // ivar: _lastUpdateTimestamps
@property (retain, nonatomic) NSMutableDictionary *purgeable; // ivar: _purgeable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *thresholds; // ivar: _thresholds
@property (nonatomic) CGFloat validity_interval; // ivar: _validity_interval


+(id)sharedCache;
-(BOOL)isValidForVolume:(id)arg0 urgency:(int)arg1 desiredSpace:(id)arg2 ;
-(BOOL)unserializedIsValidForVolume:(id)arg0 urgency:(int)arg1 desiredSpace:(id)arg2 ;
-(CGFloat)unserializedGetValidityInterval;
-(id)init;
-(id)unserializedThresholdForVolume:(id)arg0 urgency:(int)arg1 ;
-(id)valueForVolume:(id)arg0 urgency:(int)arg1 serviceName:(id)arg2 desiredSpace:(id)arg3 ;
-(void)invalidate;
-(void)unserializedSetValidityInterval:(CGFloat)arg0 ;
-(void)updatePurgeableForService:(id)arg0 volume:(id)arg1 urgency:(int)arg2 newPurgeable:(id)arg3 ;
-(void)updateThresholdsForVolume:(id)arg0 thresholdDictionary:(id)arg1 ;


@end


#endif