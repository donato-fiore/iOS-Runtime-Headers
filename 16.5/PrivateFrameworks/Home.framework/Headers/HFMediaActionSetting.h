// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFMEDIAACTIONSETTING_H
#define HFMEDIAACTIONSETTING_H


#import <Foundation/Foundation.h>

#import "HFMediaPlaybackActionBuilder.h"
#import "HFPlaybackArchive.h"

@interface HFMediaActionSetting : NSObject

@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaActionBuilder; // ivar: _mediaActionBuilder
@property (nonatomic) NSInteger originalHMNonPausePlaybackState; // ivar: _originalHMNonPausePlaybackState
@property (retain, nonatomic) HFPlaybackArchive *playbackArchive; // ivar: _playbackArchive


-(id)initWithActionBuilder:(id)arg0 ;
-(void)updatePlaybackState:(NSInteger)arg0 ;


@end


#endif