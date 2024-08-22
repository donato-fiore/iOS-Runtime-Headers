// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SVLOOPER_H
#define SVLOOPER_H

@class AVPlayer;

#import <Foundation/Foundation.h>

#import "SVVideoDurationObserver.h"

@interface SVLooper : NSObject

@property (readonly, nonatomic) SVVideoDurationObserver *durationObserver; // ivar: _durationObserver
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player


-(id)initWithPlayer:(id)arg0 ;


@end


#endif