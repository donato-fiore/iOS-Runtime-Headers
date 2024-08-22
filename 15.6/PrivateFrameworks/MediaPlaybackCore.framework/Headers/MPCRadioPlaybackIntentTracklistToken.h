// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCRADIOPLAYBACKINTENTTRACKLISTTOKEN_H
#define MPCRADIOPLAYBACKINTENTTRACKLISTTOKEN_H

@class MPModelRadioStation, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPCModelRadioContentReference.h"

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding>



@property (nonatomic) BOOL continueListeningStation; // ivar: _continueListeningStation
@property (copy, nonatomic) MPCModelRadioContentReference *nowPlayingContentReference; // ivar: _nowPlayingContentReference
@property (retain, nonatomic) MPModelRadioStation *radioStation; // ivar: _radioStation
@property (copy, nonatomic) NSURL *radioStationURL; // ivar: _radioStationURL
@property (copy, nonatomic) MPCModelRadioContentReference *seedContentReference; // ivar: _seedContentReference


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif