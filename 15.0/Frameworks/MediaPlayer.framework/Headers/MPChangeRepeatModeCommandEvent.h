// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCHANGEREPEATMODECOMMANDEVENT_H
#define MPCHANGEREPEATMODECOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL preservesRepeatMode; // ivar: _preservesRepeatMode
@property (readonly, nonatomic) NSInteger repeatType; // ivar: _repeatType


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif