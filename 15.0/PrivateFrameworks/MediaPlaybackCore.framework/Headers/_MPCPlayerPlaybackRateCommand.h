// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYERPLAYBACKRATECOMMAND_H
#define _MPCPLAYERPLAYBACKRATECOMMAND_H

@class MPCPlayerItemCommand, NSString, NSArray;
@protocol MPCPlayerPlaybackRateCommand;



@interface _MPCPlayerPlaybackRateCommand : MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float preferredPlaybackRate; // ivar: _preferredPlaybackRate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedPlaybackRates; // ivar: _supportedPlaybackRates


-(id)setPlaybackRate:(float)arg0 ;


@end


#endif