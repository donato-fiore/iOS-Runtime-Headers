// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCREATERADIOSTATIONCOMMANDEVENT_H
#define MPCREATERADIOSTATIONCOMMANDEVENT_H

@class NSNumber, NSURL;


#import "MPRemoteCommandEvent.h"

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSNumber *privateListeningOverride; // ivar: _privateListeningOverride
@property (readonly, nonatomic, getter=isRequestingPlaybackInitialization) BOOL requestingPlaybackInitialization; // ivar: _requestingPlaybackInitialization
@property (readonly, nonatomic) NSURL *stationURL; // ivar: _stationURL


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif