// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCHANGESHUFFLEMODECOMMANDEVENT_H
#define MPCHANGESHUFFLEMODECOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPChangeShuffleModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL preservesShuffleMode; // ivar: _preservesShuffleMode
@property (readonly, nonatomic) NSInteger shuffleType; // ivar: _shuffleType


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif