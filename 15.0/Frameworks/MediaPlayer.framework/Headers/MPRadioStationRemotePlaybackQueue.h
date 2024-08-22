// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPRADIOSTATIONREMOTEPLAYBACKQUEUE_H
#define MPRADIOSTATIONREMOTEPLAYBACKQUEUE_H

@class NSString;


#import "MPRemotePlaybackQueue.h"

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSInteger stationID; // ivar: _stationID
@property (readonly, nonatomic) NSString *stationStringID; // ivar: _stationStringID


+(BOOL)supportsSecureCoding;
-(BOOL)verifyWithError:(*id)arg0 ;
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0 options:(id)arg1 ;


@end


#endif