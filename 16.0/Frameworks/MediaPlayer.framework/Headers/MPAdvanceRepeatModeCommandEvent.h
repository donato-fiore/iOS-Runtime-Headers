// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPADVANCEREPEATMODECOMMANDEVENT_H
#define MPADVANCEREPEATMODECOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPAdvanceRepeatModeCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL preservesRepeatMode; // ivar: _preservesRepeatMode


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif