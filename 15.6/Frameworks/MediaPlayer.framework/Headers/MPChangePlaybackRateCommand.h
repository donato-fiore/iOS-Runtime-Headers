// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCHANGEPLAYBACKRATECOMMAND_H
#define MPCHANGEPLAYBACKRATECOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPChangePlaybackRateCommand : MPRemoteCommand {
    float _preferredRate;
}


@property (copy, nonatomic) NSArray *supportedPlaybackRates; // ivar: _supportedPlaybackRates


-(float)preferredRate;
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithPlaybackRate:(float)arg0 ;
-(void)setPreferredRate:(float)arg0 ;


@end


#endif