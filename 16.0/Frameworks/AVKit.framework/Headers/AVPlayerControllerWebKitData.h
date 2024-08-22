// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERCONTROLLERWEBKITDATA_H
#define AVPLAYERCONTROLLERWEBKITDATA_H

@protocol AVPlayerControllerWebKitDelegate;

#import <Foundation/Foundation.h>

#import "AVPlayerController.h"

@interface AVPlayerControllerWebKitData : NSObject {
    AVPlayerController *_playerController;
}


@property (weak, nonatomic) NSObject<AVPlayerControllerWebKitDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isScrubbing) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) CGFloat seekToTime; // ivar: _seekToTime


-(id)initWithPlayerController:(id)arg0 ;


@end


#endif