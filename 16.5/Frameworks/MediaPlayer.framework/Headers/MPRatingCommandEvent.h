// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPRATINGCOMMANDEVENT_H
#define MPRATINGCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"

@interface MPRatingCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) float rating; // ivar: _rating


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif