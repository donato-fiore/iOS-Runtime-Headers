// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTCINEMATICTAPRESPONSE_H
#define FTCINEMATICTAPRESPONSE_H


#import <Foundation/Foundation.h>

#import "FTCinematicTapRequest.h"
#import "FTCinematicTrack.h"

@interface FTCinematicTapResponse : NSObject

@property (retain, nonatomic) FTCinematicTapRequest *request; // ivar: _request
@property (retain, nonatomic) FTCinematicTrack *tappedTrack; // ivar: _tappedTrack
@property (nonatomic) BOOL wasSuccessful; // ivar: _wasSuccessful




@end


#endif