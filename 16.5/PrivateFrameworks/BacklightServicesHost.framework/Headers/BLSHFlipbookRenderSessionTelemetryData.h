// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHFLIPBOOKRENDERSESSIONTELEMETRYDATA_H
#define BLSHFLIPBOOKRENDERSESSIONTELEMETRYDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "BLSHFlipbookFramesHistogram.h"

@interface BLSHFlipbookRenderSessionTelemetryData : NSObject

@property (readonly, nonatomic) CGFloat accumulatedLayoutDuration; // ivar: _accumulatedLayoutDuration
@property (readonly, nonatomic) CGFloat accumulatedRenderDuration; // ivar: _accumulatedRenderDuration
@property (readonly, nonatomic) BOOL didFailToRender; // ivar: _didFailToRender
@property (readonly, nonatomic) unsigned int environmentCount;
@property (readonly, nonatomic) NSArray *environmentIdentifiers; // ivar: _environmentIdentifiers
@property (readonly, nonatomic) NSString *firstEnvironmentIdentifier;
@property (readonly, nonatomic) BOOL preventedSleep;
@property (readonly, nonatomic) CGFloat preventedSleepDuration; // ivar: _preventedSleepDuration
@property (readonly, nonatomic) NSString *reasonEnded; // ivar: _reasonEnded
@property (readonly, nonatomic) BLSHFlipbookFramesHistogram *sessionFramesHistogram; // ivar: _sessionFramesHistogram
@property (readonly, nonatomic) unsigned int timedOutEnvironmentCount; // ivar: _timedOutEnvironmentCount
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) CGFloat totalPreparationDuration; // ivar: _totalPreparationDuration


-(id)description;
-(id)initWithTimestamp:(CGFloat)arg0 environmentIdentifiers:(id)arg1 reasonEnded:(id)arg2 sessionFramesHistogram:(id)arg3 totalPreparationDuration:(CGFloat)arg4 accumulatedLayoutDuration:(CGFloat)arg5 accumulatedRenderDuration:(CGFloat)arg6 preventedSleepDuration:(CGFloat)arg7 didFailToRender:(BOOL)arg8 timedOutEnvironmentCount:(unsigned int)arg9 ;


@end


#endif